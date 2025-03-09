#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to encrypt or decrypt a file using XOR cipher
void encryptDecrypt(const string &inputFile, const string &outputFile, char key) {
    ifstream inFile(inputFile, ios::binary); // Open input file in binary mode
    ofstream outFile(outputFile, ios::binary); // Open output file in binary mode

    if (!inFile || !outFile) {
        cerr << "Error: Unable to open file." << endl;
        return;
    }

    char ch;
    while (inFile.get(ch)) { // Read character by character
        ch ^= key; // Apply XOR encryption/decryption
        outFile.put(ch); // Write encrypted/decrypted character
    }

    inFile.close();
    outFile.close();

    cout << "Operation completed successfully." << endl;
}

int main() {
    string inputFile, outputFile;
    char key;
    int choice;

    cout << "File Encryption & Decryption Program" << endl;
    cout << "1. Encrypt a file" << endl;
    cout << "2. Decrypt a file" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter input file name: ";
    cin >> inputFile;
    cout << "Enter output file name: ";
    cin >> outputFile;
    cout << "Enter encryption key (single character): ";
    cin >> key;

    if (choice == 1) {
        encryptDecrypt(inputFile, outputFile, key);
    } else if (choice == 2) {
        encryptDecrypt(inputFile, outputFile, key);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
