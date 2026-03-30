#include <iostream>
#include "exchange_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriExchangeSort() {
    cout << "\n[Teori -- Exchange Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Exchange Sort adalah algoritma pengurutan sederhana yang membandingkan" << endl;
    cout << "setiap elemen dengan semua elemen lainnya dan menukar jika posisi salah." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Compare All: Setiap elemen dibandingkan dengan semua elemen lain." << endl;
    cout << "- Direct Swap: Jika elemen kiri > elemen kanan, langsung tukar." << endl;
    cout << "- Complexity: O(n^2) untuk semua kasus (best, average, worst)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Exchange Sort adalah varian dari Bubble Sort tanpa adjacent restriction." << endl;
    cout << "- Termasuk Stable Sort jika implementasi menggunakan <= bukan <." << endl;
    cout << "- Sangat sederhana tapi tidak efisien untuk data besar." << endl;
}

void contohExchangeSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "void exchangeSort(int arr[], int n) {" << endl;
    cout << "    for (int i = 0; i < n-1; i++) {        // Baris 1: Loop elemen pertama" << endl;
    cout << "        for (int j = i+1; j < n; j++) {    // Baris 2: Loop elemen kedua" << endl;
    cout << "            if (arr[i] > arr[j]) {         // Baris 3: Bandingkan langsung" << endl;
    cout << "                swap(arr[i], arr[j]);      // Baris 4: Tukar jika salah" << endl;
    cout << "            }" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    cout << endl;
    cout << "Penjelasan:" << endl;
    cout << "-> Baris 1: Loop luar untuk setiap posisi array." << endl;
    cout << "-> Baris 2: Loop dalam membandingkan dengan semua elemen setelah i." << endl;
    cout << "-> Baris 3: Jika arr[i] > arr[j], berarti posisi salah." << endl;
    cout << "-> Baris 4: Langsung swap, tidak perlu adjacent seperti Bubble Sort." << endl;
    cout << endl;
    cout << "Output (Array [5, 1, 4, 2, 8]):" << endl;
    cout << "1 2 4 5 8" << endl;
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