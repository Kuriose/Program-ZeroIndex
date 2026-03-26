#include <iostream> 
#include "bubble_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriBubbleSort() {
    cout << "\n[Teori]" << endl; 
    cout << "Bubble Sort menukar elemen bersebelahan jika urutannya salah." << endl;
}

void contohBubbleSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> [3, 5, 2]" << endl; 
    cout << "-> [3, 2, 5]" << endl; 
    cout << "-> [2, 3, 5]" << endl;
}

void runBubbleSort() {
    int pilihan; 

    do {
        cout << "\n=== BUBBLE SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriBubbleSort(); break; 
            case 2: contohBubbleSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanBubbleSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
        }
    
    } while (pilihan != 0);
}