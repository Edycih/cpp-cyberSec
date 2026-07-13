#include <iostream>
#include <cstring>

void insecure_funtion(){
    char buffer[8];

    std::cout<<"Input: ";
    std::cin>>buffer;

    std::cout<<"[x]isi dari buffer: " << buffer << std::endl;
}

int main(){
    std::cout<<"[+]Starting Program.../" << std::endl;
    insecure_funtion();
    std::cout<<"[-]Program Finis" << std::endl;
    return 0;
}