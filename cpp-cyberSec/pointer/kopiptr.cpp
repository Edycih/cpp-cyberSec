#include <iostream>

void StruckPesanan(int hargaItem, int* ptrtotal){
    *ptrtotal = *ptrtotal +  hargaItem;
}

void Diskon(int* ptrtotal){
    if(*ptrtotal > 50000){
        std::cout<<"Selamat Anda Mendapatkan Diskon Rp.10000" << "\n";

        *ptrtotal = *ptrtotal - 10000;
    }
}

int main(){
    std::string NamaMenu[3] = {"caffe Latte","Americano","oat"};
    int HargaMenu[3] ={15000,13000,20000};
    int reqshot = 2000;

    std:
}