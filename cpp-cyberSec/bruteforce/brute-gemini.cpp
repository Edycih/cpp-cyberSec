#include <iostream>
#include <string>
#include <cctype>

// Ini fungsi simulator buat nembak ke web login kamu nanti
bool kirimKeWeb(std::string username, std::string password) {
    // Anggap saja password yang benar di web kamu adalah "Admin12!"
    return (username == "admin" && password == "Admin12!");
}

int main() {
    std::string target_user = "admin";
    std::string input_awal;
    
    std::cout << "Masukkan kata dasar password: ";
    std::cin >> input_awal; // Misal user input: "admin"

    // 1. LANGKAH PERTAMA: Coba langsung inputan aslinya
    std::cout << "Mencoba password asli...\n";
    if (kirimKeWeb(target_user, input_awal)) {
        std::cout << "SUKSES! Password adalah: " << input_awal << "\n";
        return 0;
    }

    // 2. LANGKAH KEDUA: Jika salah, buat variasi kapital
    std::string v_kecil = input_awal;
    
    std::string v_awal = input_awal;
    v_awal[0] = std::toupper(v_awal[0]); // Jadi "Admin"
    
    std::string v_besar = input_awal;
    for(char &c : v_besar) c = std::toupper(c); // Jadi "ADMIN"

    // Taruh variasi ke dalam array agar mudah di-loop
    std::string daftar_kata[] = {v_kecil, v_awal, v_besar};
    
    // Daftar simbol yang sering dipakai manusia
    char daftar_simbol[] = {'!', '@', '#', '$'};

    std::cout << "Password asli salah. Memulai kombinasi cerdas...\n";

    // 3. LANGKAH KETIGA: Mulai nesting loop untuk angka dan simbol
    // Loop untuk memilih variasi kata (kecil, awal, besar)
    for (const std::string& kata : daftar_kata) {
        
        // Loop Angka (misal dari 0 sampai 99)
        for (int angka = 0; angka <= 99; ++angka) {
            
            // Loop Simbol
            for (char simbol : daftar_simbol) {
                
                // Rakit kombinasinya secara real-time di memori
                std::string tebakan = kata + std::to_string(angka) + simbol;
                
                // LANGGUNG EKSEKUSI TEMBAK KE WEB!
                if (kirimKeWeb(target_user, tebakan)) {
                    std::cout << "\n====================================\n";
                    std::cout << "PASSWORD KETEMU: " << tebakan << "\n";
                    std::cout << "====================================\n";
                    return 0; // Langsung hentikan program
                }
                
                // Opsional: cetak biar kelihatan prosesnya jalan
                std::cout << "Mencoba: " << tebakan << " (Gagal)\n";
            }
        }
    }

    std::cout << "Brute force selesai, password tidak ditemukan.\n";
    return 0;
}