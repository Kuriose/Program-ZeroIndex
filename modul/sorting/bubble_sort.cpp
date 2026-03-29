#include <iostream> 
#include "bubble_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriBubbleSort() {
    cout << "\n[Teori -- Bubble Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Bubble Sort adalah algoritma pengurutan sederhana yang berulang kali" << endl;
    cout << "membandingkan elemen bersebelahan dan menukarnya jika urutannya salah." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Nested Loop: Loop luar untuk jumlah pass, loop dalam untuk perbandingan." << endl;
    cout << "- Comparision & Swap: Jika kiri > kanan, tukar posisi." << endl;
    cout << "- Complexity: O(n^2), cocok untuk data kecil atau belajar konsep." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Element terbesar akan 'menggelembung' ke akhir array setiap pass." << endl;
    cout << "- Termasuk Stable Sort (urutan data sama tidak berubah)." << endl;
}

void contohBubbleSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "void bubbleSort(int arr[], int n) {" << endl;
    cout << "    for (int i = 0; i < n-1; i++) {        // Baris 1: Loop luar (pass)" << endl;
    cout << "        for (int j = 0; j < n-i-1; j++) {  // Baris 2: Loop dalam (compare)" << endl;
    cout << "            if (arr[j] > arr[j+1]) {       // Baris 3: Cek urutan" << endl;
    cout << "                swap(arr[j], arr[j+1]);    // Baris 4: Tukar jika salah" << endl;
    cout << "            }" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: Mengulang proses sebanyak jumlah elemen." << endl;
    cout << "-> Baris 2: Membandingkan elemen bersebelahan (j dan j+1)." << endl;
    cout << "-> Baris 3: Jika elemen kiri lebih besar dari kanan, perlu swap." << endl;
    cout << "-> Baris 4: Fungsi swap menukar posisi kedua elemen." << endl;
}

void runBubbleSort() {
    int pilihan; 

    do {
        cout << "\n=== BUBBLE SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriBubbleSort(); break; 
            case 2: contohBubbleSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanBubbleSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiBubble(); break; 
        }
    
    } while (pilihan != 0);
}