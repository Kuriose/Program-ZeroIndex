#include <iostream>
#include "linear_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriLinearSearch() {
    cout << "\n[Teori -- Linear Search]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Linear Search adalah algoritma pencarian sederhana yang memeriksa" << endl;
    cout << "setiap elemen dalam array secara berurutan hingga elemen ditemukan." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Sequential Check: Memeriksa elemen satu per satu dari awal." << endl;
    cout << "- No Sorting Required: Dapat bekerja pada array yang tidak terurut." << endl;
    cout << "- Complexity: O(n) untuk semua kasus (best, average, worst)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Best Case: Elemen ditemukan di index pertama (O(1))." << endl;
    cout << "- Worst Case: Elemen tidak ada atau di index terakhir (O(n))." << endl;
    cout << "- Cocok untuk data kecil atau data yang tidak terurut." << endl;
}

void contohLinearSearch() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "int linearSearch(int arr[], int n, int target) {" << endl;
    cout << "    for (int i = 0; i < n; i++) {           // Baris 1: Loop melalui array" << endl;
    cout << "        if (arr[i] == target) {             // Baris 2: Cek apakah sama" << endl;
    cout << "            return i;                       // Baris 3: Return index jika ditemukan" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "    return -1;                              // Baris 4: Return -1 jika tidak ditemukan" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: Loop melalui setiap elemen array dari index 0." << endl;
    cout << "-> Baris 2: Bandingkan elemen current dengan target." << endl;
    cout << "-> Baris 3: Jika ditemukan, return index segera (early exit)." << endl;
    cout << "-> Baris 4: Jika loop selesai tanpa ditemukan, return -1." << endl;
    
    cout << "\nOutput (Array [5, 1, 4, 2, 8], Target = 2):" << endl;
    cout << "Element found at index: 3" << endl; 
}

void runLinearSearch() {
    int pilihan; 

    do {
        cout << "\n=== LINEAR SEARCH ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriLinearSearch(); break; 
            case 2: contohLinearSearch(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanLinearSearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiLinear(); break;
        }
    
    } while (pilihan != 0);
}