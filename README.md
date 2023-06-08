# CIS7-Project
Vigenère Cipher Encrypter

Project General Description
This project is an implementation of the Vigenère Cipher, a method of encrypting alphabetic text through a simple form of polyalphabetic substitution. This implementation is written in C++ and showcases how the Vigenère Cipher algorithm can be used to encrypt and decrypt messages.

The program uses a keyword to perform encryption and decryption. The Vigenère square (tabula recta) is conceptually used, though the implementation makes use of simple algebraic operations on the ASCII values of characters.

Programming Approaches
Encryption

A key is generated from the input keyword by repeating it until it matches the length of the plaintext.
Each character in the plaintext is shifted by a number of positions based on the corresponding character in the key. The result is modulo 26 to stay within the alphabet.
The shifted characters are concatenated to form the ciphertext.
Decryption

The key is generated in the same way as for encryption.
Each character in the ciphertext is shifted back based on the corresponding character in the key.
The original characters are concatenated to form the decrypted text.
Authors
This project is developed by Antero Avalos as a single person team.

Date Published
June 7, 2023

Instructions on How to Use the Program
1. Compile the program using a C++ compiler. For example, using g++:
```
g++ -o vigenere_cipher main.cpp
```

2. Run the compiled program:
```
./vigenere_cipher
```

3. Enter the plaintext that you want to encrypt when prompted by the program.

4. Enter the keyword which will be used for encryption.

5. The program will output the ciphertext (the encrypted message) and the decrypted text (which should match your original input).

Note: This program only works with uppercase English alphabets and doesn't account for spaces, special characters, or numbers. Additionally, the Vigenère cipher itself is not a secure encryption method by modern standards.
