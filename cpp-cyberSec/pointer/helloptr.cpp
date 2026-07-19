#include <iostream>
using namespace std;

int main(){
    int Rumah = 10;
    int* ptrRumah;

    ptrRumah = &Rumah;

    cout<<"Isi Dari Varibale Rumah:" << Rumah <<"\n";
    cout<<"Alamat Memori Dari Variable Rumah(&Rumah):" << &Rumah << "\n";
    cout<<"Alamat Yang Disimpan Di ptrRumah:" << ptrRumah << "\n";
    cout<<"Isi Rumah yang ditunjuk oleh ptrRumah:" << *ptrRumah << "\n";

    *ptrRumah = 100;

    cout<<"Isi Rumah Setelah di ubah lewat ptr:" << Rumah << "\n";
}