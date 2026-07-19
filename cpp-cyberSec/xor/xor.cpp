#include <iostream>
#include <string>

int main(){
    std::string payload ="MalwarePayload123";
    char key = 0x5A;

    std::cout<<"[*] Payload: " << payload << "\n";

    for (char &c : payload) {
        c = c ^ key;
    }
    std::cout<<"[+] Encrypted: " << payload << "\n";
}