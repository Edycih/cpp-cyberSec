#include <iostream>
#include <string>

int main(){
    std::string payload;
    char key = 0x5A;

    std::cout<<"Encrypted (XOR)\n";
    std::cout<<"Input Payload: ";
    std::getline(std::cin,payload);

    std::cout<<"[X]Payload Created " << payload << "\n";

    for(char &c : payload){
        c = c ^ key;
    }
    std::cout<<"[x]payload Encrypted " << payload << "\n";

    for(char &c : payload){
        c = c ^ key;
    }
    std::cout<<"[-]Payload Decrypted " << payload << "\n";
    return 0;
}