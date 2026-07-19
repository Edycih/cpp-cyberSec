#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

void decrypted_xor(std::string &data,char key){
    for(char &c : data){
        c = c ^ key;
    }
}

int main(){
    std::string encrypted_xor;
    int total_key;
    std::vector<char>user_key;

    std::cout<<"--------------------\n";
    std::cout<<"  decrypted [XOR]   \n";
    std::cout<<"--------------------\n";

    std::cout<<"Input Encrypted XOR: ";
    std::getline(std::cin,encrypted_xor);

    std::cout<<"Input berapa banyak XOR yang mau di Decrypted(angka): ";
    std::cin>>total_key;
    

    std::cout<<"Input Key XOR: ";
    for(int i = 0; i < total_key; i++ ){
        int input_key;
        std::cout<<" -> Key Ke "<< i + 1 <<": " ;
        std::cin>>input_key;
        
        user_key.push_back(static_cast<char>(input_key));
    }

    std::cout<<"----Hasil Decrypted----\n";

    for(size_t i = 0; i < user_key.size(); i++ ){
        std::string test_key = encrypted_xor;
        char currect_key = user_key[i];
        decrypted_xor(test_key,currect_key);

        std::cout<<"[" << i + 1 << "]" <<"Menguji Key: 0x"
        << std::hex << std::setw(2) << std::setfill('0') << (int)(unsigned char) currect_key
        << "Hasil Encrypted: " << test_key << "\n";
    }
}