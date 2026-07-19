#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>  // Untuk numeric_limits

void decrypted_xor(std::string &data, char key) {
    for(char &c : data) {
        c = c ^ key;  // XOR operation
    }
}

int main() {
    std::string encrypted_xor;
    int total_key;
    std::vector<char> user_key;

    std::cout << "--------------------\n";
    std::cout << "  Decrypted [XOR]   \n";  // Fixed typo
    std::cout << "--------------------\n";

    std::cout << "Input Encrypted XOR: ";
    std::getline(std::cin, encrypted_xor);

    std::cout << "Input berapa banyak XOR key yang mau di-decrypt (angka): ";
    std::cin >> total_key;

    // Input validation
    if(total_key <= 0 || total_key > 256) {
        std::cerr << "[!] Invalid total_key (range: 1-256)\n";
        return 1;
    }

    std::cout << "Input Key XOR:\n";
    for(int i = 0; i < total_key; i++) {
        int input_key;
        std::cout << " -> Key Ke " << i + 1 << ": ";
        std::cin >> input_key;

        if(input_key < 0 || input_key > 255) {
            std::cerr << "[!] Key harus 0-255\n";
            i--;  // Re-ask
            continue;
        }

        user_key.push_back(static_cast<char>(input_key));
    }

    std::cout << "\n----Hasil Decrypted----\n";

    for(size_t i = 0; i < user_key.size(); i++) {
        std::string test_key = encrypted_xor;
        char correct_key = user_key[i];  // Fixed typo
        decrypted_xor(test_key, correct_key);

        std::cout << "[" << i + 1 << "] Menguji Key: 0x"
                  << std::hex << std::setw(2) << std::setfill('0') 
                  << (int)(unsigned char)correct_key << std::dec  // Back to decimal
                  << " | Hasil Decrypted: " << test_key << "\n";
    }

    return 0;
}