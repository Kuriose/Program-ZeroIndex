#include <iostream> 
#include "modul_searching.h"

// Masukkan Semua Sub-modul Searching
#include "linear_search.h"
// #include "binary_search.h"
// #include "interpolation_search.h"
// #include "fibonacci_search.h"

using namespace std;

void runModulSearching() {
    int pilihan; 

    do {
        cout << "\n=== MODUL SEARCHING ===" << endl; 
        cout << "[1] Linear Search" << endl; 
        // cout << "[2] Binary Search" << endl; 
        // cout << "[3] Interpolation Search" << endl;
        // cout << "[4] Fibonacci Search" << endl; 

        cout << "[0] Kembali" << endl; 
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan;

        switch (pilihan) {
            case 1: runLinearSearch(); break; 
            // case 2: runBinarySearch(); break;
            // case 3: runInterpolationSearch(); break;
            // case 4: runFibonacciSearch(); break;
        }
    } while (pilihan != 0);
}