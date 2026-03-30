#include <iostream>
#include "radix_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriRadixSort() {
    cout << "\n[Teori -- Radix Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Radix Sort adalah algoritma pengurutan non-komparatif yang mengurutkan" << endl;
    cout << "elemen berdasarkan digit dari posisi paling signifikan atau least significant." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Digit-by-Digit: Sortir berdasarkan digit (satuan, puluhan, ratusan, dst)." << endl;
    cout << "- Counting Sort: Menggunakan Counting Sort sebagai subroutine untuk setiap digit." << endl;
    cout << "- Complexity: O(d * (n + b)) dimana d=digit, n=elemen, b=base (10 untuk desimal)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Radix Sort adalah Stable Sort (urutan data sama tidak berubah)." << endl;
    cout << "- Hanya bekerja pada integer atau string dengan format fixed-length." << endl;
    cout << "- Lebih cepat dari O(n log n) untuk data dengan digit terbatas." << endl;
}

void contohRadixSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "int getMax(int arr[], int n) {" << endl;
    cout << "    int max = arr[0];" << endl;
    cout << "    for (int i = 1; i < n; i++)" << endl;
    cout << "        if (arr[i] > max) max = arr[i];" << endl;
    cout << "    return max;                         // Baris 1: Cari nilai maksimum" << endl;
    cout << "}" << endl;
    
    cout << "\nvoid countingSort(int arr[], int n, int exp) {" << endl;
    cout << "    int output[n];                      // Baris 2: Array output" << endl;
    cout << "    int count[10] = {0};                // Baris 3: Count digit 0-9" << endl;
    cout << "    for (int i = 0; i < n; i++)         // Baris 4: Hitung frekuensi digit" << endl;
    cout << "        count[(arr[i]/exp) % 10]++;" << endl;
    cout << "    for (int i = 1; i < 10; i++)        // Baris 5: Cumulative count" << endl;
    cout << "        count[i] += count[i-1];" << endl;
    cout << "    for (int i = n-1; i >= 0; i--) {    // Baris 6: Build output (stable)" << endl;
    cout << "        output[count[(arr[i]/exp)%10]-1] = arr[i];" << endl;
    cout << "        count[(arr[i]/exp) % 10]--;" << endl;
    cout << "    }" << endl;
    cout << "    for (int i = 0; i < n; i++)         // Baris 7: Copy ke arr asli" << endl;
    cout << "        arr[i] = output[i];" << endl;
    cout << "}" << endl;
    
    cout << "\nvoid radixSort(int arr[], int n) {" << endl;
    cout << "    int max = getMax(arr, n);           // Baris 8: Cari max untuk tahu digit" << endl;
    cout << "    for (int exp = 1; max/exp > 0; exp *= 10) // Baris 9: Loop setiap digit" << endl;
    cout << "        countingSort(arr, n, exp);      // Baris 10: Sort per digit" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: Cari nilai max untuk mengetahui jumlah digit." << endl;
    cout << "-> Baris 3-7: Counting Sort untuk mengurutkan berdasarkan digit saat ini." << endl;
    cout << "-> Baris 9: Loop melalui setiap posisi digit (1, 10, 100, ...)." << endl;
    cout << "-> Baris 10: Panggil countingSort untuk setiap posisi digit." << endl; 
}

void runRadixSort() {
    int pilihan; 

    do {
        cout << "\n=== RADIX SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriRadixSort(); break; 
            case 2: contohRadixSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanRadixSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiRadix(); break;
        }
    
    } while (pilihan != 0);
}