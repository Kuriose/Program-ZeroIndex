#include <iostream>
#include "linear_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriLinearSearch() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Linear Search merupakan algoritma pencaian paling sederhana." << endl;
    cout << 
    "Algoritma ini memeriksa setiap elemen dalam array secara berurutan (dari awal hingga akhir) sampai elemen yang dicari ditemukan atau sampil akhir array tercapai." << endl;
}

void contohLinearSearch() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Linear Search" << endl; 
}

void runLinearSearch() {
    int pilihan; 

    do {
        cout << "\n=== LINEAR SEARCH ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriLinearSearch(); break; 
            case 2: contohLinearSearch(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanLinearSearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiLinear(); break;
        }
    
    } while (pilihan != 0);
}