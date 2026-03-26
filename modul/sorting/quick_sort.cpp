#include <iostream>
#include "quick_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriQuickSort() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Quick Sort merupakan algoritma Divide dan Conquer yang efisien." << endl;
    cout <<
    "Ia memilih satu elemen sebagai pivot, lalu mempartisi array sehingga semua elemen lebih kecil dari pivot berada di kiri, dan yang lebih besar di kanan" << endl;
}

void contohQuickSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Quick Sort" << endl; 
}

void runQuickSort() {
    int pilihan; 

    do {
        cout << "\n=== QUICK SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriQuickSort(); break; 
            case 2: contohQuickSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanQuickSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
        }
    
    } while (pilihan != 0);
}