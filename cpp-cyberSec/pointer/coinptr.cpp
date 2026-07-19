#include <iostream>
using namespace std;

int main(){
    int koin[3] = {12'34'56};

    cout<<"Alamat Koin: " << koin << "\n";
    cout<<"Alamat Index Koin Yang dituju 0: " << &koin << "\n";
    return 0;
}