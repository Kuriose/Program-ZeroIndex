#include <iostream>
#include "interpolation_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriInterpolationSearch() {
    cout << "\n[Teori -- Interpolation Search]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Interpolation Search adalah algoritma pencarian yang merupakan" << endl;
    cout << "improvement dari Binary Search untuk data yang terdistribusi uniform." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Interpolation Formula: Menghitung posisi probe berdasarkan nilai target." << endl;
    cout << "- Uniform Distribution: Bekerja optimal jika data terdistribusi merata." << endl;
    cout << "- Complexity: O(log log n) average, O(n) worst case." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- WAJIB: Array harus sorted dan terdistribusi uniform." << endl;
    cout << "- Best Case: O(1) - Target langsung ditemukan di posisi pertama." << endl;
    cout << "- Worst Case: O(n) - Jika data tidak uniform (misal: eksponensial)." << endl;
    cout << "- Lebih cepat dari Binary Search untuk data uniform yang besar." << endl;
}

void contohInterpolationSearch() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "int interpolationSearch(int arr[], int n, int target) {" << endl;
    cout << "    int left = 0;                         // Baris 1: Index kiri" << endl;
    cout << "    int right = n - 1;                    // Baris 2: Index kanan" << endl;
    cout << "    while (left <= right && target >= arr[left] && target <= arr[right]) {" << endl;
    cout << "        if (left == right) {              // Baris 3: Cek satu elemen" << endl;
    cout << "            if (arr[left] == target) return left;" << endl;
    cout << "            return -1;" << endl;
    cout << "        }" << endl;
    cout << "        // Baris 4: Interpolation Formula" << endl;
    cout << "        int pos = left + ((target - arr[left]) * (right - left)) / (arr[right] - arr[left]);" << endl;
    cout << "        if (arr[pos] == target) {         // Baris 5: Cek posisi" << endl;
    cout << "            return pos;                   // Baris 6: Found!" << endl;
    cout << "        }" << endl;
    cout << "        if (arr[pos] < target) {          // Baris 7: Target di kanan" << endl;
    cout << "            left = pos + 1;               // Baris 8: Move left bound" << endl;
    cout << "        } else {                          // Baris 9: Target di kiri" << endl;
    cout << "            right = pos - 1;              // Baris 10: Move right bound" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "    return -1;                            // Baris 11: Not found" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1-2: Inisialisasi batas kiri dan kanan search space." << endl;
    cout << "-> Baris 3: Handle edge case ketika只剩 satu elemen." << endl;
    cout << "-> Baris 4: Formula interpolasi untuk estimate posisi target." << endl;
    cout << "-> Baris 5-6: Jika target == arr[pos], return index." << endl;
    cout << "-> Baris 7-8: Jika target > arr[pos], cari di kanan." << endl;
    cout << "-> Baris 9-10: Jika target < arr[pos], cari di kiri." << endl;
    cout << "-> Baris 11: Jika loop selesai tanpa found, return -1." << endl;
    
    cout << "\nOutput (Array [10, 20, 30, 40, 50], Target = 40):" << endl;
    cout << "Element found at index: 3" << endl; 
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
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanInterpolationSearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiInterpolation(); break;
        }
    
    } while (pilihan != 0);
}