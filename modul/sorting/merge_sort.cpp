#include <iostream>
#include "merge_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriMergeSort() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Merge Sort merupakan algoritma pengurutan yang menggunakan paradigma Divide and Conquer." << endl;
}

void contohMergeSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> [5, 3] [2]" << endl;
    cout << "-> [5] [3] [2]" << endl;
    cout << "-> [3, 5] [2]" << endl;
    cout << "-> [2, 3, 5]" << endl; 
}

void runMergeSort() {
    int pilihan; 

    do {
        cout << "\n=== MERGE SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriMergeSort(); break; 
            case 2: contohMergeSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanMergeSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
        }
    
    } while (pilihan != 0);
}