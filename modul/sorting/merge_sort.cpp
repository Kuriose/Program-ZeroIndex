#include <iostream>
#include "merge_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriMergeSort() {
    cout << "\n[Teori -- Merge Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Merge Sort adalah algoritma pengurutan yang menggunakan pendekatan" << endl;
    cout << "Divide and Conquer dengan membagi array menjadi dua bagian secara rekursif." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Divide: Bagi array menjadi dua bagian hingga tersisa 1 elemen." << endl;
    cout << "- Conquer: Gabungkan (merge) dua bagian yang sudah terurut." << endl;
    cout << "- Complexity: O(n log n) untuk semua kasus (best, average, worst)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Merge Sort adalah Stable Sort (urutan data sama tidak berubah)." << endl;
    cout << "- Membutuhkan memori tambahan O(n) untuk array temporary." << endl;
    cout << "- Sangat efisien untuk data besar dan linked list." << endl;
}

void contohMergeSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "void merge(int arr[], int left, int mid, int right) {" << endl;
    cout << "    int n1 = mid - left + 1;              // Baris 1: Ukuran array kiri" << endl;
    cout << "    int n2 = right - mid;                 // Baris 2: Ukuran array kanan" << endl;
    cout << "    int L[n1], R[n2];                     // Baris 3: Array temporary" << endl;
    cout << "    // Copy data ke temporary arrays" << endl;
    cout << "    for (int i = 0; i < n1; i++)          // Baris 4: Copy left" << endl;
    cout << "        L[i] = arr[left + i];" << endl;
    cout << "    for (int j = 0; j < n2; j++)          // Baris 5: Copy right" << endl;
    cout << "        R[j] = arr[mid + 1 + j];" << endl;
    cout << "    // Merge temporary arrays" << endl;
    cout << "    int i = 0, j = 0, k = left;" << endl;
    cout << "    while (i < n1 && j < n2) {            // Baris 6: Compare & merge" << endl;
    cout << "        if (L[i] <= R[j])" << endl;
    cout << "            arr[k++] = L[i++];            // Baris 7: Ambil dari kiri" << endl;
    cout << "        else" << endl;
    cout << "            arr[k++] = R[j++];            // Baris 8: Ambil dari kanan" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nvoid mergeSort(int arr[], int left, int right) {" << endl;
    cout << "    if (left >= right) return;            // Baris 9: Base case" << endl;
    cout << "    int mid = left + (right - left) / 2;  // Baris 10: Cari tengah" << endl;
    cout << "    mergeSort(arr, left, mid);            // Baris 11: Sort kiri" << endl;
    cout << "    mergeSort(arr, mid + 1, right);       // Baris 12: Sort kanan" << endl;
    cout << "    merge(arr, left, mid, right);         // Baris 13: Merge hasil" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1-8: Fungsi merge menggabungkan dua array sorted menjadi satu." << endl;
    cout << "-> Baris 9: Base case rekursif, jika 1 elemen sudah sorted." << endl;
    cout << "-> Baris 10-12: Divide array menjadi dua bagian secara rekursif." << endl;
    cout << "-> Baris 13: Merge kedua bagian yang sudah sorted." << endl; 
}

void runMergeSort() {
    int pilihan; 

    do {
        cout << "\n=== MERGE SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriMergeSort(); break; 
            case 2: contohMergeSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanMergeSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiMerge(); break;
        }
    
    } while (pilihan != 0);
}