#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 10;
    int* ptr = &x;

    *ptr = 60;
    ptr = &y;
    *ptr = 30;

    cout<<"Nilai X: " << x <<"\n";
    cout<<"Nilai y: " << y <<"\n";
    
}