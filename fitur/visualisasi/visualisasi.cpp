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
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    
    cout << "\nPhase 1 - Divide (Pembagian):" << endl;
    
    cout << "\n        [5, 1, 4, 2, 8]" << endl;
    cout << "           /     \\" << endl;
    cout << "      [5, 1]     [4, 2, 8]" << endl;
    cout << "       / \\         /   \\" << endl;
    cout << "     [5] [1]    [4]   [2, 8]" << endl;
    cout << "                    /   \\" << endl;
    cout << "                  [2]   [8]" << endl;
    
    cout << "\nPhase 2 - Merge (Penggabungan):" << endl;
    
    cout << "\n     [5] [1]  -> Merge -> [1, 5]" << endl;
    cout << "     [2] [8]  -> Merge -> [2, 8]" << endl;
    cout << "     [4] [2,8]-> Merge -> [2, 4, 8]" << endl;
    cout << "     [1,5] [2,4,8] -> Merge -> [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nDetail Merge [1,5] + [2,4,8]:" << endl;
    cout << "1. Compare 1 vs 2 -> Ambil 1 -> [1]" << endl;
    cout << "2. Compare 5 vs 2 -> Ambil 2 -> [1, 2]" << endl;
    cout << "3. Compare 5 vs 4 -> Ambil 4 -> [1, 2, 4]" << endl;
    cout << "4. Compare 5 vs 8 -> Ambil 5 -> [1, 2, 4, 5]" << endl;
    cout << "5. Sisa 8 -> Ambil 8 -> [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Divide: Array dibagi hingga 1 elemen (sudah sorted)." << endl;
    cout << "- Merge: Gabungkan dua sorted array dengan compare elemen." << endl;
    cout << "- Tree height: log n levels, setiap level O(n) work." << endl;
}

// 6. Quick Sort
void visualisasiQuick() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    
    cout << "\nCall 1 - QuickSort([5,1,4,2,8], low=0, high=4):" << endl;
    cout << "Pivot = 8 (elemen terakhir)" << endl;
    cout << "Partition:" << endl;
    cout << "  [5, 1, 4, 2] <= 8 | 8" << endl;
    cout << "  Semua elemen < 8, jadi 8 tetap di akhir" << endl;
    cout << "  Hasil: [5, 1, 4, 2, 8]" << endl;
    cout << "  Pivot Index = 4" << endl;
    
    cout << "\nCall 2 - QuickSort([5,1,4,2], low=0, high=3):" << endl;
    cout << "Pivot = 2 (elemen terakhir)" << endl;
    cout << "Partition:" << endl;
    cout << "  [1] <= 2 | 2 | [5, 4] > 2" << endl;
    cout << "  Hasil: [1, 2, 4, 5, 8]" << endl;
    cout << "  Pivot Index = 1" << endl;
    
    cout << "\nCall 3 - QuickSort([1], low=0, high=0):" << endl;
    cout << "  Base case (1 elemen) - return" << endl;
    
    cout << "\nCall 4 - QuickSort([4,5], low=2, high=3):" << endl;
    cout << "Pivot = 5" << endl;
    cout << "Partition:" << endl;
    cout << "  [4] <= 5 | 5" << endl;
    cout << "  Hasil: [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nTree Rekursif:" << endl;
    cout << "              [5,1,4,2,8] pivot=8" << endl;
    cout << "                   |" << endl;
    cout << "         +---------+---------+" << endl;
    cout << "         |                   |" << endl;
    cout << "    [5,1,4,2]              [8]" << endl;
    cout << "      pivot=2               V" << endl;
    cout << "         |" << endl;
    cout << "    +----+----+" << endl;
    cout << "    |         |" << endl;
    cout << "   [1]      [4,5]" << endl;
    cout << "    V       pivot=5" << endl;
    cout << "              |" << endl;
    cout << "           +--+--+" << endl;
    cout << "           |     |" << endl;
    cout << "          [4]   [5]" << endl;
    cout << "           V     V" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Setiap partisi, pivot berada di posisi finalnya." << endl;
    cout << "- Rekursif berlanjut hingga sub-array = 1 elemen." << endl;
    cout << "- Pivot choice mempengaruhi performa (worst case O(n²))." << endl;
}

// 7. Tree Sort
void visualisasiTree() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    
    cout << "\nPhase 1 - Build BST (Insertion):" << endl;
    
    cout << "\nInsert 5 (Root):" << endl;
    cout << "        5" << endl;
    
    cout << "\nInsert 1 (1 < 5, ke kiri):" << endl;
    cout << "        5" << endl;
    cout << "       /" << endl;
    cout << "      1" << endl;
    
    cout << "\nInsert 4 (4 < 5 ke kiri, 4 > 1 ke kanan):" << endl;
    cout << "        5" << endl;
    cout << "       /" << endl;
    cout << "      1" << endl;
    cout << "       \\" << endl;
    cout << "        4" << endl;
    
    cout << "\nInsert 2 (2 < 5, 2 > 1, 2 < 4):" << endl;
    cout << "        5" << endl;
    cout << "       /" << endl;
    cout << "      1" << endl;
    cout << "       \\" << endl;
    cout << "        4" << endl;
    cout << "       /" << endl;
    cout << "      2" << endl;
    
    cout << "\nInsert 8 (8 > 5, ke kanan):" << endl;
    cout << "        5" << endl;
    cout << "       / \\" << endl;
    cout << "      1   8" << endl;
    cout << "       \\" << endl;
    cout << "        4" << endl;
    cout << "       /" << endl;
    cout << "      2" << endl;
    
    cout << "\nPhase 2 - Inorder Traversal (Left-Root-Right):" << endl;
    
    cout << "\n1. Traverse kiri dari 5 -> node 1" << endl;
    cout << "2. Traverse kiri dari 1 -> null (kembali)" << endl;
    cout << "3. Visit 1 -> Output: [1]" << endl;
    cout << "4. Traverse kanan dari 1 -> node 4" << endl;
    cout << "5. Traverse kiri dari 4 -> node 2" << endl;
    cout << "6. Visit 2 -> Output: [1, 2]" << endl;
    cout << "7. Visit 4 -> Output: [1, 2, 4]" << endl;
    cout << "8. Traverse kanan dari 4 -> null" << endl;
    cout << "9. Visit 5 -> Output: [1, 2, 4, 5]" << endl;
    cout << "10. Traverse kanan dari 5 -> node 8" << endl;
    cout << "11. Visit 8 -> Output: [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- BST Property: Left < Root < Right" << endl;
    cout << "- Inorder Traversal BST selalu menghasilkan sorted order" << endl;
    cout << "- Tree height mempengaruhi kompleksitas (balanced = log n)" << endl;
}

// 8. Exchange Sort
void visualisasiExchange() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    
    cout << "\nPass 1 (i=0, arr[i]=5):" << endl;
    cout << "1. Compare 5 vs 1 -> 5>1 -> Swap -> [1, 5, 4, 2, 8]" << endl;
    cout << "2. Compare 1 vs 4 -> 1<4 -> No swap -> [1, 5, 4, 2, 8]" << endl;
    cout << "3. Compare 1 vs 2 -> 1<2 -> No swap -> [1, 5, 4, 2, 8]" << endl;
    cout << "4. Compare 1 vs 8 -> 1<8 -> No swap -> [1, 5, 4, 2, 8]" << endl;
    cout << "   (1 sekarang di posisi benar)" << endl;
    
    cout << "\nPass 2 (i=1, arr[i]=5):" << endl;
    cout << "1. Compare 5 vs 4 -> 5>4 -> Swap -> [1, 4, 5, 2, 8]" << endl;
    cout << "2. Compare 4 vs 2 -> 4>2 -> Swap -> [1, 2, 5, 4, 8]" << endl;
    cout << "3. Compare 2 vs 8 -> 2<8 -> No swap -> [1, 2, 5, 4, 8]" << endl;
    cout << "   (2 sekarang di posisi benar)" << endl;
    
    cout << "\nPass 3 (i=2, arr[i]=5):" << endl;
    cout << "1. Compare 5 vs 4 -> 5>4 -> Swap -> [1, 2, 4, 5, 8]" << endl;
    cout << "2. Compare 4 vs 8 -> 4<8 -> No swap -> [1, 2, 4, 5, 8]" << endl;
    cout << "   (4 sekarang di posisi benar)" << endl;
    
    cout << "\nPass 4 (i=3, arr[i]=5):" << endl;
    cout << "1. Compare 5 vs 8 -> 5<8 -> No swap -> [1, 2, 4, 5, 8]" << endl;
    cout << "   (5 dan 8 sudah di posisi benar)" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Setiap pass, elemen terkecil dari sisa array pindah ke posisi i." << endl;
    cout << "- Tidak ada adjacent restriction, bisa swap langsung." << endl;
    cout << "- Setelah pass i, elemen 0 sampai i sudah sorted." << endl;
}

// 9. Radix Sort
void visualisasiRadix() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [170, 45, 75, 90, 802, 24, 2, 66]" << endl;
    
    cout << "\nPass 1 - Sort by Units Digit (exp=1):" << endl;
    cout << "Digit: [0, 5, 5, 0, 2, 4, 2, 6]" << endl;
    cout << "After: [170, 90, 802, 2, 24, 45, 75, 66]" << endl;
    cout << "       (Urut berdasarkan digit satuan, stable)" << endl;
    
    cout << "\nPass 2 - Sort by Tens Digit (exp=10):" << endl;
    cout << "Digit: [7, 9, 0, 0, 2, 4, 7, 6]" << endl;
    cout << "After: [802, 2, 24, 45, 66, 170, 75, 90]" << endl;
    cout << "       (Urut berdasarkan digit puluhan, stable)" << endl;
    
    cout << "\nPass 3 - Sort by Hundreds Digit (exp=100):" << endl;
    cout << "Digit: [8, 0, 0, 0, 0, 1, 0, 0]" << endl;
    cout << "After: [2, 24, 45, 66, 75, 90, 170, 802]" << endl;
    cout << "       (Urut berdasarkan digit ratusan, stable)" << endl;
    
    cout << "\nDetail Pass 1 (Units Digit):" << endl;
    cout << "+-------+--------+---------+" << endl;
    cout << "| Nilai | Digit  | Bucket  |" << endl;
    cout << "+-------+--------+---------+" << endl;
    cout << "| 170   | 0      | [0]     |" << endl;
    cout << "| 45    | 5      | [5]     |" << endl;
    cout << "| 75    | 5      | [5]     |" << endl;
    cout << "| 90    | 0      | [0]     |" << endl;
    cout << "| 802   | 2      | [2]     |" << endl;
    cout << "| 24    | 4      | [4]     |" << endl;
    cout << "| 2     | 2      | [2]     |" << endl;
    cout << "| 66    | 6      | [6]     |" << endl;
    cout << "+-------+--------+---------+" << endl;
    
    cout << "\nBucket Collection (Stable Order):" << endl;
    cout << "Bucket 0: 170, 90" << endl;
    cout << "Bucket 2: 802, 2" << endl;
    cout << "Bucket 4: 24" << endl;
    cout << "Bucket 5: 45, 75" << endl;
    cout << "Bucket 6: 66" << endl;
    cout << "Result: [170, 90, 802, 2, 24, 45, 75, 66]" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
    cout << "|  2  | 24  | 45  | 66  | 75  | 90  | 170 | 802 |" << endl;
    cout << "+-----+-----+-----+-----+-----+-----+-----+-----+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- LSD Radix Sort: Mulai dari digit paling kanan (satuan)." << endl;
    cout << "- Stable Sort penting: Urutan relatif dijaga setiap pass." << endl;
    cout << "- Jumlah pass = jumlah digit dari nilai maksimum." << endl;
}

// 10. Shell Sort
void visualisasiShell() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data Awal: [5, 1, 4, 2, 8]" << endl;
    cout << "n = 5, Gap Sequence: 2 -> 1" << endl;
    
    cout << "\nPass 1 - Gap = 2:" << endl;
    cout << "Sub-array 0: [5, 4, 8] (index 0, 2, 4)" << endl;
    cout << "Sub-array 1: [1, 2]   (index 1, 3)" << endl;
    
    cout << "\nSort Sub-array 0 [5, 4, 8]:" << endl;
    cout << "  Compare 5 vs 4 -> Swap -> [4, 1, 5, 2, 8]" << endl;
    cout << "  Compare 5 vs 8 -> No swap -> [4, 1, 5, 2, 8]" << endl;
    
    cout << "\nSort Sub-array 1 [1, 2]:" << endl;
    cout << "  Compare 1 vs 2 -> No swap -> [4, 1, 5, 2, 8]" << endl;
    cout << "  Hasil setelah Gap 2: [4, 1, 5, 2, 8]" << endl;
    
    cout << "\nPass 2 - Gap = 1:" << endl;
    cout << "  (Ini menjadi Insertion Sort biasa)" << endl;
    cout << "  Compare 4 vs 1 -> Swap -> [1, 4, 5, 2, 8]" << endl;
    cout << "  Compare 4 vs 5 -> No swap -> [1, 4, 5, 2, 8]" << endl;
    cout << "  Compare 5 vs 2 -> Swap -> [1, 4, 2, 5, 8]" << endl;
    cout << "  Compare 4 vs 2 -> Swap -> [1, 2, 4, 5, 8]" << endl;
    cout << "  Compare 5 vs 8 -> No swap -> [1, 2, 4, 5, 8]" << endl;
    
    cout << "\nVisual Gap Comparison:" << endl;
    cout << "Gap 2:" << endl;
    cout << "  [5]   [4]   [8]     <- Index 0, 2, 4" << endl;
    cout << "    [1]   [2]         <- Index 1, 3" << endl;
    
    cout << "\nGap 1:" << endl;
    cout << "  [5] [1] [4] [2] [8] <- Semua elemen dibandingkan" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Gap besar: Elemen berpindah jarak jauh lebih cepat." << endl;
    cout << "- Gap mengecil: Array semakin mendekati sorted." << endl;
    cout << "- Gap 1: Final pass dengan Insertion Sort." << endl;
}

// SEARCHING
// 1. Linear Search
void visualisasiLinear() {
    cout << "Data: [5, 1, 4, 2, 8]" << endl;
    cout << "Target: 2" << endl;
    
    cout << "\nStep-by-Step Search:" << endl;
    
    cout << "\nStep 1: Check index 0" << endl;
    cout << "  arr[0] = 5" << endl;
    cout << "  5 == 2? NO -> Continue" << endl;
    cout << "  [5] [1] [4] [2] [8]" << endl;
    cout << "   ^" << endl;
    cout << "   Current" << endl;
    
    cout << "\nStep 2: Check index 1" << endl;
    cout << "  arr[1] = 1" << endl;
    cout << "  1 == 2? NO -> Continue" << endl;
    cout << "  [5] [1] [4] [2] [8]" << endl;
    cout << "       ^" << endl;
    cout << "       Current" << endl;
    
    cout << "\nStep 3: Check index 2" << endl;
    cout << "  arr[2] = 4" << endl;
    cout << "  4 == 2? NO -> Continue" << endl;
    cout << "  [5] [1] [4] [2] [8]" << endl;
    cout << "           ^" << endl;
    cout << "           Current" << endl;
    
    cout << "\nStep 4: Check index 3" << endl;
    cout << "  arr[3] = 2" << endl;
    cout << "  2 == 2? YES -> Found!" << endl;
    cout << "  [5] [1] [4] [2] [8]" << endl;
    cout << "               ^" << endl;
    cout << "               FOUND!" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 5 | 1 | 4 | 2 | 8 |" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "                ^^^" << endl;
    cout << "           Index 3" << endl;
    
    cout << "\nSkenario Lainnya:" << endl;
    cout << "- Target = 5: Found at index 0 (Best Case - 1 comparison)" << endl;
    cout << "- Target = 8: Found at index 4 (Worst Case - 5 comparisons)" << endl;
    cout << "- Target = 9: Not found (Worst Case - 5 comparisons)" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Linear Search memeriksa elemen secara berurutan." << endl;
    cout << "- Early exit: Berhenti segera setelah elemen ditemukan." << endl;
    cout << "- Tidak perlu array sorted untuk menggunakan Linear Search." << endl;
}

// 2. Binary Search
void visualisasiBinary() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data: [1, 2, 4, 5, 8] (Sorted!)" << endl;
    cout << "Target: 5" << endl;
    cout << "n = 5" << endl;
    
    cout << "\nIteration 1:" << endl;
    cout << "  left = 0, right = 4" << endl;
    cout << "  mid = 0 + (4-0)/2 = 2" << endl;
    cout << "  arr[mid] = arr[2] = 4" << endl;
    cout << "  4 < 5? YES -> Target di kanan" << endl;
    cout << "  left = mid + 1 = 3" << endl;
    cout << "  [1] [2] [4] [5] [8]" << endl;
    cout << "           ^" << endl;
    cout << "         mid=2" << endl;
    cout << "               ^^^" << endl;
    cout << "           New search space" << endl;
    
    cout << "\nIteration 2:" << endl;
    cout << "  left = 3, right = 4" << endl;
    cout << "  mid = 3 + (4-3)/2 = 3" << endl;
    cout << "  arr[mid] = arr[3] = 5" << endl;
    cout << "  5 == 5? YES -> Found!" << endl;
    cout << "  Return index: 3" << endl;
    cout << "  [1] [2] [4] [5] [8]" << endl;
    cout << "               ^" << endl;
    cout << "             mid=3" << endl;
    cout << "               ^^^" << endl;
    cout << "             FOUND!" << endl;
    
    cout << "\nVisual Search Space Reduction:" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "| 1 | 2 | 4 | 5 | 8 |  <- Iteration 1 (5 elements)" << endl;
    cout << "+---+---+---+---+---+" << endl;
    cout << "            +---+---+" << endl;
    cout << "            | 5 | 8 |  <- Iteration 2 (2 elements)" << endl;
    cout << "            +---+---+" << endl;
    cout << "                +---+" << endl;
    cout << "                | 5 |  <- Found! (1 element)" << endl;
    cout << "                +---+" << endl;
    
    cout << "\nPerbandingan dengan Linear Search:" << endl;
    cout << "- Linear Search: Max 5 comparisons untuk array ini" << endl;
    cout << "- Binary Search: Max 3 comparisons (log2(5) ≈ 2.3)" << endl;
    
    cout << "\nSkenario Lainnya:" << endl;
    cout << "- Target = 1: Found in 2 comparisons (mid=2, then mid=0)" << endl;
    cout << "- Target = 8: Found in 2 comparisons (mid=2, then mid=3)" << endl;
    cout << "- Target = 3: Not found in 3 comparisons" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Setiap iterasi, search space berkurang setengah." << endl;
    cout << "- Array HARUS sorted sebelum Binary Search." << endl;
    cout << "- log2(n) = jumlah maksimal iterasi untuk n elemen." << endl;
}

// 3. Interpolation Search
void visualisasiInterpolation() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data: [10, 20, 30, 40, 50] (Sorted & Uniform!)" << endl;
    cout << "Target: 40" << endl;
    cout << "n = 5" << endl;
    
    cout << "\nInterpolation Formula:" << endl;
    cout << "pos = left + ((target - arr[left]) * (right - left)) / (arr[right] - arr[left])" << endl;
    
    cout << "\nIteration 1:" << endl;
    cout << "  left = 0, right = 4" << endl;
    cout << "  arr[left] = 10, arr[right] = 50" << endl;
    cout << "  pos = 0 + ((40 - 10) * (4 - 0)) / (50 - 10)" << endl;
    cout << "  pos = 0 + (30 * 4) / 40" << endl;
    cout << "  pos = 0 + 120 / 40 = 3" << endl;
    cout << "  arr[pos] = arr[3] = 40" << endl;
    cout << "  40 == 40? YES -> Found!" << endl;
    cout << "  Return index: 3" << endl;
    
    cout << "\n  [10] [20] [30] [40] [50]" << endl;
    cout << "                    ^" << endl;
    cout << "                  pos=3" << endl;
    cout << "                    ^^^" << endl;
    cout << "                  FOUND!" << endl;
    
    cout << "\nVisual Comparison dengan Binary Search:" << endl;
    cout << "+-------+---------------+-------------------+" << endl;
    cout << "| Algo  | Iteration 1   | Result            |" << endl;
    cout << "+-------+---------------+-------------------+" << endl;
    cout << "| Binary| mid = 2 (30)  | Target > 30 -> right|" << endl;
    cout << "| Interp| pos = 3 (40)  | Found directly!   |" << endl;
    cout << "+-------+---------------+-------------------+" << endl;
    
    cout << "\nContoh Lain - Target = 25 (Tidak Ada):" << endl;
    cout << "Iteration 1: pos = 0 + ((25-10)*4)/(50-10) = 1.5 ≈ 1" << endl;
    cout << "  arr[1] = 20, 25 > 20 -> left = 2" << endl;
    cout << "Iteration 2: pos = 2 + ((25-30)*2)/(50-30) = 1.5 ≈ 1 (invalid)" << endl;
    cout << "  Target < arr[left] -> Exit loop" << endl;
    cout << "  Return: -1 (Not found)" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "| 10 | 20 | 30 | 40 | 50 |" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "                    ^^^^" << endl;
    cout << "                   Index 3" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Interpolation Search 'menebak' posisi berdasarkan nilai." << endl;
    cout << "- Semakin uniform distribusi, semakin akurat tebakan." << endl;
    cout << "- Binary Search selalu di tengah, Interpolation di estimate." << endl;
}

// 4. Fibonacci Search
void visualisasiFibonacci() {
    cout << "\n[Visualisasi]" << endl;
    cout << "Data: [10, 20, 30, 40, 50] (Sorted!)" << endl;
    cout << "Target: 40" << endl;
    cout << "n = 5" << endl;
    
    cout << "\nFibonacci Sequence: 1, 1, 2, 3, 5, 8, 13..." << endl;
    cout << "Find smallest fib >= n: fib = 5 (fib1=3, fib2=2)" << endl;
    
    cout << "\nIteration 1:" << endl;
    cout << "  fib = 5, fib1 = 3, fib2 = 2" << endl;
    cout << "  offset = -1" << endl;
    cout << "  i = min(offset + fib2, n-1) = min(-1+2, 4) = 1" << endl;
    cout << "  arr[i] = arr[1] = 20" << endl;
    cout << "  20 < 40? YES -> Target di kanan" << endl;
    cout << "  Update: fib=3, fib1=2, fib2=1, offset=1" << endl;
    cout << "  [10] [20] [30] [40] [50]" << endl;
    cout << "            ^" << endl;
    cout << "          i=1 (20)" << endl;
    cout << "                ^^^^" << endl;
    cout << "            New search space" << endl;
    
    cout << "\nIteration 2:" << endl;
    cout << "  fib = 3, fib1 = 2, fib2 = 1" << endl;
    cout << "  offset = 1" << endl;
    cout << "  i = min(1 + 1, 4) = 2" << endl;
    cout << "  arr[i] = arr[2] = 30" << endl;
    cout << "  30 < 40? YES -> Target di kanan" << endl;
    cout << "  Update: fib=2, fib1=1, fib2=1, offset=2" << endl;
    cout << "  [10] [20] [30] [40] [50]" << endl;
    cout << "                  ^" << endl;
    cout << "                i=2 (30)" << endl;
    cout << "                    ^^^^" << endl;
    cout << "                New search space" << endl;
    
    cout << "\nIteration 3:" << endl;
    cout << "  fib = 2, fib1 = 1, fib2 = 1" << endl;
    cout << "  offset = 2" << endl;
    cout << "  i = min(2 + 1, 4) = 3" << endl;
    cout << "  arr[i] = arr[3] = 40" << endl;
    cout << "  40 == 40? YES -> Found!" << endl;
    cout << "  Return index: 3" << endl;
    cout << "  [10] [20] [30] [40] [50]" << endl;
    cout << "                        ^" << endl;
    cout << "                      i=3 (40)" << endl;
    cout << "                        ^^^" << endl;
    cout << "                      FOUND!" << endl;
    
    cout << "\nVisual Fibonacci Division:" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "| 10 | 20 | 30 | 40 | 50 |  <- Full array (n=5)" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "           ^" << endl;
    cout << "         fib2=2 (i=1)" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "| 10 | 20 | 30 | 40 | 50 |  <- After eliminasi kiri" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "                ^" << endl;
    cout << "              fib2=1 (i=2)" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "| 10 | 20 | 30 | 40 | 50 |  <- After eliminasi kiri" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "                    ^" << endl;
    cout << "                  fib2=1 (i=3) FOUND!" << endl;
    
    cout << "\nPerbandingan dengan Binary Search:" << endl;
    cout << "+-------+---------------+-------------------+" << endl;
    cout << "| Algo  | Division Used | Probe Position    |" << endl;
    cout << "+-------+---------------+-------------------+" << endl;
    cout << "| Binary| Yes (/ 2)     | Always middle     |" << endl;
    cout << "| Fib   | No (+, - only)| Fibonacci ratio   |" << endl;
    cout << "+-------+---------------+-------------------+" << endl;
    
    cout << "\nHasil Akhir:" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "| 10 | 20 | 30 | 40 | 50 |" << endl;
    cout << "+----+----+----+----+----+" << endl;
    cout << "                    ^^^^" << endl;
    cout << "                   Index 3" << endl;
    
    cout << "\nCatatan Visual:" << endl;
    cout << "- Fibonacci Search membagi array berdasarkan rasio emas (~0.618)." << endl;
    cout << "- Tidak menggunakan operasi division, hanya + dan -." << endl;
    cout << "- Berguna untuk hardware yang mahal untuk operasi division." << endl;
}