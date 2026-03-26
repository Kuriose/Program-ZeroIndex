#include <iostream>
#include "radix_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriRadixSort() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Radix Sort merupakan algoritma pengurutan non-comparative yang mengurutkan angka berdasarkan digit-digit penyusunnya, mulai dari digit paling tidak signifikan (LSD) atau paling signifikan (MSD)" << endl;
}

void contohRadixSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Radix Sort" << endl; 
}

void runRadixSort() {
    int pilihan; 

    do {
        cout << "\n=== RADIX SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriRadixSort(); break; 
            case 2: contohRadixSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanRadixSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiRadix(); break;
        }
    
    } while (pilihan != 0);
}