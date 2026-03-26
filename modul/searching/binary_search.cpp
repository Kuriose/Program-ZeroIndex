#include <iostream>
#include "binary_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriBinarySearch() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Binary Search merupakan algoritma pencarian efisien yang menggunakan paradigma Divide and Conquer." << endl;
}

void contohBinarySearch() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Binary Search" << endl; 
}

void runBinarySearch() {
    int pilihan; 

    do {
        cout << "\n=== BINARY SEARCH ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriBinarySearch(); break; 
            case 2: contohBinarySearch(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanLinearSearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiBinary(); break;
        }
    
    } while (pilihan != 0);
}