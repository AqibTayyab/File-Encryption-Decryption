# File Encryption & Decryption (C++)

This C++ project allows you to encrypt and decrypt text files using a simple XOR cipher. It provides a command-line interface where users can input file names and encryption keys.

## Features
- Encrypt text files using XOR cipher
- Decrypt previously encrypted files
- Simple command-line interface
- Works with any file format

## How It Works
1. The program reads a file character by character.
2. It applies an XOR operation with a user-provided key.
3. The processed data is saved into a new file.
4. Using the same key, the process can be reversed to decrypt the file.

## Installation & Usage
### Prerequisites
- A C++ compiler (GCC, MSVC, Clang, etc.)

### Compilation
Use the following command to compile the program:
```sh
 g++ main.cpp -o main
```

### Running the Program
To encrypt a file:
```sh
 ./main
```
Follow the on-screen instructions to enter file names and keys.

## Example
```
File Encryption & Decryption Program
1. Encrypt a file
2. Decrypt a file
Enter your choice: 1
Enter input file name: input.txt
Enter output file name: encrypted.txt
Enter encryption key (single character): X
Operation completed successfully.
```

## Contributing
Feel free to fork this repository and submit pull requests for improvements!

## License
This project is licensed under the MIT License.

