#include <iostream>
#include "insertion_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriInsertionSort() {
    cout << "\n[Teori -- Insertion Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Insertion Sort adalah algoritma pengurutan yang membangun array terurut" << endl;
    cout << "satu elemen pada satu waktu, dengan menyisipkan elemen ke posisi yang tepat." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Divide Implicit: Array dibagi menjadi bagian sorted (kiri) dan unsorted (kanan)." << endl;
    cout << "- Insertion: Ambil elemen dari unsorted, sisipkan ke posisi benar di sorted." << endl;
    cout << "- Complexity: O(n^2), tetapi efisien untuk data yang hampir terurut." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Mirip cara manusia mengurutkan kartu di tangan." << endl;
    cout << "- Termasuk Stable Sort (urutan data sama tidak berubah)." << endl;
}

void contohInsertionSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "void insertionSort(int arr[], int n) {" << endl;
    cout << "    for (int i = 1; i < n; i++) {        // Baris 1: Loop dari elemen ke-2" << endl;
    cout << "        int key = arr[i];                // Baris 2: Simpan elemen saat ini" << endl;
    cout << "        int j = i - 1;                   // Baris 3: Index elemen sebelumnya" << endl;
    cout << "        while (j >= 0 && arr[j] > key) { // Baris 4: Geser jika lebih besar" << endl;
    cout << "            arr[j + 1] = arr[j];         // Baris 5: Geser ke kanan" << endl;
    cout << "            j--;                         // Baris 6: Mundur satu langkah" << endl;
    cout << "        }" << endl;
    cout << "        arr[j + 1] = key;                // Baris 7: Sisipkan key di posisi benar" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: Mulai dari indeks 1 (elemen ke-2), indeks 0 dianggap sorted." << endl;
    cout << "-> Baris 2: 'key' adalah elemen yang akan disisipkan ke bagian sorted." << endl;
    cout << "-> Baris 4-6: Geser elemen yang lebih besar dari key ke kanan." << endl;
    cout << "-> Baris 7: Tempatkan key di posisi kosong yang tepat." << endl;
}

void runInsertionSort() {
    int pilihan; 

    do {
        cout << "\n=== INSERTION SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl;
        cout << "[4] Visualisasi" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriInsertionSort(); break; 
            case 2: contohInsertionSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanInsertionSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiInsertion(); break;
        }
    
    } while (pilihan != 0);
}