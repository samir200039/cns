//ceaser_cipher_as_affin_cipher.cpp
// wap to implement  the following substitution  and transposition  cipher technique  ceaser cipher as a special case of affin cipher

#include <iostream>
#include <string>
using namespace std;

// Function to encrypt the message using Caesar cipher
string encryptCaesar(string& message, int shift) {
    string encryptedMessage;
    
    for (char ch : message) {
        if (isalpha(ch)) {
            char encryptedChar = ((ch - 'A') + shift) % 26 + 'A';
            encryptedMessage += encryptedChar;
        }
        else {
            encryptedMessage += ch;
        }
    }
    
    return encryptedMessage;
}

// Function to decrypt the message using Caesar cipher
string decryptCaesar(string& encryptedMessage, int shift) {
    string decryptedMessage;
    
    for (char ch : encryptedMessage) {
        if (isalpha(ch)) {
            char decryptedChar = ((ch - 'A') - shift + 26) % 26 + 'A';
            decryptedMessage += decryptedChar;
        }
        else {
            decryptedMessage += ch;
        }
    }
    
    return decryptedMessage;
}

int main() {
    string message;
    int shift;
    // Input the message
    cout << "Enter the message : ";
    getline(cin, message);
    // Input the shift
    cout << "Enter the shift : ";
    cin >> shift;
    
    
    cout << "Original Message: " << message << endl;
    
    string encryptedMessage = encryptCaesar(message, shift);
    cout << "Encrypted Message: " << encryptedMessage << endl;
    
    string decryptedMessage = decryptCaesar(encryptedMessage, shift);
    cout << "Decrypted Message: " << decryptedMessage << endl;
    
    return 0;
}
