#include <iostream>
#include <string>

int main(){
    std::string target_pin = "1377";
    std::string guess = "";
    bool find_pass = false;

    for(int i = 0; i <=9999; i++){

        guess = std::to_string(i);
        while(guess.length() < 4){
            guess = "0" + guess;
        }
        
        std::cout<<"Guess Pin: "<< guess << std::endl;

        if(guess == target_pin){
            find_pass = true;
            break;
        }

    }

    if(find_pass){
        std::cout<<"Pin Correct: " << target_pin << std::endl;
    }else{
        std::cout<<"Pin Incorect" << std::endl;
    }

    return 0;
}