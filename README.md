# template_application
A template application for C++ with CMake and GoogleTest
## Description
A CMake file templetes and sample C++ application which allows unit test by GoogleTest. This template application is :
- Able to collaborate with [Visual Studio CODE](https://azure.microsoft.com/ja-jp/products/visual-studio-code/) editor.
- Build in [Google Test](https://github.com/google/googletest) which is downloaded automatically.
- "src" directory for application soruce code.
- "test" directory for unit tests. 
- std::threadh aware. 
- Tested on Ubuntu 20.04  with GCC.
- Tested on Windows 11 with Visual Studio C++ compiler.
- Tested on WSL2 with VS CODE remote server.
## Screenshot
![](image/screenshot.png)
## Requirement
### Ubuntu
- Ubuntu 20.04
- VS Code
- CMake 3.15 or newer
- Python 3
- g++


### Windows
- Windows 10 or 11
- VS Code
- CMake 3.15 or newer
- Python 3
- Microsoft Visual C++ compiler 

### WSL2
- Windows 10 or 11
- VS Code with [Remote Development extention pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack)
- CMake 3.15 or newer
- Python 3
- g++
- ca-certifications 


## Usage
## Install
 
### Ubuntu
Run followings on the shell. 
```Shell
sudo snap install vscode --classic
sudo apt-get install build-essential cmake
```
- Note 1: After installing VS CODE, install the [C++ Extention Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) to the VS CODE.
### Windows

Run followings on the PowerShell or Command . 
```PowerShell
winget install Microsoft.VisualStudioCode -e
winget install Kitware.CMake -e
winget install Microsoft.VisualStudio.2022.Community -e
winget install Git.Git -e
winget install Python.Python.3 -e
```
- Note 1: After installing VS CODE, install the [C++ Extention Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) to the VS CODE.
- Note 2: The above winget install the CMake installer only. Run the CMake once and complete the installation.
- Note 3: The above wget install the VisualStudio launcher only. [Install the C++ worload](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=msvc-170) after winget installation.

### WSL2

Run followings on the PowerShell or Command. 
```PowerShell
winget install Microsoft.VisualStudioCode -e
```
Run followings on the shell. 
```Shell
sudo apt-get install build-essential cmake ca-certifications
```
- Note 1: After installing VS CODE, install the [C++ Extention Pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack) to the VS CODE.
- Note 2: The above winget install the CMake installer only. Run the CMake once and complete the installation.
- Note 3: The above wget install the VisualStudio launcher only. [Install the C++ worload](https://docs.microsoft.com/en-us/cpp/build/vscpp-step-0-installation?view=msvc-170) after winget installation.
- Note 4: The VS CODE is installed in the Windows side and accessed from WSL as remote server. Refer the [explanation by Microsoft](https://docs.microsoft.com/en-us/windows/wsl/tutorials/wsl-vscode).

## License
This project is shared with the [MIT License](LICENSE). 