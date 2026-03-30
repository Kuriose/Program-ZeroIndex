#include <iostream>
#include "shell_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriShellSort() {
    cout << "\n[Teori]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Shell Sort adalah algoritma pengurutan yang merupakan generalisasi" << endl;
    cout << "dari Insertion Sort dengan memungkinkan pertukaran elemen yang berjauhan." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Gap Sequence: Elemen dibandingkan dengan jarak tertentu (gap)." << endl;
    cout << "- Diminishing Gap: Gap berkurang setiap iterasi hingga menjadi 1." << endl;
    cout << "- Complexity: O(n log n) hingga O(n^2) tergantung gap sequence." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Shell Sort adalah In-Place Sort (tidak butuh memori tambahan)." << endl;
    cout << "- Termasuk Unstable Sort (urutan data sama bisa berubah)." << endl;
    cout << "- Lebih cepat dari Insertion Sort untuk data medium size." << endl;
}

void contohShellSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "void shellSort(int arr[], int n) {" << endl;
    cout << "    for (int gap = n/2; gap > 0; gap /= 2) {  // Baris 1: Gap sequence" << endl;
    cout << "        for (int i = gap; i < n; i++) {       // Baris 2: Loop dari gap" << endl;
    cout << "            int temp = arr[i];                // Baris 3: Simpan elemen saat ini" << endl;
    cout << "            int j = i;" << endl;
    cout << "            while (j >= gap && arr[j-gap] > temp) { // Baris 4: Compare dengan gap" << endl;
    cout << "                arr[j] = arr[j-gap];          // Baris 5: Geser elemen" << endl;
    cout << "                j -= gap;                     // Baris 6: Mundur sebesar gap" << endl;
    cout << "            }" << endl;
    cout << "            arr[j] = temp;                    // Baris 7: Insert di posisi benar" << endl;
    cout << "        }" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: Gap dimulai dari n/2, berkurang setengah setiap iterasi." << endl;
    cout << "-> Baris 2: Loop melalui elemen mulai dari index gap." << endl;
    cout << "-> Baris 3: Simpan elemen current untuk insertion." << endl;
    cout << "-> Baris 4-6: Geser elemen yang lebih besar dengan jarak gap." << endl;
    cout << "-> Baris 7: Tempatkan elemen di posisi yang benar." << endl; 
}

void runShellSort() {
    int pilihan; 

    do {
        cout << "\n=== SHELL SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriShellSort(); break; 
            case 2: contohShellSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanShellSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiShell(); break; 
        }
    
    } while (pilihan != 0);
}