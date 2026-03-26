#include <iostream> 
#include "modul_sorting.h"

// Masukkan Semua Sub-modul Sorting
#include "bubble_sort.h"
#include "insertion_sort.h"
#include "selection_sort.h"
#include "heap_sort.h"
#include "merge_sort.h"

#include "quick_sort.h"
#include "tree_sort.h"
#include "exchange_sort.h"
#include "radix_sort.h"
#include "shell_sort.h"

using namespace std;

void runModulSorting() {
    int pilihan; 

    do {
        cout << "\n=== MODUL SORTING ===" << endl; 
        cout << "[1] Bubble Sort" << endl; 
        cout << "[2] Insertion Sort" << endl; 
        cout << "[3] Selection Sort" << endl;
        cout << "[4] Heap Sort" << endl; 
        cout << "[5] Merge Sort" << endl;
        
        cout << endl;

        cout << "[6] Quick Sort" << endl;
        cout << "[7] Tree Sort" << endl;
        cout << "[8] Exchange Sort" << endl;
        cout << "[9] Radix Sort" << endl;
        cout << "[10] Shell Sort" << endl;

        cout << "[0] Kembali" << endl; 
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan;

        switch (pilihan) {
            case 1: runBubbleSort(); break; 
            case 2: runInsertionSort(); break;
            case 3: runSelectionSort(); break;
            case 4: runHeapSort(); break;
            case 5: runMergeSort(); break;

            case 6: runQuickSort(); break;
            case 7: runTreeSort(); break;
            case 8: runExchangeSort(); break;
            case 9: runRadixSort(); break;
            case 10: runShellSort(); break;
        }
    } while (pilihan != 0);
}