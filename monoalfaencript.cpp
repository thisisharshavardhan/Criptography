#include <iostream>
#include <string>

using namespace std;

int main() {
    // Input message
    cout << "Enter the message to be encrypted: ";
    string message;
    getline(cin, message);

    // Encrypt message
    string encrypted_message = "";
    for (char c : message) {
        // Replace each letter with a fixed letter
        switch (c) {
            case 'A': encrypted_message += 'X'; break;
            case 'B': encrypted_message += 'Y'; break;
            case 'C': encrypted_message += 'Z'; break;
            case 'D': encrypted_message += 'A'; break;
            case 'E': encrypted_message += 'B'; break;
            case 'F': encrypted_message += 'C'; break;
            case 'G': encrypted_message += 'D'; break;
            case 'H': encrypted_message += 'E'; break;
            case 'I': encrypted_message += 'F'; break;
            case 'J': encrypted_message += 'G'; break;
            case 'K': encrypted_message += 'H'; break;
            case 'L': encrypted_message += 'I'; break;
            case 'M': encrypted_message += 'J'; break;
            case 'N': encrypted_message += 'K'; break;
            case 'O': encrypted_message += 'L'; break;
            case 'P': encrypted_message += 'M'; break;
            case 'Q': encrypted_message += 'N'; break;
            case 'R': encrypted_message += 'O'; break;
            case 'S': encrypted_message += 'P'; break;
            case 'T': encrypted_message += 'Q'; break;
            case 'U': encrypted_message += 'R'; break;
            case 'V': encrypted_message += 'S'; break;
            case 'W': encrypted_message += 'T'; break;
            case 'X': encrypted_message += 'U'; break;
            case 'Y': encrypted_message += 'V'; break;
            case 'Z': encrypted_message += 'W'; break;

            
            default: encrypted_message += c;
        }
    }

    // Output encrypted message
    cout << "Encrypted message: " << encrypted_message << endl;

    return 0;
}
