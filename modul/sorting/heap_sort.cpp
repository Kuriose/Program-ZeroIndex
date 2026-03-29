#include <iostream>
#include "heap_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriHeapSort() {
    cout << "\n[Teori -- Heap Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Heap Sort adalah algoritma pengurutan yang menggunakan struktur data" << endl;
    cout << "Binary Heap untuk mengorganisir elemen sebelum melakukan pengurutan." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Binary Heap: Tree lengkap dimana parent >= children (Max Heap)." << endl;
    cout << "- Two Phase: (1) Build Max Heap, (2) Extract max element repeatedly." << endl;
    cout << "- Complexity: O(n log n) untuk semua kasus (best, average, worst)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Heap Sort adalah in-place sort (tidak butuh memori tambahan besar)." << endl;
    cout << "- Termasuk Unstable Sort (urutan data sama bisa berubah)." << endl;
    cout << "- Lebih efisien dari O(n²) sort untuk data besar." << endl;
}

void contohHeapSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "void heapify(int arr[], int n, int i) {" << endl;
    cout << "    int largest = i;                    // Baris 1: Asumsi root terbesar" << endl;
    cout << "    int left = 2*i + 1;                 // Baris 2: Index left child" << endl;
    cout << "    int right = 2*i + 2;                // Baris 3: Index right child" << endl;
    cout << "    if (left < n && arr[left] > arr[largest])" << endl;
    cout << "        largest = left;                 // Baris 4: Update jika left lebih besar" << endl;
    cout << "    if (right < n && arr[right] > arr[largest])" << endl;
    cout << "        largest = right;                // Baris 5: Update jika right lebih besar" << endl;
    cout << "    if (largest != i) {" << endl;
    cout << "        swap(arr[i], arr[largest]);     // Baris 6: Swap root dengan largest" << endl;
    cout << "        heapify(arr, n, largest);       // Baris 7: Rekursif heapify subtree" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nvoid heapSort(int arr[], int n) {" << endl;
    cout << "    for (int i = n/2 - 1; i >= 0; i--)  // Baris 8: Build Max Heap" << endl;
    cout << "        heapify(arr, n, i);" << endl;
    cout << "    for (int i = n-1; i > 0; i--) {     // Baris 9: Extract elements" << endl;
    cout << "        swap(arr[0], arr[i]);           // Baris 10: Pindah max ke end" << endl;
    cout << "        heapify(arr, i, 0);             // Baris 11: Heapify root" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1-7: Fungsi heapify memastikan subtree memenuhi sifat max heap." << endl;
    cout << "-> Baris 8: Build heap dimulai dari node terakhir yang punya children." << endl;
    cout << "-> Baris 9-11: Extract max element satu per satu ke akhir array." << endl; 
}

void runHeapSort() {
    int pilihan; 

    do {
        cout << "\n=== HEAP SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriHeapSort(); break; 
            case 2: contohHeapSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanHeapSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiHeap(); break;
        }
    
    } while (pilihan != 0);
}