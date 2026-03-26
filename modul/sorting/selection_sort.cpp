#include <iostream>
#include "selection_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriSelectionSort() {
    cout << "\n[Teori]" << endl; 
    cout << "Selection Sort merupakan algoritma pengurutan sederhana yang bekerja dengan cara memilih elemen terkecil/terbesar dari bagian array yang belum terurut, lalu menukarnya ke posisi yang benar di awal." << endl;
}

void contohSelectionSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> [2, 3, 5]" << endl; 
}

void runSelectionSort() {
    int pilihan; 

    do {
        cout << "\n=== SELECTION SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriSelectionSort(); break; 
            case 2: contohSelectionSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanSelectionSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
        }
    
    } while (pilihan != 0);
}