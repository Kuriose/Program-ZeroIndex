#include <iostream> 
#include <vector> 
#include "modul_struct.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void tampilkanTeoriStruct() {
    cout << "\n[Teori -- Struct]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Struct (Structure) adalah tipe data buatan yang memungkinkan" << endl;
    cout << "penggabungan variabel dengan tipe berbeda dalam satu nama." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Keyword 'struct': Digunakan untuk mendefinisikan struktur." << endl;
    cout << "- Member Variables: Variabel anggota di dalam struct." << endl;
    cout << "- Operator Dot (.): Digunakan untuk mengakses member struct." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Definisi struct diakhiri dengan titik koma (;)." << endl;
    cout << "- Struct adalah blueprint, perlu dibuat instance (objek) untuk digunakan." << endl;
}

void tampilkanContohStruct() {
    cout << "\n[Contoh -- Source Code]" << endl;
    cout << "struct Mahasiswa {          // Baris 1: Definisi Struct" << endl;
    cout << "    string nama;" << endl;
    cout << "    int nim;" << endl;
    cout << "};                          // Baris 2: Akhir definisi" << endl;
    cout << "Mahasiswa m1;               // Baris 3: Buat objek" << endl;
    cout << "m1.nama = \"Budi\";         // Baris 4: Isi member" << endl;
    cout << "cout << m1.nim;             // Baris 5: Akses member" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1-2: Membuat blueprint 'Mahasiswa'." << endl;
    cout << "-> Baris 3: Membuat variabel 'm1' dari tipe Mahasiswa." << endl;
    cout << "-> Baris 4: Mengisi member 'nama' dengan operator dot." << endl;
    cout << "-> Baris 5: Menampilkan nilai member 'nim'." << endl;
}

void runModulStruct() {
    int pilihan; 

    do {
        cout << "\n=== MODUL STRUCT ===" << endl;
        cout << "[1] Teori" << endl;
        cout << "[2] Contoh" << endl;
        cout << "[3] Quiz" << endl;
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl;
        cout << "> "; cin >> pilihan;

        switch(pilihan) {
            case 1: tampilkanTeoriStruct(); break;
            case 2: tampilkanContohStruct(); break;
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanStruct(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiStruct(); break;
        } 
 
    } while (pilihan != 0);
}