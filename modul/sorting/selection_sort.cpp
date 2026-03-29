#include <iostream>
#include "selection_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriSelectionSort() {
    cout << "\n[Teori -- Selection Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Selection Sort adalah algoritma pengurutan yang berulang kali mencari" << endl;
    cout << "elemen minimum dari bagian yang belum terurut dan menempatkannya di awal." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Selection: Mencari elemen terkecil dari unsorted portion." << endl;
    cout << "- Swap: Menukar elemen minimum dengan elemen di posisi saat ini." << endl;
    cout << "- Complexity: O(n^2) untuk semua kasus (best, average, worst)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Jumlah swap lebih sedikit dibanding Bubble Sort." << endl;
    cout << "- Termasuk Unstable Sort (urutan data sama bisa berubah)." << endl;
}

void contohSelectionSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "void selectionSort(int arr[], int n) {" << endl;
    cout << "    for (int i = 0; i < n-1; i++) {        // Baris 1: Loop untuk setiap posisi" << endl;
    cout << "        int minIdx = i;                    // Baris 2: Asumsi elemen pertama adalah min" << endl;
    cout << "        for (int j = i+1; j < n; j++) {    // Baris 3: Cari elemen lebih kecil" << endl;
    cout << "            if (arr[j] < arr[minIdx]) {    // Baris 4: Bandingkan dengan min" << endl;
    cout << "                minIdx = j;                // Baris 5: Update index minimum" << endl;
    cout << "            }" << endl;
    cout << "        }" << endl;
    cout << "        swap(arr[i], arr[minIdx]);         // Baris 6: Tukar dengan posisi i" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: Loop luar untuk menentukan posisi yang akan diisi." << endl;
    cout << "-> Baris 2: Simpan index elemen minimum sementara." << endl;
    cout << "-> Baris 3-5: Cari elemen terkecil di sisa array (unsorted)." << endl;
    cout << "-> Baris 6: Swap elemen minimum ke posisi yang benar." << endl; 
}

void runSelectionSort() {
    int pilihan; 

    do {
        cout << "\n=== SELECTION SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriSelectionSort(); break; 
            case 2: contohSelectionSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanSelectionSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiSelection(); break;
        }
    
    } while (pilihan != 0);
}