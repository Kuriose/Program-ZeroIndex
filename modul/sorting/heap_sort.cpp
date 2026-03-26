#include <iostream>
#include "heap_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriHeapSort() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Heap Sort merupakan algoritma pengurutan berbasis struktur data Binary Heap." << endl;
}

void contohHeapSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; // MAX HEAP
    cout << "-> [2, 3, 5]" << endl; 
}

void runHeapSort() {
    int pilihan; 

    do {
        cout << "\n=== HEAP SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriHeapSort(); break; 
            case 2: contohHeapSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanHeapSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiHeap(); break;
        }
    
    } while (pilihan != 0);
}