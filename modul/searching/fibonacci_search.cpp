#include <iostream>
#include "fibonacci_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriFibonacciSearch() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Fibonacci Search adalah algoritma pencarian pada array terurut yang menggunakan bilangan Fibonacci untuk membagi array, bukan membagi dua seperti Binary Search." << endl;
}

void contohFibonacciSearch() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Fibonacci Search" << endl; 
}

void runFibonacciSearch() {
    int pilihan; 

    do {
        cout << "\n=== FIBONACCI SEARCH ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriFibonacciSearch(); break; 
            case 2: contohFibonacciSearch(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanLinearSearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiFibonacci(); break;
        }
    
    } while (pilihan != 0);
}