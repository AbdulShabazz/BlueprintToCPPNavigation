# Unreal Engine Python Integration Toolkit

Welcome to the **Unreal Engine Python Integration Toolkit**, a collection of Python scripts designed to streamline and enhance your Unreal Engine development workflow. This toolkit includes:

1. **`update_pythonpath.py`**: Automates the process of updating the `PYTHONPATH` environment variable to include Unreal Engine's Python modules.
2. **`BlueprintTranspiler.py`**: Converts Unreal Engine Blueprint GUIDs into equivalent C++ code, facilitating a seamless transition between visual scripting and code-based development.

---

## Table of Contents

- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
  - [1. Updating PYTHONPATH](#1-updating-pythonpath)
    - [Usage Example](#usage-example)
  - [2. Converting Blueprint GUID to C++](#2-converting-blueprint-guid-to-cpp)
    - [Usage Example](#usage-example-1)
- [Script Descriptions](#script-descriptions)
  - [`update_pythonpath.py`](#update_pythonpathpy)
  - [`BlueprintTranspiler.py`](#BlueprintTranspilerpy)
- [Additional Notes](#additional-notes)
- [Contributing](#contributing)
- [License](#license)

---

## Prerequisites

Before using the scripts in this toolkit, ensure that your system meets the following requirements:

- **Operating System**: Windows 10 or later
- **Python**: Python 3.7 or higher installed
- **Unreal Engine**: Unreal Engine 4.20 or higher installed with the Python plugin enabled

---

## Installation

1. **Clone the Repository**:
   
   Clone this repository to your local machine using Git:

   ```bash
   git clone https://github.com/yourusername/unreal-python-toolkit.git
   ```

   Alternatively, you can download the repository as a ZIP file and extract it to your desired directory.

2. **Navigate to the Directory**:

   ```bash
   cd unreal-python-toolkit
   ```

3. **Ensure Python is Installed**:

   Verify that Python is installed and accessible via the command line:

   ```bash
   python --version
   ```

   If Python is not installed, download and install it from the [official website](https://www.python.org/downloads/).

4. **Install Required Python Packages**:

   While the provided scripts use standard Python libraries, ensure that any additional dependencies are installed. For the current scripts, no extra packages are required.

---

## Usage

The toolkit consists of two main scripts: `update_pythonpath.py` and `BlueprintTranspiler.py`. Below are detailed instructions on how to use each script.

### 1. Updating PYTHONPATH

The `update_pythonpath.py` script automates the process of adding Unreal Engine's Python module path to the `PYTHONPATH` environment variable on Windows.

#### Usage Example

1. **Open Command Prompt**:

   Press `Win + R`, type `cmd`, and press `Enter`.

2. **Navigate to the Toolkit Directory**:

   ```bash
   cd path\to\unreal-python-toolkit
   ```

3. **Run the Script**:

   ```bash
   python update_pythonpath.py
   ```

4. **Provide the Unreal Engine Python Module Path**:

   When prompted, enter the full path to Unreal Engine's Python modules. For example:

   ```
   Enter the full path to your Unreal Engine Python modules (e.g., C:\Program Files\Epic Games\UE_5.1\Engine\Plugins\Experimental\PythonScriptPlugin\Binaries\Win64):
   ```

   **Sample Input**:

   ```
   C:\Program Files\Epic Games\UE_5.1\Engine\Plugins\Experimental\PythonScriptPlugin\Binaries\Win64
   ```

5. **Confirmation**:

   The script will validate the path and update the `PYTHONPATH` environment variable accordingly. Upon successful completion, you will see:

   ```
   PYTHONPATH has been updated successfully.
   Environment variable change broadcasted. Please restart your Command Prompt or IDE to apply changes.
   ```

6. **Verification**:

   To verify that the `PYTHONPATH` has been updated, open a new Command Prompt window and run:

   ```bash
   echo %PYTHONPATH%
   ```

   You should see the Unreal Engine Python path included in the output.

---

### 2. Converting Blueprint GUID to C++

The `BlueprintTranspiler.py` script allows you to convert a given Unreal Engine Blueprint GUID into its equivalent C++ code, facilitating a bridge between visual scripting and code-based development.

#### Usage Example

1. **Ensure PYTHONPATH is Updated**:

   Before running this script, ensure that `PYTHONPATH` includes Unreal Engine's Python modules by following the steps in the [Updating PYTHONPATH](#1-updating-pythonpath) section.

2. **Open Command Prompt**:

   Press `Win + R`, type `cmd`, and press `Enter`.

3. **Navigate to the Toolkit Directory**:

   ```bash
   cd path\to\unreal-python-toolkit
   ```

4. **Run the Script with a Blueprint GUID**:

   ```bash
   python BlueprintTranspiler.py <Blueprint_GUID>
   ```

   **Replace `<Blueprint_GUID>`** with the actual GUID of the Blueprint you wish to convert.

   **Example**:

   ```bash
   python BlueprintTranspiler.py 1234567890abcdef1234567890abcdef
   ```

5. **Output**:

   The script will process the provided GUID and generate the corresponding C++ code, saving it to a specified file or displaying it in the console.

   ```
   Successfully converted Blueprint GUID 1234567890abcdef1234567890abcdef to C++ code.
   Output saved to: C:\path\to\unreal-python-toolkit\GeneratedCpp\Blueprint_1234567890abcdef1234567890abcdef.cpp
   ```

6. **Review the Generated C++ Code**:

   Navigate to the `GeneratedCpp` directory within the toolkit folder to find the generated C++ files corresponding to your Blueprint.

---

## Script Descriptions

### `update_pythonpath.py`

**Purpose**: Automates the addition of Unreal Engine's Python module path to the `PYTHONPATH` environment variable on Windows systems.

**Features**:

- **User Input & Validation**: Prompts the user for the Unreal Engine Python module path and validates its existence.
- **Environment Variable Modification**: Appends the provided path to the `PYTHONPATH` if it's not already present.
- **System Notification**: Broadcasts a system message to notify running applications of the environment variable change, eliminating the need for a system restart.

**Usage**:

Run the script and follow the on-screen prompts to update your `PYTHONPATH`.

**Script Location**: Located in the root directory of the toolkit.

---

### `BlueprintTranspiler.py`

**Purpose**: Converts Unreal Engine Blueprint GUIDs into their equivalent C++ code, enabling developers to transition from visual scripting to code-based implementations seamlessly.

**Features**:

- **GUID Processing**: Accepts a Blueprint GUID as input and retrieves the corresponding Blueprint asset.
- **C++ Code Generation**: Translates the visual scripting logic of the Blueprint into equivalent C++ code, adhering to Unreal Engine's coding standards.
- **Output Management**: Saves the generated C++ code to a designated directory for easy access and integration into your Unreal Engine project.

**Usage**:

Provide the Blueprint GUID as a command-line argument when running the script to generate the corresponding C++ code.

**Script Location**: Located in the root directory of the toolkit.

**Example Command**:

```bash
python BlueprintTranspiler.py 1234567890abcdef1234567890abcdef
```

**Note**: Ensure that the Blueprint GUID provided is valid and corresponds to an existing Blueprint asset within your Unreal Engine project.

---

## Additional Notes

- **Administrator Privileges**: The `update_pythonpath.py` script modifies user-level environment variables and typically does not require administrative privileges. However, modifying system-wide environment variables would require elevated permissions.

- **Virtual Environments**: If you are using Python virtual environments, ensure that the `PYTHONPATH` is correctly set within the environment to include Unreal Engine's Python modules.

- **Unreal Engine Documentation**: For more detailed information on Unreal Engine's Python API, refer to the [official documentation](https://docs.unrealengine.com/en-US/ProgrammingAndScripting/ProgrammingWithPython/index.html).

- **Error Handling**: Both scripts include basic error handling. For more robust implementations, consider enhancing the scripts with additional validations and exception handling mechanisms.

---

## Contributing

Contributions are welcome! If you have suggestions, bug reports, or feature requests, please open an issue or submit a pull request on the [GitHub repository - Seagat2011](https://github.com/Seagat2011/).

---

## License

This project is licensed under the [MIT License](LICENSE).