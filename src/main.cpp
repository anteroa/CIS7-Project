#include <iostream>
#include <string>
#include <cctype>

std::string generateKey(const std::string &text, const std::string &keyword) {
    std::string key = keyword;
    int keySize = keyword.size();
    int textSize = text.size();

    for (int i = keySize; i < textSize; ++i) {
        key.push_back(key[i % keySize]);
    }

    return key;
}

std::string encrypt(const std::string &plaintext, const std::string &keyword) {
    std::string key = generateKey(plaintext, keyword);
    std::string encryptedText = "";

    for (int i = 0; i < plaintext.size(); ++i) {
        char p = std::toupper(plaintext[i]);
        char k = std::toupper(key[i]);
        char e = (p + k) % 26;
        e += 'A';
        encryptedText.push_back(e);
    }

    return encryptedText;
}

std::string decrypt(const std::string &ciphertext, const std::string &keyword) {
    std::string key = generateKey(ciphertext, keyword);
    std::string decryptedText = "";

    for (int i = 0; i < ciphertext.size(); ++i) {
        char e = std::toupper(ciphertext[i]);
        char k = std::toupper(key[i]);
        char p = (e - k + 26) % 26;
        p += 'A';
        decryptedText.push_back(p);
    }

    return decryptedText;
}

int main() {
    std::string plaintext, keyword, ciphertext, decryptedText;

    std::cout << "Enter the plaintext: ";
    std::getline(std::cin, plaintext);
    std::cout << "Enter the keyword: ";
    std::getline(std::cin, keyword);

    ciphertext = encrypt(plaintext, keyword);
    decryptedText = decrypt(ciphertext, keyword);

    std::cout << "Ciphertext: " << ciphertext << std::endl;
    std::cout << "Decrypted Text: " << decryptedText << std::endl;

    return 0;
}