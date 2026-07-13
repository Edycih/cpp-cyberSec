#include <iostream>
#include <cstring>

void insecure_function(){
    char buffer[8];

    std::cout<<"Input: ";
    std::cin.width(8);
    std::cin>>buffer;

    std::cout<<"Isi dari Buffer: " << buffer << std::endl;
}

int main(){
    std::cout<<"[x]Program Starting.../\n";
    insecure_function();
    std::cout<<"[-]Program Finis\n";
    return 0;
}