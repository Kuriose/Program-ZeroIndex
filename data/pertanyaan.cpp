#include "pertanyaan.h"

// Array
vector<Pertanyaan> getPertanyaanArray() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa Output dari:\nint arr[3] = {1, 2, 3};\ncout << arr[1];", 
        {"1", "2"}, 
        2, 
        "Index dimulai dari 0, jadi arr[1] = 2.", 
        "Ingat, index array dimulai dari angka berapa?"
    });

    daftarPertanyaan.push_back({
        "Berapa Dimensi Array yang dimiliki oleh Matriks?",
        {"Multi dimensi", "Dua Dimensi"},
        2, 
        "Matriks memiliki Baris dan Kolom, jadi Dimensi Dari Matriks adalah 2", 
        "Ingat, Matriks punya bagian apa saja?"
    });

    return daftarPertanyaan; 
}

// Pointer
vector<Pertanyaan> getPertanyaanPointer() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa output dari kode dibawah?\nint x = 5;\nint* p = &x;\ncout << *p;", 
        {"Error", "5"},
        2, 
        "*p berarti mengambil nilai dari alamat yang ditunjuk", 
        "Apa arti tanda * pada pointer?"
    });

    return daftarPertanyaan;
}

// Struct
vector<Pertanyaan> getPertanyaanStruct() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa fungsi utama dari Struct dalam C++?", 
        {   "Menggabungkan beberapa variabel dengan tipe data berbeda menjadi satu kesatuan.", 
            "Hanya untuk menyimpan kumpulan angka integer saja."},
        1, 
        "Struct dirancang khusus untuk mengelompokkan data heterogen (berbeda tipe) seperti String, Integer, dan Float dalam satu nama variabel", 
        "Ingat analogi 'Formulir' yang memiliki kolom nama (teks) dan umur (angka)."
    }); 

    // daftarPertanyaan.push_back({
    //     "Apa fungsi utama dari Struct dalam C++?", 
    //     {   "Menggabungkan beberapa variabel dengan tipe data berbeda menjadi satu kesatuan.", 
    //         "Hanya untuk menyimpan kumpulan angka integer saja."},
    //     1, 
    //     "Struct dirancang khusus untuk mengelompokkan data heterogen (berbeda tipe) seperti String, Integer, dan Float dalam satu nama variabel", 
    //     "Ingat analogi 'Formulir' yang memiliki kolom nama (teks) dan umur (angka)."
    // });

    return daftarPertanyaan;
}

// Sorting
vector<Pertanyaan> getPertanyaanBubbleSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Bagaimana Prinsip Kerja Bubble Sort?", 
        {"Menukar elemen jika tidak sesuai", "Menyisipkan elemen ke bagian depan"},
        1, 
        "Prinsip Kerja Bubble Sort dengan cara menukar elemen satu dengan yang lain", 
        "Perhatikan nama dari Bubble Sort"
    }); 

    return daftarPertanyaan;
}

vector<Pertanyaan> getPertanyaanInsertionSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Bagaimana Prinsip Kerja Dari Insertion Sort?", 
        {"Menukar elemen jika tidak sesuai", "Menyisipkan elemen ke bagian depan array"},
        2, 
        "Prinsip Kerja Insertion Sort dengan cara menyisipkan elemen yang benar ke bagian depan array", 
        "Insertion Sort cara kerjanya mirip dengan menggeser kartu"
    }); 

    return daftarPertanyaan;
}

vector<Pertanyaan> getPertanyaanSelectionSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Bagaimana cara kerja utama dari Selection Sort dalam menempatkan elemen?", 
        {   "Menukar elemen minimum yang ditemukan ke posisi awal bagian yang belum terurut", 
            "Menggabungkan dua array terpisah menjadi satu array baru"
        },
        1, 
        "Insertion Sort bekerja dengan berulang kali menemukan elemen minimum/maksimum dari bagian yang belum terurut dan memindahkannya ke posisi yang benar di awal array", 
        "Ingat kata 'Selection' (Pemilihan)."
    }); 

    return daftarPertanyaan;
}

vector<Pertanyaan> getPertanyaanHeapSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Struktur data apa yang menjadi dasar utama dari algoritma Heap Sort?", 
        {   "Binary Search Tree", 
            "Binary Heap"
        },
        2, 
        "Heap Sort menggunakan menggunakan Heap dari array, lalu berulang kali mengambil elemen terbesar dari akar heap dan menaruhnya di akhir array", 
        "Nama algoritmanya sudah memberikan petunjuk tentang struktur datanya."
    }); 

    return daftarPertanyaan;
}

vector<Pertanyaan> getPertanyaanMergeSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa strategi utama yang digunakan untuk Merge Sort?", 
        {   "Divide and Conquer", 
            "Greedy"
        },
        1, 
        "Merge Sort menggunakan pendekatan Divide and Conquer. Array dibagi menjadi dua bagian secara rekursif hingga tersisa satu elemen, lalu digabung kembali sambil diurutkan.", 
        "Kata 'Merge' berarti menggabungkan. Sebelum menggabungkan, apa yang harus dilakukan pada array?"
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanQuickSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Elemen kunci yang dipilih untuk membagi array pada Quick Sort disebut?", 
        {   "Pivot", 
            "Root"
        },
        1, 
        "Quick Sort memilih satu elemen sebagai pivot, lalu mempartisi array sehingga elemen yang lebih kecil dari pivot ada di kiri, dan yang lebih besar di kanan.", 
        "Elemen ini menjadi titik acuan perbandingan untuk memisahkan nilai kecil dan besar"
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanTreeSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Traversing (penelusuran) mana yang digunakan pada BST untuk mendapatkan hasil urut naik?", 
        {   "Pre-Order Traversal", 
            "In-Order Traversal"
        },
        2, 
        "Tree Sort membangun Binary Search Tree dari elemen-elemen array.\nSetelah semua elemen dimasukkan, dilakukan traversing In-Order untuk mendapatkan data yang terurut", 
        "Pada BST, traversing ini mengunjungi node Kiri, lalu Akar, lalu Kanan."
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanExchangeSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Pada Implementasi dasar Exchange Sort, elemen mana yang dibandingkan?", 
        {   "Elemen yang bersebelahan", 
            "Elemen acak di seluruh array"
        },
        1, 
        "Exchange Sort adalah kategori algoritma yang mengurutkan dengan cara menukar dua elemen jika posisinya salah.", 
        "Prinsip kerja Exchange Sort mirip sekali dengan Bubble Sort."
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanRadixSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apakah Radix Sort melakukan perbandingan langsung antar nilai elemen (seperti a > b)?", 
        {   "Tidak, ia mengurutkan berdasarkan digit/posisi", 
            "Ya, ia membandingkan nilai penuh setiap saat"
        },
        1, 
        "Radix Sort merupakan algoritma non-comparative.\nIa mengurutkan angka berdasarkan digitnya, dimulai dari digit paling signifikan atau paling tidak signifikan, tanpa membandingkan nilai keseluruhan angka secara langsung", 
        "Algoritma ini bekerja seperti mengurutkan kartu remi berdasarkan angka lalu berdasarkan jenis suit-nya."
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanShellSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Shell Sort merupakan variasi dan peningkatan dari algoritma sorting mana?", 
        {   "Selection Sort", 
            "Insertion Sort"
        },
        2, 
        "Shell Sort merupakan generalisasi dari Insertion Sort.\nIa memungkinkan pertukaran elemen yang letaknya jauh menggunakan urutan gap, sebelum akhirnya melakukan Insertion Sort dengan gap 1", 
        "Algoritma ini memungkinkan elemen berpindah jarak jauh untuk mengurangi jumlah pergeseran pada tahap akhir."
    }); 

    return daftarPertanyaan;    
}

// Searching
// 1. Linear Search
vector<Pertanyaan> getPertanyaanLinearSearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Ketika ingin melakukan Searching dengan menggunakan Linear Search, apakah datanya harus terurut terlebih dahulu?", 
        {   "Data harus sudah terurut terlebih dahulu", 
            "Data tidak harus terurut (boleh acak)"
        },
        2, 
        "Linear Search tidak memerlukan data yang terurut untuk melakukan proses Search.", 
        "Anda mengecek satu-satu tiap elemen dari array yang ada."
    }); 

    return daftarPertanyaan;    
}

// 2. Binary Search
vector<Pertanyaan> getPertanyaanBinarySearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa syarat mutlak agar Binary Search dapat berfungsi dengan benar?", 
        {   "Array harus memiliki jumlah elemen genap", 
            "Array harus dalam keadaan terurut (sorted)"
        },
        2, 
        "Syarat Wajib untuk Binary Search adalah data harus sudah terurut.", 
        "Mirip seperti mencari kata di kamus, kata-katanya sudah dikelompokkan berdasarkan hurufnya."
    }); 

    return daftarPertanyaan;    
}

// 3. Interpolation Search
vector<Pertanyaan> getPertanyaanInterpolationSearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Kapan Interpolation Search bekerja paling optimal dibandingkan Binary Search?", 
        {   "Ketika data terurut dan distribusinya merata (uniform)", 
            "Ketika data terurut tetapi distribusinya sangat acak/tidak merata"
        },
        1, 
        "Interpolation Search adalah variasi dari Binary Search yang bekerja lebih baik pada data yang terurut dan terdistribusi secara uniform (merata).", 
        "Algoritma ini 'menebak' posisi berdasarkan nilai, seperti mencari nama 'Budi' di buku telepon (dekat awal), bukan di tengah."
    }); 

    return daftarPertanyaan;    
}

// 4. Fibonacci Search
vector<Pertanyaan> getPertanyaanFibonacciSearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Deret bilangan apa yang digunakan untuk menentukan titik pembagian pada Fibonacci Search?", 
        {   "Deret Bilangan Prima", 
            "Deret Bilangan Fibonacci"
        },
        2, 
        "Fibonacci Search merupakan algoritma pencarian pada array terurut yang menggunakan Bilangan Fibonacci untuk membagi Array.", 
        "Nama algoritmanya sudah sangat jelas menyebutkan deret bilangan yang digunakan."
    }); 

    return daftarPertanyaan;    
}
