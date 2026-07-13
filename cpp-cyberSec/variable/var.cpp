#include <iostream>
#include <string>
#include <iomanip>

int main(){
    std::string nama;
    int umur;
    float tb;

    std::cout<<"--Input Data--\n";
    std::cout<<"Nama: ";
    std::getline(std::cin, nama);
    std::cout<<"Umur: ";
    std::cin>>umur;
    std::cout<<"Tinggi Badan: ";
    std::cin>>tb;

    std::cout<<"\n--Output Data--\n";
    std::cout<<std::left;
    std::cout<< std::setw (15) << "Nama:" << nama << "\n";
    std::cout<< std::setw (15) << "Umur:" << umur << "\n";
    std::cout<< std::setw (15) << "Tinggi Badan: " << std::fixed << std::setprecision (3) << tb << "CM\n";
    
    std::cout<<"--Size Of data--\n";
    std::cout<<"Size Of String: " << sizeof (nama) <<"Bytes\n";
    std::cout<<"Size Of Int: " << sizeof (umur) << "Bytes\n";
    std::cout<<"Size Of Float: " << sizeof (tb) << "Bytes\n";
    return 0;

}