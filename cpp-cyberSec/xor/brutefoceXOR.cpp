#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>

void decrypted_XOR(std::string &data,char key){
    for (char &c : data) {
        c = c ^ key;
    }
}

int main(){
    std::string encrypted;
    std::string user_key;
    bool key_detect = false;

    std::cout<<"--------------------\n";
    std::cout<<"  decrypted [XOR]   \n";
    std::cout<<"--------------------\n";

    std::cout<<"Input encrypted XOR: ";
    std::getline(std::cin,encrypted);

    std::cout<<"Encrypted XOR:" << encrypted <<"\n";

    //  brute force xor nya   //

    for(int i = 0; i <= 255; i++){
        std::string temp_encrypted =  encrypted;
        char currect_key = char(i);
        decrypted_XOR(temp_encrypted,currect_key);

        std::cout<<"[" << i + 1 <<"] Menguji Key 0x" << std::hex << std::setw(2) << std::setfill('0') <<(int)(unsigned char) currect_key << "Hasil Decrypted: " << temp_encrypted <<"\n";

        if( encrypted == temp_encrypted){
            key_detect = true;
            break;
        }

    }
    return 0;
}
