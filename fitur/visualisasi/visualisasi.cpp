#include <iostream> 
#include "visualisasi.h"

using namespace std;

// ARRAY
void visualisasiArray() {
    cout << "\n[Visualisasi -- Array]" << endl;
    cout << "-> Deklarasi array 'int nilai[3]'" << endl;
    cout << "-> Memori dialokasikan untuk 3 kotak integer" << endl; 

    cout << "\n[ ? ][ ? ][ ? ]" << endl; 
    cout << "  0    1    2      (Indeks)" << endl;

    cout << "\n-> Inisialisasi elemen dalam array" << endl; 
    cout << "[ 80 ][ 90 ][ 70 ]" << endl; 
    cout << "  0     1     2      (Indeks)" << endl;
}

// POINTER
void visualisasiPointer() {
    cout << "\n[Visualisasi -- Pointer]" << endl;
    cout << "-> State Awal:" << endl;
    cout << "-> Variabel x = 10" << endl;
    cout << "-> Alamat     = 0x100" << endl;
    
    cout << "\nProses:" << endl;
    cout << "1. Deklarasi Pointer p" << endl;
    cout << "2. Assign alamat x ke p (&x)" << endl;
    
    cout << "\nRepresentasi Memori:" << endl;
    cout << "+-------+      +-------+" << endl;
    cout << "|   x   |      |   p   |" << endl;
    cout << "|  10   |      | 0x100 |" << endl;
    cout << "+-------+      +-------+" << endl;
    cout << "    ^              |" << endl;
    cout << "    |______________| (Menunjuk ke alamat)" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "*p akan membaca nilai di alamat 0x100 yaitu 10." << endl;
}

// STRUCT
void visualisasiStruct() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Blueprint (Definisi):" << endl;
    cout << "+-------------------+" << endl;
    cout << "|   struct Mahasiswa|" << endl;
    cout << "|   - string nama   |" << endl;
    cout << "|   - int nim       |" << endl;
    cout << "+-------------------+" << endl;
    
    cout << "\nInstance (Objek m1):" << endl;
    cout << "+-------------------+" << endl;
    cout << "|   m1 (0x200)      |" << endl;
    cout << "|   nama: \"Budi\"    |" << endl;
    cout << "|   nim:  123       |" << endl;
    cout << "+-------------------+" << endl;
    
    cout << "\nAkses:" << endl;
    cout << "m1.nama -> Mengambil \"Budi\"" << endl;
    cout << "m1.nim  -> Mengambil 123" << endl;
}

// Fungsi & Prosedur
void visualisasiFP() {
    cout << "Flow Pemanggilan Fungsi:" << endl;
    
    cout << "\nmain()                          tambah(5, 3)" << endl;
    cout << "  |                                   |" << endl;
    cout << "  |--- panggil tambah(5,3) ---------->" << endl;
    cout << "  |                                   |" << endl;
    cout << "  |          a=5, b=3                 |" << endl;
    cout << "  |          return 8                 |" << endl;
    cout << "  |<----------------------------------|" << endl;
    cout << "  |                                   " << endl;
    cout << "  |--- hasil = 8                      " << endl;
    
    cout << "\nStack Frame Sederhana:" << endl;
    cout << "+---------------------+" << endl;
    cout << "| Frame: tambah()     |" << endl;
    cout << "| a = 5               |" << endl;
    cout << "| b = 3               |" << endl;
    cout << "| return -> 8         |" << endl;
    cout << "+---------------------+" << endl;
    cout << "| Frame: main()       |" << endl;
    cout << "| hasil = 8           |" << endl;
    cout << "+---------------------+" << endl;
    
    cout << "\nCatatan:" << endl;
    cout << "- Parameter dilewatkan by value (salinan), perubahan di fungsi" << endl;
    cout << "  tidak mempengaruhi variabel asli (kecuali pakai reference/pointer)." << endl;
}

// SORTING
// 1. Bubble Sort
void visualisasiBubble() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    
    cout << "\nPass 1:" << endl;
    cout << "1. [5, 1] -> Swap -> [1, 5, 4, 2, 8]" << endl;
    cout << "2. [5, 4] -> Swap -> [1, 4, 5, 2, 8]" << endl;
    cout << "3. [5, 2] -> Swap -> [1, 4, 2, 5, 8]" << endl;
    cout << "4. [5, 8] -> No   -> [1, 4, 2, 5, 8]" << endl;
    cout << "(Angka 8 sudah di posisi benar)" << endl;
    
    cout << "\nPass 2:" << endl;
    cout << "1. [1, 4] -> No   -> [1, 4, 2, 5, 8]" << endl;
    cout << "2. [4, 2] -> Swap -> [1, 2, 4, 5, 8]" << endl;
    cout << "3. [4, 5] -> No   -> [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Setiap pass, elemen terbesar 'menggelembung' ke kanan." << endl;
    cout << "- Loop dalam semakin pendek karena ujung kanan sudah sorted." << endl;
}

// 2. Insertion Sort
void visualisasiInsertion() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    cout << "[Sorted] [Unsorted]" << endl;
    
    cout << "\nPass 1 (key=1):" << endl;
    cout << "1. 5 > 1? Ya -> Geser 5 ke kanan" << endl;
    cout << "2. Sisipkan 1 di awal" << endl;
    cout << "   Hasil: [1, 5, 4, 2, 8]" << endl;
    
    cout << "\nPass 2 (key=4):" << endl;
    cout << "1. 5 > 4? Ya -> Geser 5 ke kanan" << endl;
    cout << "2. 1 > 4? Tidak -> Stop geser" << endl;
    cout << "3. Sisipkan 4 setelah 1" << endl;
    cout << "   Hasil: [1, 4, 5, 2, 8]" << endl;
    
    cout << "\nPass 3 (key=2):" << endl;
    cout << "1. 5 > 2? Ya -> Geser" << endl;
    cout << "2. 4 > 2? Ya -> Geser" << endl;
    cout << "3. 1 > 2? Tidak -> Stop" << endl;
    cout << "   Hasil: [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nPass 4 (key=8):" << endl;
    cout << "1. 5 > 8? Tidak -> Tidak ada geser" << endl;
    cout << "   Hasil: [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Bagian kiri array semakin besar (sorted region)." << endl;
    cout << "- Setiap pass, satu elemen dari kanan disisipkan ke kiri." << endl;
}

// 3. Selection Sort
void visualisasiSelection() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    cout << "[Sorted] [Unsorted]" << endl;
    
    cout << "\nPass 1 (i=0):" << endl;
    cout << "1. Cari min di [5, 1, 4, 2, 8] -> min = 1 (index 1)" << endl;
    cout << "2. Swap arr[0] dengan arr[1]" << endl;
    cout << "   Hasil: [1, 5, 4, 2, 8]" << endl;
    
    cout << "\nPass 2 (i=1):" << endl;
    cout << "1. Cari min di [5, 4, 2, 8] -> min = 2 (index 3)" << endl;
    cout << "2. Swap arr[1] dengan arr[3]" << endl;
    cout << "   Hasil: [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nPass 3 (i=2):" << endl;
    cout << "1. Cari min di [4, 5, 8] -> min = 4 (index 2)" << endl;
    cout << "2. Swap arr[2] dengan arr[2] (tidak berubah)" << endl;
    cout << "   Hasil: [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nPass 4 (i=3):" << endl;
    cout << "1. Cari min di [5, 8] -> min = 5 (index 3)" << endl;
    cout << "2. Swap arr[3] dengan arr[3] (tidak berubah)" << endl;
    cout << "   Hasil: [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Setiap pass, elemen minimum dipilih dan dipindah ke kiri." << endl;
    cout << "- Bagian sorted bertambah satu elemen setiap iterasi." << endl;
}

// 4. Heap Sort
void visualisasiHeap() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    
    cout << "\nPhase 1 - Build Max Heap:" << endl;
    cout << "Tree Representation:" << endl;
    cout << "        5" << endl;
    cout << "       / \\" << endl;
    cout << "      1   4" << endl;
    cout << "     / \\" << endl;
    cout << "    2   8" << endl;
    
    cout << "\nAfter Heapify:" << endl;
    cout << "        8" << endl;
    cout << "       / \\" << endl;
    cout << "      5   4" << endl;
    cout << "     / \\" << endl;
    cout << "    2   1" << endl;
    cout << "Array: [8, 5, 4, 2, 1]" << endl;
    
    cout << "\nPhase 2 - Extract Max:" << endl;
    cout << "Pass 1: Swap 8<->1, Heapify -> [1, 5, 4, 2, 8]" << endl;
    cout << "Pass 2: Swap 5<->2, Heapify -> [2, 1, 4, 5, 8]" << endl;
    cout << "Pass 3: Swap 4<->1, Heapify -> [1, 2, 4, 5, 8]" << endl;
    cout << "Pass 4: Swap 2<->1, Heapify -> [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Max Heap: Parent selalu >= Children." << endl;
    cout << "- Root (index 0) selalu elemen terbesar." << endl;
    cout << "- Setiap extract, heap size berkurang 1." << endl;
}

// 5. Merge Sort
void visualisasiMerge() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Merge Sort" << endl;
}

// 6. Quick Sort
void visualisasiQuick() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Quick Sort" << endl;
}

// 7. Tree Sort
void visualisasiTree() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Tree Sort" << endl;
}

// 8. Exchange Sort
void visualisasiExchange() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Exchange Sort" << endl;
}

// 9. Radix Sort
void visualisasiRadix() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Radix Sort" << endl;
}
// 10. Shell Sort
void visualisasiShell() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Shell Sort" << endl;
}

// SEARCHING
// 1. Linear Search
void visualisasiLinear() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Linear Search" << endl;
}

// 2. Binary Search
void visualisasiBinary() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Binary Search" << endl;
}

// 3. Interpolation Search
void visualisasiInterpolation() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Interpolation Search" << endl;
}

// 4. Fibonacci Search
void visualisasiFibonacci() {
    cout << "\n[Visualisasi]" << endl;
    cout << "-> Visualisasi Fibonacci Search" << endl;
}