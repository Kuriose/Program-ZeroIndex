#include <iostream>
#include "shell_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriShellSort() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Shell Sort merupakan generalisasi dari Insertion Sort yang memungkinkan pertukaran elemen-elemen yang berjarak jauh." << endl;
    cout << 
    "Algoritma ini memulai dengan gap besar, lalu secara bertahap memperkecil gap hingga akhrinya melakukan Insertion Sort biasa (gap = 1)." << endl;
}

void contohShellSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Shell Sort" << endl; 
}

void runShellSort() {
    int pilihan; 

    do {
        cout << "\n=== SHELL SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriShellSort(); break; 
            case 2: contohShellSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanShellSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
        }
    
    } while (pilihan != 0);
}