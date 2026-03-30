#include <iostream>
#include "fibonacci_search.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriFibonacciSearch() {
    cout << "\n[Teori]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Fibonacci Search adalah algoritma pencarian yang menggunakan" << endl;
    cout << "angka Fibonacci untuk membagi array menjadi bagian yang lebih kecil." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Fibonacci Numbers: Menggunakan deret Fibonacci (1, 1, 2, 3, 5, 8, 13...)." << endl;
    cout << "- Divide Strategy: Membagi array berdasarkan rasio Fibonacci, bukan tengah." << endl;
    cout << "- Complexity: O(log n) - Sama seperti Binary Search." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- WAJIB: Array harus dalam keadaan sorted (terurut)." << endl;
    cout << "- Kelebihan: Hanya menggunakan operasi + dan - (tidak ada division /)." << endl;
    cout << "- Berguna untuk sistem dimana operasi division mahal/kompleks." << endl;
    cout << "- Space: O(1) - In-place, tidak butuh memori tambahan." << endl;
}

void contohFibonacciSearch() {
    cout << "\n[Contoh]" << endl; 
    cout << "int fibonacciSearch(int arr[], int n, int target) {" << endl;
    cout << "    int fib2 = 0;                       // Baris 1: Fibonacci (m-2)" << endl;
    cout << "    int fib1 = 1;                       // Baris 2: Fibonacci (m-1)" << endl;
    cout << "    int fib = fib1 + fib2;              // Baris 3: Fibonacci (m)" << endl;
    cout << "    while (fib < n) {                   // Baris 4: Cari fib >= n" << endl;
    cout << "        fib2 = fib1;" << endl;
    cout << "        fib1 = fib;" << endl;
    cout << "        fib = fib1 + fib2;" << endl;
    cout << "    }" << endl;
    cout << "    int offset = -1;                    // Baris 5: Offset awal" << endl;
    cout << "    while (fib > 1) {                   // Baris 6: Loop search" << endl;
    cout << "        int i = min(offset + fib2, n-1);// Baris 7: Hitung index" << endl;
    cout << "        if (arr[i] < target) {          // Baris 8: Target di kanan" << endl;
    cout << "            fib = fib1;" << endl;
    cout << "            fib1 = fib2;" << endl;
    cout << "            fib2 = fib - fib1;" << endl;
    cout << "            offset = i;                 // Baris 9: Update offset" << endl;
    cout << "        } else if (arr[i] > target) {   // Baris 10: Target di kiri" << endl;
    cout << "            fib = fib2;" << endl;
    cout << "            fib1 = fib1 - fib2;" << endl;
    cout << "            fib2 = fib - fib1;" << endl;
    cout << "        } else {                        // Baris 11: Found!" << endl;
    cout << "            return i;                   // Baris 12: Return index" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "    if (fib1 && arr[offset+1] == target)// Baris 13: Cek last element" << endl;
    cout << "        return offset+1;" << endl;
    cout << "    return -1;                          // Baris 14: Not found" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1-4: Generate Fibonacci number >= n." << endl;
    cout << "-> Baris 5: Offset untuk track eliminated front portion." << endl;
    cout << "-> Baris 6-12: Loop utama dengan Fibonacci division." << endl;
    cout << "-> Baris 7: Hitung index probe menggunakan fib2." << endl;
    cout << "-> Baris 8-9: Jika target > arr[i], eliminasi kiri." << endl;
    cout << "-> Baris 10: Jika target < arr[i], eliminasi kanan." << endl;
    cout << "-> Baris 11-12: Jika target == arr[i], return index." << endl;
    cout << "-> Baris 13-14: Handle edge case untuk elemen terakhir." << endl;
    
    cout << "\nOutput (Array [10, 20, 30, 40, 50], Target = 40):" << endl;
    cout << "Element found at index: 3" << endl; 
}

void runFibonacciSearch() {
    int pilihan; 

    do {
        cout << "\n=== FIBONACCI SEARCH ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriFibonacciSearch(); break; 
            case 2: contohFibonacciSearch(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanFibonacciSearch(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiFibonacci(); break;
        }
    
    } while (pilihan != 0);
}