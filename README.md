# Blueprint-to-C++ Navigation Plugin

## Overview

The **Blueprint-to-C++ Navigation Plugin** enhances the Unreal Engine editor by allowing developers to seamlessly navigate between Blueprint nodes and their corresponding C++ code. With this plugin, you can right-click on any node within a Blueprint graph and select **"Go to Definition"** to jump directly to the relevant C++ implementation in your code editor.

## Features

- **Context Menu Integration**: Adds a **"Go to Definition"** option to the right-click context menu of Blueprint nodes.
- **Seamless Navigation**: Opens the corresponding C++ file and highlights the exact line of code.
- **Bidirectional Workflow**: Facilitates a smoother transition between visual scripting and traditional C++ coding.
- **Productivity Boost**: Reduces the time spent searching for code implementations, enhancing developer efficiency.

## Prerequisites

- **Unreal Engine 4.26 or later** (Compatible with Unreal Engine 5)
- **Visual Studio 2019 or later** (for Windows) or **Xcode** (for macOS)
- **Access to Unreal Engine Source Code** (optional but recommended for advanced features)

## Installation

1. **Clone or Download the Plugin**:

   - Download the plugin from the repository or clone it using:
     ```bash
     git clone https://github.com/YourUsername/BlueprintToCppNavigation.git
     ```

2. **Copy to Plugins Folder**:

   - Place the **`BlueprintToCppNavigation`** folder into your project's **`Plugins`** directory:
     ```
     YourUnrealProject/
     ├── Plugins/
     │   └── BlueprintToCppNavigation/
     ```

   - If the **`Plugins`** folder doesn't exist, create it at the root of your project directory.

3. **Regenerate Project Files**:

   - Right-click on your **`.uproject`** file and select **"Generate Visual Studio project files"** (or the equivalent for your IDE).

4. **Compile the Plugin**:

   - Open your project solution in Visual Studio or Xcode.
   - Build the project to compile the plugin.

5. **Enable the Plugin in Unreal Editor**:

   - Launch Unreal Editor.
   - Navigate to **Edit** > **Plugins**.
   - Search for **"Blueprint-to-C++ Navigation"** in the **Installed** section.
   - Check the **Enabled** box.
   - Restart the editor if prompted.

## Usage

### Transpiling Blueprints to C++

Before you can navigate from Blueprint nodes to C++ code, you need to transpile your Blueprints:

1. **Open Your Blueprint**:

   - Navigate to the Blueprint you wish to transpile in the **Content Browser**.

2. **Transpile the Blueprint**:

   - Right-click on the Blueprint asset.
   - Select **"Transpile to C++"** from the context menu.
   - The plugin will generate corresponding C++ code and place it in your project's **`Source`** directory.

3. **Compile the Generated Code**:

   - Regenerate project files if necessary.
   - Build your project to compile the new C++ classes.

### Navigating to C++ Definitions

1. **Open the Blueprint Editor**:

   - Double-click on a Blueprint asset to open it in the Blueprint editor.

2. **Right-Click on a Node**:

   - In the event graph or function graph, right-click on any node for which C++ code has been generated.

3. **Select "Go to Definition"**:

   - From the context menu, click on **"Go to Definition"**.
   - Your default code editor will open the corresponding C++ file and highlight the relevant line of code.

### Synchronizing Changes

- **From Blueprint to C++**:

  - After making changes to a Blueprint, re-run the **"Transpile to C++"** action to update the generated code.

- **From C++ to Blueprint**:

  - If you modify the generated C++ code, ensure that the changes are compatible with the Blueprint. You may need to refresh or recompile the Blueprint within the editor.

## Configuration

### Setting Up the Default Code Editor

- **Unreal Editor Preferences**:

  - Go to **Edit** > **Editor Preferences** > **Source Code**.
  - Select your preferred code editor from the **Source Code Editor** dropdown.

### Customizing Transpilation Settings

- **Transpilation Options**:

  - Access plugin settings via **Edit** > **Project Settings** > **Plugins** > **Blueprint-to-C++ Navigation**.
  - Configure options such as output directories, naming conventions, and code style preferences.

## Limitations

- **Complex Nodes**: Some Blueprint nodes may not have direct C++ equivalents. The plugin may skip these nodes or require manual implementation.
- **Performance**: Transpiling very large Blueprints can take time. Be patient during the transpilation process.
- **Synchronization**: Automatic synchronization between Blueprints and C++ code is limited. Manual transpilation is required after changes.

## Troubleshooting

- **"Go to Definition" Not Showing**:

  - Ensure that the Blueprint has been transpiled to C++.
  - Confirm that the plugin is enabled and properly installed.

- **C++ Code Not Opening**:

  - Check that your code editor is correctly set in the Unreal Editor preferences.
  - Verify that the generated C++ code compiles without errors.

- **Errors During Transpilation**:

  - Review the output log for specific error messages.
  - Ensure that your Blueprint doesn't contain unsupported nodes or constructs.

## Uninstallation

1. **Disable the Plugin**:

   - In Unreal Editor, go to **Edit** > **Plugins**.
   - Uncheck the **Enabled** box next to **"Blueprint-to-C++ Navigation"**.

2. **Remove Plugin Files**:

   - Delete the **`BlueprintToCppNavigation`** folder from your project's **`Plugins`** directory.

3. **Remove Generated Code**:

   - Delete any generated C++ files from your project's **`Source`** directory if you no longer need them.

4. **Regenerate Project Files**:

   - Right-click on your **`.uproject`** file and select **"Generate Visual Studio project files"**.

## Contributing

We welcome contributions from the community!

- **Report Issues**: Use the issue tracker to report bugs or request features.
- **Submit Pull Requests**: Follow the project's coding standards and submit pull requests for review.
- **Join Discussions**: Participate in discussions to help improve the plugin.

## License

This plugin is released under the [MIT License](LICENSE).

## Acknowledgements

- **Unreal Engine Community**: For extensive documentation and support.
- **Epic Games**: For providing the Unreal Engine and enabling plugin development.

## Contact

For questions or support, please reach out:

- **Email**: Seagat2011 (through github)
- **GitHub**: [https://github.com/Seagat2011](https://github.com/Seagat2011)

---

*This README was generated to help users understand and utilize the Blueprint-to-C++ Navigation Plugin effectively. Happy developing!*
