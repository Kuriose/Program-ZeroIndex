#include <iostream>
#include "insertion_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriInsertionSort() {
    cout << "\n[Teori]" << endl; 
    cout << "Insertion Sort menyisipkan elemen yang benar ke urutan pertama dari array." << endl;
}

void contohInsertionSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> [3, 5, 2]" << endl; 
    cout << "-> [2, 3, 5]" << endl;
}

void runInsertionSort() {
    int pilihan; 

    do {
        cout << "\n=== INSERTION SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl;
        cout << "[4] Visualisasi" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriInsertionSort(); break; 
            case 2: contohInsertionSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanInsertionSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiInsertion(); break;
        }
    
    } while (pilihan != 0);
}