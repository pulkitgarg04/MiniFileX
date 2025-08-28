# MiniFileX

![MiniFileX](https://socialify.git.ci/pulkitgarg04/MiniFileX/image?font=Raleway&language=1&name=1&owner=1&theme=Dark)

A **comprehensive menu-driven console application** in C that provides a full suite of file and directory management operations. Perform basic file operations, directory management, and file manipulation tasks directly from your terminal.

---

### Features

#### File Operations
- **Create File** – Create a new file at any location
- **Write File** – Overwrite content in a file
- **Append File** – Add content without deleting existing data
- **Copy File** – Duplicate content from one file to another
- **Read File** – Display the contents of a file on the console
- **Delete File** – Remove files from the filesystem
- **Rename File** – Change file names while preserving content
- **Move File** – Relocate files to different directories

#### Directory Operations
- **Create Directory** – Make new directories with proper permissions
- **Delete Directory** – Remove directories and all contents recursively
- **List Directory Contents** – Display files and subdirectories

#### System Features
- **Cross-Platform** – Works on Linux, macOS, and Windows
- **Flexible Paths** – Supports absolute or relative paths
- **Error Handling** – Comprehensive error reporting and user feedback
- **Recursive Operations** – Safe directory deletion with content cleanup

---

### Prerequisites

- GCC Compiler (or compatible C compiler)
- Linux/macOS terminal or Windows CMD/PowerShell/Git Bash
- POSIX-compliant system (for full directory operations)

---

### Build and Run

1. **Clone and navigate** to the project directory:
    ```bash
    git clone https://github.com/pulkitgarg04/MiniFileX.git
    cd MiniFileX
    ```

2. **Build the project** using the provided Makefile:
    ```bash
    make
    ```

   - Object files will be generated in `build/`
   - Executable will be created in `bin/filemanager`

3. **Run the program**:
    ```bash
    ./bin/filemanager      # Linux/macOS
    bin\filemanager.exe    # Windows
    ```

---

### Complete Menu System

The program provides a comprehensive menu with 12 options:

```
===== Mini File Management System =====
1. Create File
2. Write File
3. Append File
4. Copy File
5. Read File
6. Delete File
7. Rename File
8. Move File
9. Create Directory
10. Delete Directory
11. List Directory Contents
12. Exit
Enter your choice:
```

---

### Usage Examples

#### File Operations
- **Create/Write/Append**: Enter full file paths to work with files anywhere on your system
- **Copy/Move**: Provide source and destination paths
- **Delete**: Specify the exact file path to remove
- **Rename**: Enter current filename and new filename

#### Directory Operations
- **Create Directory**: Enter the directory name/path to create
- **Delete Directory**: Specify directory path (will remove all contents recursively)
- **List Contents**: Enter directory path to see all files and subdirectories

#### Path Examples
- **Linux/macOS**: `/home/user/Documents/file.txt`
- **Windows**: `C:\Users\Pulkit\Desktop\file.txt`
- **Relative**: `./subfolder/file.txt`

---

### Build Commands

#### Clean Build
To remove all generated files and start fresh:
```bash
make clean
```

#### Rebuild
To force a complete rebuild:
```bash
make clean && make
```

---

### Error Handling

The application provides comprehensive error handling:
- **File not found** errors with clear messages
- **Permission denied** warnings
- **Invalid path** notifications
- **Success confirmations** for all operations

---

### Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

---

### License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.