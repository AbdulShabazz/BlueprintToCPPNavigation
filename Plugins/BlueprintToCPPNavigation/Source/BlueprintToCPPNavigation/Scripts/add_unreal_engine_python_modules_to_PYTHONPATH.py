import os
import sys
import winreg
import ctypes

def get_unreal_python_path():
    """
    Prompt the user to input the Unreal Engine Python module path and validate it.
    """
    if len(sys.argv) > 1:
        return sys.argv[1]
    else:
        while True:
            unreal_path = input(
                "Enter the full path to your Unreal Engine Python modules (e.g., "
                "C:\\Program Files\\Epic Games\\UE_5.1\\Engine\\Plugins\\Experimental\\PythonScriptPlugin\\Binaries\\Win64): "
            ).strip('"').strip()

            if not os.path.exists(unreal_path):
                print(f"Error: The path '{unreal_path}' does not exist. Please try again.\n")
                continue

            # Optional: Check for specific files or folders to validate the path
            # For example, check if 'unreal.py' exists in the path
            expected_file = os.path.join(unreal_path, 'unreal.py')
            if not os.path.isfile(expected_file):
                print(
                    f"Warning: 'unreal.py' not found in '{unreal_path}'. "
                    "Please ensure this is the correct path."
                )
                proceed = input("Do you want to proceed? (y/n): ").lower()
                if proceed != 'y':
                    print("Let's try entering the path again.\n")
                    continue

            return unreal_path

def get_user_environment_variable(var_name):
    """
    Retrieve the value of a user-level environment variable.
    """
    try:
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, "Environment", 0, winreg.KEY_READ) as key:
            value, _ = winreg.QueryValueEx(key, var_name)
            return value
    except FileNotFoundError:
        return ''

def set_user_environment_variable(var_name, value):
    """
    Set the value of a user-level environment variable.
    """
    try:
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, "Environment", 0, winreg.KEY_SET_VALUE) as key:
            winreg.SetValueEx(key, var_name, 0, winreg.REG_EXPAND_SZ, value)
    except PermissionError:
        print(f"Error: Insufficient permissions to set the '{var_name}' environment variable.")
        sys.exit(1)

def broadcast_environment_change():
    """
    Notify the system that environment variables have changed.
    """
    HWND_BROADCAST = 0xFFFF
    WM_SETTINGCHANGE = 0x1A
    SMTO_ABORTIFHUNG = 0x0002

    result = ctypes.c_long()
    send_result = ctypes.windll.user32.SendMessageTimeoutW(
        HWND_BROADCAST,
        WM_SETTINGCHANGE,
        0,
        "Environment",
        SMTO_ABORTIFHUNG,
        5000,
        ctypes.byref(result)
    )

    if send_result == 0:
        print("Warning: Unable to broadcast environment variable change.")

def update_pythonpath(unreal_path):
    """
    Update the PYTHONPATH environment variable by appending the Unreal Engine path.
    """
    var_name = 'PYTHONPATH'
    current_pythonpath = get_user_environment_variable(var_name)
    paths = current_pythonpath.split(';') if current_pythonpath else []

    if unreal_path in paths:
        print("\nThe Unreal Engine path is already present in PYTHONPATH. No changes made.")
        return

    # Append the new path
    new_pythonpath = f"{current_pythonpath};{unreal_path}" if current_pythonpath else unreal_path

    set_user_environment_variable(var_name, new_pythonpath)
    print("\nPYTHONPATH has been updated successfully.")

    # Notify the system about the environment variable change
    broadcast_environment_change()
    print("Environment variable change broadcasted. Please restart your Command Prompt or IDE to apply changes.")

def main():
    """
    Main function to orchestrate the environment variable update.
    """
    if not sys.platform.startswith('win'):
        print("This script is intended to run on Windows.")
        sys.exit(1)

    print("=== Unreal Engine PYTHONPATH Updater ===\n")
    unreal_path = get_unreal_python_path()
    update_pythonpath(unreal_path)

if __name__ == "__main__":
    main()