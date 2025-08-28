# MiniFileX

![MiniFileX](https://socialify.git.ci/pulkitgarg04/MiniFileX/image?font=Raleway&language=1&name=1&owner=1&theme=Dark)

A **menu-driven console application** in C that allows users to perform basic file operations like **create, write, append, copy, and read files** anywhere on their PC.

---

### Features

- **Create File** – Create a new file at any location.
- **Write File** – Overwrite content in a file.
- **Append File** – Add content without deleting existing data.
- **Copy File** – Duplicate content from one file to another.
- **Read File** – Display the contents of a file on the console.
- **Flexible Paths** – Works with absolute or relative paths on your system.

---

### Prerequisites

- GCC Compiler
- Linux/macOS terminal or Windows CMD/PowerShell/Git Bash

---

### Build and Run

1. Navigate to the project directory:
    ```bash
    cd /path/to/mini-file-manager
    ```

2. Build the project using Makefile:
    ```bash
    make
    ```

- Object files will be generated in build/
- Executable will be in bin/filemanager

3. Run the program:
    ```bash
    ./bin/filemanager      # Linux/macOS
    bin\filemanager.exe    # Windows
    ```

---

### Usage
1. The program shows a menu:
```
===== Mini File Management System =====
1. Create File
2. Write File
3. Append File
4. Copy File
5. Read File
6. Exit
Enter your choice:
```

2. Enter full file paths to work with files anywhere on your system:

- Linux/macOS example: `/home/user/Documents/file.txt`
- Windows example: `C:\Users\Pulkit\Desktop\file.txt`

---

#### Clean Build
To remove object files and executable:

```bash
make clean
```

---

### License
This project is licensed under the MIT License - see the [LICENSE](LICENESE) file for details.