#include <iostream> 
#include <vector>
#include "modul_pointer.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void tampilkanTeoriPointer() {
    cout << "\n[Teori -- Pointer]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Pointer adalah variabel khusus yang menyimpan alamat memori dari variabel lain." << endl;
    cout << "bukan menyimpan nilainya secara langsung." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Operator & (Address-of): Mengambil alamat memori variabel." << endl;
    cout << "- Operator * (Dereference): Mengakses nilai di alamat tersebut." << endl;
    cout << "- Tipe Data Pointer: Harus sesuai dengan tipe data variabel yang ditunjuk." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Pointer yang tidak diinisialisasi (wild pointer) berbahaya." << endl;
    cout << "- Pastikan tipe data pointer sama dengan variabel target (int* untuk int)." << endl; 
}

void tampilkanContohPointer() {
    cout << "\n[Contoh -- Source Code]" << endl;
    cout << "int x = 10;        // Baris 1: Variabel biasa" << endl;
    cout << "int* p = &x;       // Baris 2: Pointer menyimpan alamat x" << endl;
    cout << "cout << *p;        // Baris 3: Akses nilai melalui pointer" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: 'x' menyimpan nilai 10 di memori." << endl;
    cout << "-> Baris 2: 'p' menyimpan alamat dari 'x' (misal: 0x100)." << endl;
    cout << "-> Baris 3: '*p' mengambil nilai yang ada di alamat 0x100." << endl; 
}

void runModulPointer() {
    int pilihan; 

    do {
        cout << "\n=== MODUL POINTER ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl;
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: tampilkanTeoriPointer(); break; 
            case 2: tampilkanContohPointer(); break; 
            
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanPointer();

                jalankanQuiz(daftarPertanyaan);
                break;
            }
            case 4: visualisasiPointer(); break;
        }

    } while (pilihan != 0);
}