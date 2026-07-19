#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void StuckBelanja(int hargaItem, int* ptrtotal){
    *ptrtotal = *ptrtotal + hargaItem;
}

void Diskon(int* ptrtotal){
    if(*ptrtotal > 50000){
        std::cout<<"Selamat Anda Mendapatkan Diskon Rp.10000" << "\n";

        *ptrtotal = *ptrtotal - 10000;
    }
}

int main(){
    string MenuKopi[6] = {"Kopi Susu Gula Aren","Kopi Susu Kurma","Cafe Latte","Kopi Susu Karamel","Oat Milk  Coffee","Americano"}; 
    string MenuNonKopi[4] = {"Milo","Matcha","Red Velvet","Chocolatte"};
    int hargashot = 2000;
    int HargaKopi[6] = {15000,15000,13000,15000,18000,12000};
    int HargaNonKopi[4] = {10000,12000,12000,10000};
    int total = 0;

    string namaStruk[100];
    int jumlahStruk[100];
    int hargaStruk[100];
    int jumlahItem = 0;

    int* ptrtotal = &total;

    cout<<"------------------------\n";
    cout<<"---- Caffe Caffe An ----\n";
    cout<<"------------------------\n";
    
    while(true){
    cout<<"Menu Kopi\n";
        for(int i = 0; i < 6; i++){
            cout<< i + 1 << ". " << setw(25) << left << MenuKopi[i] << " Rp " << HargaKopi[i] << endl;
        }
    cout<<"Menu NonKopi\n";
        for(int i = 0; i < 4; i++){
            cout << i + 1 << ". " << setw(25) << left << MenuNonKopi[i] << " Rp " << HargaNonKopi[i] << endl;
        }

    int pilihKategori,pilihMenu,jumlahMenu;
    string extrashot;
    cout<<"\n--- pilih Menu ---\n";
    cout<<"Pilih Kategori(1=Kopi, 2=NonKopi): ";
    cin>>pilihKategori;

    cout<<"Pilih Nomor Menu: ";
    cin>>pilihMenu;

    cout<<"Berapa Jumlah: ";
    cin>>jumlahMenu;

    int hargaSatuan;
    string namaItem = "";

    if(pilihKategori == 1 && pilihMenu > 0 && pilihMenu <= 6){
        hargaSatuan = HargaKopi[pilihMenu -1];
        namaItem = MenuKopi[pilihMenu -1];
        if(pilihMenu == 6){
            cout<<"Americano Mau Nambah Shot?\ty/n:";
            cin>>extrashot;
            if(extrashot == "y"){
                int jumlahshot;
                cout<<"berapa Shot: ";
                cin>>jumlahshot;
                hargaSatuan += jumlahshot * hargashot;
                namaItem += " " + to_string(jumlahshot) + " Shot";
            }
        }
    }
    else if(pilihKategori == 2 && pilihMenu > 0 && pilihMenu <=4){
        hargaSatuan = HargaNonKopi[pilihMenu -1];
        namaItem = MenuNonKopi[pilihMenu - 1];
    }
    else{
        cout<<"[x]Input Tidak Valid!!\n";
        continue;
    }

    namaStruk[jumlahItem] = namaItem;
    jumlahStruk[jumlahItem] = jumlahMenu;
    hargaStruk[jumlahItem] = hargaSatuan;
    jumlahItem++;

    StuckBelanja(hargaSatuan * jumlahMenu, &total);
    cout<<"\n[Y] " << namaItem << " x " << jumlahMenu << " Rp " << hargaSatuan * jumlahMenu << " Ditambahkan\n";
    cout<<"Total Sementara: " << total << "\n";

    cout<<"\n1. Beli Lagi\n";
    cout<<"2. bayar\n";
    cout<<"pilih(1-2): ";
    int pilih;
    cin>>pilih;

    if(pilih == 2)break;
    }
    cout<<"\n====================\n";
    cout<<"      STRUK BELANJA     \n";
    cout<<"====================\n";
    
    for(int i = 0; i < jumlahItem; i++){
        cout << namaStruk[i] << " x" << jumlahStruk[i];
        cout << setw(20 - namaStruk[i].length()) << right;
        cout << "Rp " << hargaStruk[i] * jumlahStruk[i] << "\n";
    }

    Diskon(&total);

    cout<<"\n===================\n";
    cout<<"Total Belanja: " << total << "\n";
    cout<<"====================\n";

    int bayar;
    cout<<"Masukan Jumlah Uang: ";
    cin>>bayar;

    int kembalian = bayar - total;

    if(kembalian < 0){
        cout<<"Uang Tidak Cukup! Kurang: Rp " << (kembalian * -1) <<"\n";
    }
    else{
        cout<<"Kembalian: Rp " << kembalian << "\n";
    }
    return 0;
}