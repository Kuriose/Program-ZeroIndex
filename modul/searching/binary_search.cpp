#include <iostream>
#include "binary_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriBinarySearch() {
    cout << "\n[Teori -- Binary Search]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Binary Search adalah algoritma pencarian efisien yang menggunakan" << endl;
    cout << "pendekatan Divide and Conquer pada array yang sudah terurut (sorted)." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Divide and Conquer: Bagi array menjadi dua bagian setiap iterasi." << endl;
    cout << "- Compare Middle: Bandingkan target dengan elemen tengah." << endl;
    cout << "- Complexity: O(log n) - Jauh lebih cepat dari Linear Search O(n)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- WAJIB: Array harus dalam keadaan sorted (terurut)." << endl;
    cout << "- Best Case: O(1) - Target ditemukan di middle pertama." << endl;
    cout << "- Worst Case: O(log n) - Target di ujung atau tidak ada." << endl;
    cout << "- Hanya bekerja pada data dengan random access (array, bukan linked list)." << endl;
}

void contohBinarySearch() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "int binarySearch(int arr[], int n, int target) {" << endl;
    cout << "    int left = 0;                         // Baris 1: Index kiri" << endl;
    cout << "    int right = n - 1;                    // Baris 2: Index kanan" << endl;
    cout << "    while (left <= right) {               // Baris 3: Loop selama valid" << endl;
    cout << "        int mid = left + (right - left) / 2; // Baris 4: Hitung middle" << endl;
    cout << "        if (arr[mid] == target) {         // Baris 5: Cek middle" << endl;
    cout << "            return mid;                   // Baris 6: Found!" << endl;
    cout << "        }" << endl;
    cout << "        if (arr[mid] < target) {          // Baris 7: Target di kanan" << endl;
    cout << "            left = mid + 1;               // Baris 8: Move left bound" << endl;
    cout << "        } else {                          // Baris 9: Target di kiri" << endl;
    cout << "            right = mid - 1;              // Baris 10: Move right bound" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "    return -1;                            // Baris 11: Not found" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1-2: Inisialisasi batas kiri dan kanan search space." << endl;
    cout << "-> Baris 3: Loop selama search space masih valid." << endl;
    cout << "-> Baris 4: Hitung middle (hindari overflow dengan formula ini)." << endl;
    cout << "-> Baris 5-6: Jika target == middle, return index." << endl;
    cout << "-> Baris 7-8: Jika target > middle, cari di kanan." << endl;
    cout << "-> Baris 9-10: Jika target < middle, cari di kiri." << endl;
    cout << "-> Baris 11: Jika loop selesai tanpa found, return -1." << endl;
    
    cout << "\nOutput (Array [1, 2, 4, 5, 8], Target = 5):" << endl;
    cout << "Element found at index: 3" << endl; 
}

void runBinarySearch() {
    int pilihan; 

    do {
        cout << "\n=== BINARY SEARCH ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriBinarySearch(); break; 
            case 2: contohBinarySearch(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanBinarySearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiBinary(); break;
        }
    
    } while (pilihan != 0);
}