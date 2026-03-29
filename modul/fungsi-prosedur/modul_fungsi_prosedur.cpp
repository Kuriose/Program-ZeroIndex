#include <iostream> 
#include <vector> 
#include "modul_fungsi_prosedur.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void tampilkanTeoriFP() {
    cout << "\n[Teori -- Fungsi & Prosedur]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Fungsi adalah blok kode reusable yang melakukan tugas spesifik." << endl;
    cout << "Dalam C++, 'Prosedur' adalah fungsi dengan return type void (tidak mengembalikan nilai)." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Return Type: Menentukan tipe nilai yang dikembalikan (void = prosedur)." << endl;
    cout << "- Parameter: Input data yang diterima fungsi saat dipanggil." << endl;
    cout << "- Pemanggilan: Fungsi dieksekusi dengan menulis namanya + argumen." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Deklarasikan fungsi sebelum main() atau gunakan function prototype." << endl;
    cout << "- Variabel di dalam fungsi bersifat lokal (hanya hidup di dalam fungsi)." << endl;
}

void tampilkanContohFP() {
    cout << "\n[Contoh -- Source Code]" << endl;
    cout << "// Fungsi dengan return value" << endl;
    cout << "int tambah(int a, int b) {  // Baris 1: Definisi fungsi" << endl;
    cout << "    return a + b;           // Baris 2: Kembalikan hasil" << endl;
    cout << "}                           // Baris 3: Akhir fungsi" << endl;
    cout << "int hasil = tambah(5, 3);   // Baris 4: Pemanggilan fungsi" << endl;
    cout << "cout << hasil;              // Baris 5: Output: 8" << endl;
    
    cout << "\n// Prosedur (void)" << endl;
    cout << "void sapa(string nama) {    // Baris 6: Prosedur tanpa return" << endl;
    cout << "    cout << \"Halo, \" << nama; // Baris 7: Cetak pesan" << endl;
    cout << "}                           // Baris 8: Akhir prosedur" << endl;
    cout << "sapa(\"Budi\");             // Baris 9: Pemanggilan prosedur" << endl;
    cout << endl;
    cout << "Penjelasan:" << endl;
    cout << "-> Baris 1-3: Fungsi 'tambah' menerima 2 parameter, mengembalikan int." << endl;
    cout << "-> Baris 4: Memanggil fungsi dengan argumen 5 dan 3." << endl;
    cout << "-> Baris 6-8: Prosedur 'sapa' hanya menjalankan aksi, tidak return nilai." << endl;
    cout << "-> Baris 9: Memanggil prosedur, output langsung dicetak." << endl;
}

void runModulFP() {
    int pilihan; 

    do {
        cout << "\n=== MODUL FUNGSI ===" << endl;
        cout << "[1] Teori" << endl;
        cout << "[2] Contoh" << endl;
        cout << "[3] Quiz" << endl;
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl;
        cout << "> "; cin >> pilihan;

        switch(pilihan) {
            case 1: tampilkanTeoriFP(); break;
            case 2: tampilkanContohFP(); break;
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanFP(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiFP(); break;
        } 
 
    } while (pilihan != 0);
}