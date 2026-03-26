#include <iostream> 
#include <vector>
#include "modul_pointer.h"
#include "../../fitur/quiz/quiz.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void tampilkanTeoriPointer() {
    cout << "\n[Teori]" << endl; 
    cout << "Pointer merupakan variabel yang menyimpan alamat memori." << endl; 
}

void tampilkanContohPointer() {
    cout << "\n[Contoh]" << endl;
    cout << "int x = 10;" << endl;
    cout << "int* p = &x;" << endl;
    cout << "*p = 10;" << endl; 
}

void runModulPointer() {
    int pilihan; 

    do {
        cout << "\n=== MODUL POINTER ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
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
        }

    } while (pilihan != 0);
}