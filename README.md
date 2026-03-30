
# ZeroIndex

**ZeroIndex** adalah program pembelajaran bahasa pemrograman C++ berbasis Command Line Interface (CLI) yang dirancang untuk membantu pengguna memahami konsep dasar hingga algoritma secara interaktif.

Program ini menggabungkan penjelasan teori, contoh kode, visualisasi sederhana, dan quiz untuk membangun pemahaman yang lebih mendalam terhadap cara kerja program, bukan hanya sekadar menghafal sintaks.

---

## 🎯 Tujuan

* Membantu pemula memahami konsep dasar C++
* Mengajarkan cara berpikir seperti programmer
* Menyediakan pembelajaran interaktif langsung dari terminal

---

## 📚 Materi yang Tersedia

* Array
* Pointer
* Struct
* Sorting Algorithm (Bubble, Insertion, Selection)
* Searching Algorithm

---

## 🧩 Fitur Utama

* **Teori** → Penjelasan singkat dan padat
* **Contoh** → Implementasi kode langsung
* **Visualisasi** → Representasi konsep dalam bentuk CLI
* **Quiz** → Latihan interaktif dengan feedback

---

## ⚙️ Cara Menjalankan Program

### 1. Pastikan Compiler Terinstall

Gunakan compiler C++ seperti:

* g++
* clang++

---

### 2. Clone Repository

```bash
git clone <url-repository>
cd ZeroIndex
```

---

### 3. Compile Program
```bash
g++ pertanyaan.cpp fitur/quiz/quiz.cpp fitur/visualisasi/visualisasi.cpp inti/menu.cpp inti/sub_menu.cpp modul/array/modul_array.cpp modul/fungsi-prosedur/modul_fungsi_prosedur.cpp modul/pointer/modul_pointer.cpp modul/searching/binary_search.cpp modul/searching/fibonacci_search.cpp modul/searching/interpolation_search.cpp modul/searching/linear_search.cpp modul/searching/modul_searching.cpp modul/sorting/bubble_sort.cpp modul/sorting/exchange_sort.cpp modul/sorting/heap_sort.cpp modul/sorting/insertion_sort.cpp modul/sorting/merge_sort.cpp modul/sorting/modul_sorting.cpp modul/sorting/modul_sorting.cpp modul/sorting/quick_sort.cpp modul/sorting/radix_sort.cpp modul/sorting/selection_sort.cpp modul/sorting/shell_sort.cpp modul/sorting/tree_sort.cpp modul/struct/modul_struct.cpp main.cpp -o zeroindex.exe
```

Atau bisa menggunakan script `compile.sh` yang sudah disediakan. Berikut langkah langkahnya:  
#### I. Buka terminal _bash_   
#### II.  Pergi ke directory `ZeroIndex`
#### III. Beri permission terlebih dahulu dengan mengetikkan:
``` 
chmod +x compile.sh
```
#### IV. Jalankan script dengan mengetikkan:
```
./compile.sh
```

---

### 4. Jalankan Program

#### Linux / Mac / Termux:

```bash
./zeroindex
```

#### Windows:

```bash
zeroindex.exe
```

---

## 🗂️ Struktur Project

```bash
ZeroIndex
├── data/
├── fitur/
│   ├── quiz/ 
│   └── visualisasi/ 
├── inti/
├── materi/
├── modul/
│   ├── array/
│   ├── fungsi-prosedur/
│   ├── pointer/
│   ├── searching/
│   ├── sorting/ 
│   └── struct/
├── compile.sh
├── main.cpp
└── zeroindex.exe 
```

--- 
