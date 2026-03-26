#include <iostream>
#include "exchange_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriExchangeSort() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Exchange Sort adalah kategori algoritma pengurutan yang bekerja dengan cara menukar dua elemen jika posisinya tidak sesuai urutan." << endl;
}

void contohExchangeSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Exchange Sort" << endl; 
}

void runExchangeSort() {
    int pilihan; 

    do {
        cout << "\n=== EXCHANGE SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriExchangeSort(); break; 
            case 2: contohExchangeSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanExchangeSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiExchange(); break;
        }
    
    } while (pilihan != 0);
}