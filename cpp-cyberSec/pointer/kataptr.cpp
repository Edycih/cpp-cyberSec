#include <iostream>
#include <string>

int main(){
    std::string kata = "Ikan Kekek";
    char *ptrkata = &kata[0];

    std::cout<<"Kata yang diinput: " << kata << "\n";

    for(int i; i < 10; i++){
        std::cout<< *ptrkata  << " ";
        ptrkata++;
    }

    return 0;
}
