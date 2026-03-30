#include <iostream>
#include "quick_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriQuickSort() {
    cout << "\n[Teori -- Quick Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Quick Sort adalah algoritma pengurutan yang menggunakan pendekatan" << endl;
    cout << "Divide and Conquer dengan memilih elemen pivot dan mempartisi array." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Pivot: Elemen yang dipilih sebagai acuan partisi." << endl;
    cout << "- Partition: Bagi array menjadi kiri (< pivot) dan kanan (> pivot)." << endl;
    cout << "- Complexity: O(n log n) average, O(n²) worst case." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Quick Sort adalah in-place sort (tidak butuh memori tambahan besar)." << endl;
    cout << "- Termasuk Unstable Sort (urutan data sama bisa berubah)." << endl;
    cout << "- Salah satu sorting tercepat untuk data besar di praktik." << endl;
}

void contohQuickSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "int partition(int arr[], int low, int high) {" << endl;
    cout << "    int pivot = arr[high];                // Baris 1: Pilih pivot (elemen terakhir)" << endl;
    cout << "    int i = low - 1;                      // Baris 2: Index elemen lebih kecil" << endl;
    cout << "    for (int j = low; j < high; j++) {    // Baris 3: Loop melalui array" << endl;
    cout << "        if (arr[j] <= pivot) {            // Baris 4: Jika lebih kecil dari pivot" << endl;
    cout << "            i++;" << endl;
    cout << "            swap(arr[i], arr[j]);         // Baris 5: Swap ke bagian kiri" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "    swap(arr[i + 1], arr[high]);          // Baris 6: Place pivot di posisi benar" << endl;
    cout << "    return i + 1;                         // Baris 7: Return index pivot" << endl;
    cout << "}" << endl;
    
    cout << "\nvoid quickSort(int arr[], int low, int high) {" << endl;
    cout << "    if (low < high) {                     // Baris 8: Base case" << endl;
    cout << "        int pi = partition(arr, low, high);// Baris 9: Dapatkan index pivot" << endl;
    cout << "        quickSort(arr, low, pi - 1);      // Baris 10: Sort kiri pivot" << endl;
    cout << "        quickSort(arr, pi + 1, high);     // Baris 11: Sort kanan pivot" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1-7: Fungsi partition membagi array berdasarkan pivot." << endl;
    cout << "-> Baris 2: 'i' elemen yang lebih kecil dari pivot." << endl;
    cout << "-> Baris 4-5: Elemen <= pivot dipindah ke bagian kiri." << endl;
    cout << "-> Baris 6: Pivot ditempatkan di posisi akhir yang benar." << endl;
    cout << "-> Baris 10-11: Rekursif sort kedua sisi pivot." << endl;
}

void runQuickSort() {
    int pilihan; 

    do {
        cout << "\n=== QUICK SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriQuickSort(); break; 
            case 2: contohQuickSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanQuickSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiQuick(); break; 
        }
    
    } while (pilihan != 0);
}