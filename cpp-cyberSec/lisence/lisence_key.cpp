#include <iostream>
#include <string>

int main(){
    std::string lisence_key,pass_key;

    std::cout<<"\n--Create Password Key--\n";
    std::cout<<"Password key: ";
    std::getline(std::cin,pass_key);

    std::cout<<"Enter Activition Key: ";
    if(!std::getline(std::cin,lisence_key)){
        std::cerr<<"[!] Input Error\n";
        return 1;
    }

    if(lisence_key == pass_key){
        std::cout<<"[+] Login Succesful! Wellcome Back!\n";
    }else{
        std::cout<<"[!] Login Failed!! Incorrect Key!\n";
        return 1;
    }
    return 0;
}