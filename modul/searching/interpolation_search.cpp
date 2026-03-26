#include <iostream>
#include "interpolation_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriInterpolationSearch() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Interpolation Search merupakan variasi dari Binary Search yang bekerja lebih baik pada data yang terurut dan terdistribusi secara uniform (merata)." << endl;
}

void contohInterpolationSearch() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Interpolation Search" << endl; 
}

void runInterpolationSearch() {
    int pilihan; 

    do {
        cout << "\n=== INTERPOLATION SEARCH ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriInterpolationSearch(); break; 
            case 2: contohInterpolationSearch(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanLinearSearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiInterpolation(); break;
        }
    
    } while (pilihan != 0);
}