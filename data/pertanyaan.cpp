#include "pertanyaan.h"

// Array
vector<Pertanyaan> getPertanyaanArray() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Jika kamu mendeklarasikan int data[5], indeks berapa yang digunakan untuk mengakses elemen pertama?",
        {"data[0]", "data[1]"},
        1, 
        "Dalam C++, indeks array selalu dimulai dari 0. Jadi elemen pertama adalah indeks 0, bukan 1.", 
        "Ingatlah bahwa penghitungan indeks dalam C++ tidak dimulai dari 1."
    });

    daftarPertanyaan.push_back({
        "Apakah sebuah array standar di C++ dapat menyimpan tipe data int dan string secara bersamaan dalam satu deklarasi?",
        {"Ya, bisa dicampur", "Tidak, harus sama"},
        2, 
        "Array bersifat homoge, artinya semua elemen harus memiliki tipe data yang sama agar ukuran memori per elemen konsisten.", 
        "Pertimbangkan bagaimana komputer mengalokasikan ukuran memori untuk setiap kotak dalam array."
    });

    daftarPertanyaan.push_back({
        "Apa yang terjadi jika kamu mengakses data[5] pada array yang hanya memiliki ukuran 5 elemen (indeks 0-4)?",
        {"Aman, akan mengembalikan nilai 0", "Bahaya, terjadi Out of Bounds"},
        2, 
        "Ukuran 5 berarti indeks valid hanya 0 sampai 4. Mengakses indeks 5 berarti mengakses memori di luar alokasi array yang dapat menyebabkan erro.", 
        "Hitunglah jumlah indeks yang valid berdasarkan ukuran array."
    });

    return daftarPertanyaan; 
}

// Pointer
vector<Pertanyaan> getPertanyaanPointer() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Operator mana yang digunakan untuk mendapatkan alamat memori dari sebuah variabel?", 
        {"Operator * (Bintang)", "Operator & (Ampersand)"},
        2, 
        "Operator & digunakan untuk mengambil alamat memori (address-of), sedangkan * digunakan untuk mengakses nilai di alamat tersebut", 
        "Ingatlah singkatan 'Address-of'"
    });

    daftarPertanyaan.push_back({
        "Bagaimana cara mendeklarasikan variabel pointer yang menunjuk ke tipe data int?", 
        {"int p;", "int *p;"},
        2, 
        "Simbol * saat deklarasi menandakan bahwa variabel p adalah pointer, bukan variabel integer biasa.", 
        "Perhatikan simbol yang menandakan bahwa variabel tersebut adalah penunjuk."
    });

    daftarPertanyaan.push_back({
        "Jika int x = 5; dan int *p = &x;, apa nilai yang dihasilkan jika kamu mencetak *p?", 
        {"Nilai 5", "Alamat memori dari x"},
        1, 
        "*p melakukan derefrence, yang artinya mengambil nilai yang disimpan di alamat yang ditunjuk oleh p. Karena p menunjuk ke x, maka nilainya adalah 5", 
        "Dereference berarti 'membuka' alamat untuk mengambil isinya."
    });

    return daftarPertanyaan;
}

// Struct
vector<Pertanyaan> getPertanyaanStruct() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa fungsi utama dari Struct dalam C++?", 
        {   
            "Menggabungkan beberapa variabel dengan tipe data berbeda menjadi satu kesatuan.", 
            "Hanya untuk menyimpan kumpulan angka integer saja."
        }, 
        1, // Kunci Jawaban: A
        "Struct dirancang khusus untuk mengelompokkan data heterogen (berbeda tipe) seperti String, Integer, dan Float dalam satu nama variabel.", 
        "Ingat analogi 'Formulir' yang memiliki kolom nama (teks) dan umur (angka)." 
    });

    daftarPertanyaan.push_back({
        "Operator apa yang digunakan untuk mengakses member variabel di dalam struct?", 
        {   
            "Operator Panah (->)", 
            "Operator Titik (.)"
        }, 
        2, // Kunci Jawaban: B
        "Untuk objek struct biasa (bukan pointer), kita menggunakan Operator Titik (.) untuk mengakses anggotanya. Operator panah (->) khusus untuk pointer struct.", 
        "Contoh penulisan: namaObjek.namaMember." 
    });

    daftarPertanyaan.push_back({
        "Apa yang sering terlupakan programmer saat mengakhiri definisi struct?", 
        {   
            "Titik koma (;) setelah kurung kurawal penutup", 
            "Keyword 'return' di dalam struct"
        }, 
        1, 
        "Sintaks struct wajib diakhiri dengan tanda titik koma (;) setelah kurung kurawal penutup '}'. Jika lupa, kompiler akan memberikan error.", 
        "Contoh: struct Data { int x; }; <--- Perhatikan tanda ; di akhir." 
    });

    return daftarPertanyaan;
}

// Fungsi & Prosedur
vector<Pertanyaan> getPertanyaanFP() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa perbedaan utama antara Fungsi dan Prosedur (void) dalam C++?", 
        {   
            "Fungsi mengembalikan nilai dengan return, Prosedur (void) tidak.", 
            "Prosedur wajib memiliki parameter, Fungsi tidak boleh memiliki parameter."
        }, 
        1, // Kunci Jawaban: A
        "Fungsi memiliki return type selain void (seperti int, string) dan menggunakan keyword 'return'. Prosedur menggunakan 'void' dan tidak mengembalikan nilai.", 
        "Perhatikan tipe data sebelum nama fungsi: 'int hitung()' vs 'void tampil()'." 
    });

    daftarPertanyaan.push_back({
        "Jika parameter fungsi dilewatkan secara by value (misal: void ubah(int x)), apa yang terjadi pada variabel asli?", 
        {   
            "Variabel asli ikut berubah karena alamat memori yang sama digunakan.", 
            "Variabel asli TIDAK berubah karena fungsi hanya menerima salinan nilai."
        }, 
        2, // Kunci Jawaban: B
        "Parameter by value menerima copy/salinan dari variabel. Perubahan di dalam fungsi hanya berlaku lokal dan tidak mempengaruhi variabel asli di pemanggil.", 
        "Analogi: Memberikan fotokopi dokumen. Coretan di fotokopi tidak merusak dokumen asli." 
    });

    daftarPertanyaan.push_back({
        "Mengapa kita perlu menuliskan function prototype (deklarasi fungsi) sebelum main()?", 
        {   
            "Agar kompiler mengenali fungsi tersebut saat dipanggil di main(), meskipun definisinya ada di bawah.", 
            "Agar fungsi dapat berjalan lebih cepat karena sudah dideklarasikan sebelumnya."
        }, 
        1, 
        "C++ membaca kode dari atas ke bawah. Prototype memberi tahu kompiler tentang signature fungsi (nama, parameter, return type) sebelum fungsi tersebut benar-benar dipanggil.", 
        "Tanpa prototype, pemanggilan fungsi yang didefinisikan setelah main() akan menyebabkan error 'function was not declared in this scope'." 
    });

    return daftarPertanyaan;
}

// Sorting
vector<Pertanyaan> getPertanyaanBubbleSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Bagaimana cara kerja utama dari algoritma Bubble Sort?", 
        {   
            "Membandingkan dan menukar elemen bersebelahan jika urutannya salah.", 
            "Membagi array menjadi dua bagian lalu mengurutkan masing-masing bagian."
        }, 
        1, 
        "Bubble Sort bekerja dengan iterasi berulang, membandingkan elemen adjacent (bersebelahan), dan melakukan swap jika posisi mereka salah.", 
        "Ingat analogi gelembung udara yang naik ke permukaan, elemen terbesar 'menggelembung' ke akhir array." 
    });

    daftarPertanyaan.push_back({
        "Apa kompleksitas waktu (Time Complexity) dari Bubble Sort pada kasus terburuk?", 
        {   
            "O(n) - Linear", 
            "O(n^2) - Quadratic"
        }, 
        2, 
        "Bubble Sort menggunakan nested loop (loop bersarang). Loop luar berjalan n kali, loop dalam juga hingga n kali, sehingga totalnya n x n = n^2.", 
        "Ini membuat Bubble Sort tidak efisien untuk data dalam jumlah besar." 
    });

    daftarPertanyaan.push_back({
        "Dalam kode Bubble Sort untuk ascending (menaik), kapan kita melakukan swap antara arr[j] dan arr[j+1]?", 
        {   
            "Ketika arr[j] < arr[j+1]", 
            "Ketika arr[j] > arr[j+1]"
        }, 
        2, 
        "Untuk urutan menaik (ascending), elemen kiri harus lebih kecil dari kanan. Jika arr[j] > arr[j+1], berarti posisi salah dan perlu ditukar.", 
        "Bayangkan ingin urut kecil ke besar: jika yang kiri lebih besar, itu salah posisi." 
    });

    return daftarPertanyaan;
}

vector<Pertanyaan> getPertanyaanInsertionSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Bagaimana cara kerja utama dari algoritma Insertion Sort?", 
        {   
            "Membandingkan elemen bersebelahan lalu menukarnya jika salah posisi.", 
            "Mengambil elemen dan menyisipkannya ke posisi yang tepat di bagian yang sudah terurut."
        }, 
        2, 
        "Insertion Sort bekerja dengan membagi array menjadi bagian sorted dan unsorted, lalu menyisipkan elemen dari unsorted ke posisi yang benar di sorted.", 
        "Ingat analogi mengurutkan kartu di tangan: Anda mengambil kartu baru dan menyelipkannya ke posisi yang tepat." 
    });

    daftarPertanyaan.push_back({
        "Kapan Insertion Sort memiliki performa terbaik (Best Case)?", 
        {   
            "Ketika data sudah terurut sebelumnya.", 
            "Ketika data sepenuhnya acak."
        }, 
        1, 
        "Jika data sudah terurut, kondisi loop while (arr[j] > key) tidak pernah terpenuhi, sehingga tidak ada geseran. Kompleksitasnya menjadi O(n).", 
        "Cek kondisi pada loop while. Jika tidak pernah true, tidak ada geser yang terjadi." 
    });


    daftarPertanyaan.push_back({
        "Apa yang terjadi pada elemen yang lebih besar dari 'key' selama proses penyisipan?", 
        {   
            "Dihapus dari array.", 
            "Digeser satu posisi ke kanan."
        }, 
        2, 
        "Elemen yang lebih besar dari key harus digeser ke kanan (arr[j+1] = arr[j]) untuk membuat ruang kosong bagi key di posisi yang benar.", 
        "Perhatikan baris kode: arr[j + 1] = arr[j]. Ini adalah operasi geser, bukan hapus." 
    });

    return daftarPertanyaan;
}

vector<Pertanyaan> getPertanyaanSelectionSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Bagaimana cara kerja utama dari algoritma Selection Sort?", 
        {   
            "Mencari elemen minimum dari bagian belum terurut lalu menukarnya ke posisi awal.", 
            "Membandingkan elemen bersebelahan lalu menukarnya jika urutannya salah."
        }, 
        1, 
        "Selection Sort bekerja dengan mencari elemen terkecil dari unsorted portion, lalu menukarnya dengan elemen di posisi saat ini. Berbeda dengan Bubble Sort yang swap adjacent.", 
        "Ingat kata 'Selection' = memilih yang terkecil, lalu menempatkannya di posisi yang benar." 
    });

    daftarPertanyaan.push_back({
        "Apa kompleksitas waktu Selection Sort pada kasus terbaik (Best Case)?", 
        {   
            "O(n) - Linear", 
            "O(n^2) - Quadratic"
        }, 
        2, 
        "Tidak seperti Insertion Sort, Selection Sort tetap harus mencari minimum di setiap pass meskipun data sudah terurut. Jadi Best Case tetap O(n²).", 
        "Loop tetap berjalan penuh untuk mencari minimum, tidak ada kondisi yang bisa dilewati." 
    });

    daftarPertanyaan.push_back({
        "Dibanding Bubble Sort, apa keunggulan Selection Sort dalam hal operasi swap?", 
        {   
            "Selection Sort melakukan swap lebih sedikit (maksimal n-1 kali).", 
            "Selection Sort melakukan swap lebih banyak karena lebih kompleks."
        }, 
        1, 
        "Selection Sort hanya melakukan 1 swap per pass (maksimal n-1 total). Bubble Sort bisa melakukan banyak swap per pass jika banyak elemen yang salah posisi.", 
        "Ini membuat Selection Sort lebih efisien dalam hal write operation meskipun kompleksitasnya sama." 
    }); 

    return daftarPertanyaan;
}

vector<Pertanyaan> getPertanyaanHeapSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Struktur data apa yang digunakan oleh algoritma Heap Sort?", 
        {   
            "Binary Heap (Max Heap atau Min Heap)", 
            "Linked List dengan pointer ganda"
        }, 
        1, 
        "Heap Sort menggunakan Binary Heap, biasanya Max Heap untuk ascending sort. Root heap selalu berisi elemen terbesar yang akan dipindah ke akhir array.", 
        "Ingat nama 'Heap' Sort. Struktur heap adalah tree lengkap yang memenuhi sifat parent >= children (Max Heap)." 
    });

    daftarPertanyaan.push_back({
        "Apa keunggulan utama Heap Sort dibanding Bubble, Insertion, dan Selection Sort?", 
        {   
            "Heap Sort memiliki kompleksitas O(n log n) untuk semua kasus.", 
            "Heap Sort lebih mudah diimplementasikan daripada sorting lainnya."
        }, 
        1, 
        "Heap Sort memiliki kompleksitas O(n log n) untuk best, average, dan worst case. Ini lebih efisien dari O(n²) untuk data besar.", 
        "Bubble, Insertion, Selection Sort semuanya O(n²) di worst case. Heap Sort konsisten di O(n log n)." 
    });

    daftarPertanyaan.push_back({
        "Jika sebuah node berada di index i dalam array representation dari Binary Heap, di mana index left child-nya?", 
        {   
            "2*i + 1", 
            "2*i - 1"
        }, 
        1, 
        "Dalam array representation, left child dari node i adalah 2*i + 1, dan right child adalah 2*i + 2. Ini formula standar binary heap.", 
        "Coba gambar tree dengan root di index 0. Left child-nya akan di index 1, yang sesuai dengan rumus 2*0 + 1 = 1." 
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
