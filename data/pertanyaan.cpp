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
        "Pendekatan algoritma apa yang digunakan oleh Merge Sort?", 
        {   
            "Divide and Conquer (Bagi dan Taklukkan)", 
            "Greedy Algorithm (Serakah)"
        }, 
        1, 
        "Merge Sort menggunakan paradigma Divide and Conquer: membagi array menjadi bagian-bagian kecil, mengurutkannya, lalu menggabungkan (merge) kembali.", 
        "Ingat nama 'Merge' Sort. Ada proses divide (pisah) lalu merge (gabungkan) kembali." 
    });

    daftarPertanyaan.push_back({
        "Apa kekurangan utama Merge Sort dibanding Heap Sort dalam hal penggunaan memori?", 
        {   
            "Merge Sort membutuhkan O(n) memori tambahan untuk array temporary.", 
            "Merge Sort tidak bisa digunakan untuk array besar."
        }, 
        1, 
        "Merge Sort bukan in-place sort. Ia membutuhkan array temporary berukuran O(n) untuk proses merge, sedangkan Heap Sort hanya O(1).", 
        "Perhatikan kode fungsi merge() yang membuat array L[] dan R[] sebagai temporary storage." 
    });

    daftarPertanyaan.push_back({
        "Mengapa Merge Sort dikategorikan sebagai Stable Sort?", 
        {   
            "Karena urutan elemen dengan nilai sama tidak berubah setelah pengurutan.", 
            "Karena Merge Sort lebih cepat daripada sorting lainnya."
        }, 
        1, 
        "Stable Sort berarti jika ada dua elemen dengan nilai sama, urutan relatif mereka tetap terjaga. Merge Sort menjaga ini karena kondisi L[i] <= R[j] (pakai <= bukan <).", 
        "Pada fungsi merge, saat nilai sama, elemen dari array kiri diambil dulu. Ini menjaga stabilitas urutan." 
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanQuickSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa elemen kunci yang digunakan Quick Sort untuk membagi array menjadi dua bagian?", 
        {   
            "Pivot - elemen acuan untuk partisi", 
            "Root - elemen pertama dari array"
        }, 
        1, 
        "Quick Sort memilih elemen 'pivot' sebagai acuan. Array dipartisi menjadi elemen < pivot di kiri dan > pivot di kanan. Pivot berada di posisi final setelah partisi.", 
        "Ingat proses partition. Ada satu elemen yang jadi pembatas antara kiri dan kanan, itulah pivot." 
    });

    daftarPertanyaan.push_back({
        "Kapan Quick Sort memiliki performa terburuk (Worst Case O(n²))?", 
        {   
            "Ketika pivot selalu terpilih sebagai elemen terkecil atau terbesar.", 
            "Ketika array memiliki elemen yang semuanya sama."
        }, 
        1, 
        "Jika pivot selalu elemen terkecil/terbesar (misal array sudah sorted dengan pivot=last), partisi tidak seimbang. Satu sisi kosong, sisi lain n-1 elemen. Rekursi jadi n level.", 
        "Bayangkan partisi yang tidak seimbang. Jika satu sisi selalu kosong, itu seperti tidak ada divide sama sekali." 
    });

    daftarPertanyaan.push_back({
        "Mengapa Quick Sort lebih disukai daripada Merge Sort untuk array di memori?", 
        {   
            "Quick Sort adalah in-place sort (O(log n) space), Merge Sort butuh O(n) tambahan.", 
            "Quick Sort lebih mudah diimplementasikan daripada Merge Sort."
        }, 
        1, 
        "Quick Sort hanya butuh O(log n) untuk stack rekursif, tidak perlu array temporary. Merge Sort butuh O(n) untuk array L[] dan R[] saat merge. Ini hemat memori signifikan.", 
        "Bandingkan space complexity: Quick Sort O(log n) vs Merge Sort O(n). Untuk data besar, perbedaan ini penting." 
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanTreeSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Traversal BST mana yang menghasilkan urutan elemen yang sudah terurut (sorted)?", 
        {   
            "Inorder Traversal (Left-Root-Right)", 
            "Preorder Traversal (Root-Left-Right)"
        }, 
        1, 
        "Inorder Traversal mengunjungi node dengan urutan Left-Root-Right. Karena BST memiliki property Left < Root < Right, inorder selalu menghasilkan sorted order.", 
        "Ingat nama 'Inorder'. Urutan ini mengikuti sifat alami BST yang sudah terstruktur dari kecil ke besar." 
    });

    daftarPertanyaan.push_back({
        "Kapan Tree Sort memiliki performa terburuk (Worst Case O(n^2))?", 
        {   
            "Ketika BST tidak seimbang (misal input sudah sorted), tree menjadi seperti linked list.", 
            "Ketika semua elemen dalam array memiliki nilai yang sama."
        }, 
        1, 
        "Jika input sudah sorted dan kita insert ke BST tanpa balancing, semua node akan di satu sisi (kiri atau kanan). Tree height = n, sehingga kompleksitas jadi O(n²).", 
        "Bayangkan BST yang miring semua ke satu sisi. Itu sama seperti linked list, tidak ada divide yang efisien." 
    });

    daftarPertanyaan.push_back({
        "Mengapa Tree Sort membutuhkan lebih banyak memori dibanding Quick Sort?", 
        {   
            "Tree Sort butuh O(n) untuk membuat node tree, Quick Sort hanya O(log n) untuk stack.", 
            "Tree Sort lebih kompleks sehingga butuh lebih banyak variabel temporary."
        }, 
        1, 
        "Tree Sort harus membuat Node struct untuk setiap elemen (left, right, data pointer). Ini butuh O(n) heap memory. Quick Sort in-place hanya butuh O(log n) stack.", 
        "Bandingkan struktur: Node* left, Node* right, int data per elemen vs Quick Sort yang hanya swap di array asli." 
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanExchangeSort() {
    vector<Pertanyaan> daftarPertanyaan; 

     daftarPertanyaan.push_back({
        "Apa perbedaan utama antara Exchange Sort dan Bubble Sort?", 
        {   
            "Bubble Sort lebih cepat karena menggunakan lebih sedikit swap.", 
            "Exchange Sort membandingkan elemen langsung dengan semua elemen lain, bukan hanya adjacent."
        }, 
        2, 
        "Exchange Sort membandingkan arr[i] dengan semua arr[j] dimana j > i. Bubble Sort hanya membandingkan elemen bersebelahan (adjacent) saja.", 
        "Ingat: Bubble Sort = adjacent swap, Exchange Sort = direct comparison dengan semua elemen." 
    });

    daftarPertanyaan.push_back({
        "Mengapa Exchange Sort memiliki kompleksitas O(n^2) bahkan pada best case?", 
        {   
            "Karena tetap harus membandingkan setiap pasangan elemen meskipun data sudah sorted.", 
            "Karena Exchange Sort menggunakan rekursif yang memakan banyak waktu."
        }, 
        1, 
        "Exchange Sort tidak memiliki mekanisme early termination. Nested loop tetap berjalan penuh meskipun array sudah terurut, sehingga tetap O(n²).", 
        "Cek nested loop pada kode. Tidak ada kondisi break atau flag yang menghentikan loop lebih awal." 
    });

    daftarPertanyaan.push_back({
        "Dibanding Selection Sort, bagaimana jumlah swap pada Exchange Sort?", 
        {   
            "Exchange Sort melakukan swap lebih sedikit karena lebih efisien.", 
            "Exchange Sort bisa melakukan swap lebih banyak karena tidak menunggu posisi minimum."
        }, 
        2, 
        "Selection Sort hanya 1 swap per pass (total n-1 swap). Exchange Sort bisa melakukan banyak swap setiap kali menemukan pasangan yang salah urutan.", 
        "Selection Sort cari minimum dulu baru swap sekali. Exchange Sort langsung swap setiap kali ada yang salah." 
    });

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanRadixSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa yang membuat Radix Sort berbeda dari algoritma sorting lainnya seperti Quick Sort atau Merge Sort?", 
        {   
            "Radix Sort menggunakan perbandingan langsung antara elemen untuk menentukan urutan.", 
            "Radix Sort adalah non-comparative sort yang mengurutkan berdasarkan digit posisi."
        }, 
        2, 
        "Radix Sort tidak membandingkan elemen secara langsung. Ia mengurutkan berdasarkan digit (satuan, puluhan, ratusan) menggunakan Counting Sort sebagai subroutine.", 
        "Ingat: Quick/Merge/Heap = Comparative, Radix = Non-Comparative (digit-based)." 
    });

    daftarPertanyaan.push_back({
        "Kapan Radix Sort bisa mencapai kompleksitas linear O(n)?", 
        {   
            "Ketika jumlah digit (d) konstan dan tidak bergantung pada jumlah elemen n.", 
            "Ketika semua elemen dalam array memiliki nilai yang sama."
        }, 
        1, 
        "Rumus kompleksitas Radix Sort adalah O(d * (n + b)). Jika d (jumlah digit) konstan, maka kompleksitas menjadi O(n). Ini lebih cepat dari O(n log n).", 
        "Lihat formula: O(d * (n + b)). Jika d tetap, maka yang berubah hanya n, sehingga jadi linear." 
    });

    daftarPertanyaan.push_back({
        "Mengapa Radix Sort harus menggunakan Stable Sort (Counting Sort) sebagai subroutine?", 
        {   
            "Karena Stable Sort lebih cepat daripada Unstable Sort untuk setiap pass digit.", 
            "Karena urutan relatif dari pass sebelumnya harus dijaga agar hasil akhir benar."
        }, 
        2, 
        "Jika tidak stable, urutan dari pass digit sebelumnya bisa rusak. Contoh: 170 dan 90 sama-sama digit satuan 0, urutan mereka harus tetap setelah sort puluhan.", 
        "Bayangkan Pass 1 urutkan satuan, Pass 2 urutkan puluhan. Jika Pass 2 tidak stable, hasil Pass 1 jadi tidak berarti." 
    }); 

    return daftarPertanyaan;    
}

vector<Pertanyaan> getPertanyaanShellSort() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa perbedaan utama antara Shell Sort dan Insertion Sort?", 
        {   
            "Shell Sort hanya membandingkan elemen yang bersebelahan (adjacent).", 
            "Shell Sort memungkinkan pertukaran elemen yang berjauhan menggunakan gap."
        }, 
        2, 
        "Shell Sort adalah generalisasi Insertion Sort yang menggunakan gap sequence. Elemen bisa berpindah jauh dalam satu iterasi, tidak hanya adjacent seperti Insertion Sort.", 
        "Ingat: Insertion Sort = adjacent only, Shell Sort = gap-based comparison." 
    });

    daftarPertanyaan.push_back({
        "Apa yang terjadi pada nilai gap selama proses Shell Sort berlangsung?", 
        {   
            "Gap berkurang setiap iterasi hingga akhirnya menjadi 1.", 
            "Gap tetap konstan dari awal hingga akhir proses sorting."
        }, 
        1, 
        "Shell Sort menggunakan diminishing gap sequence. Gap dimulai dari n/2 (atau nilai lain) dan berkurang setiap iterasi hingga gap = 1 (Insertion Sort final).", 
        "Lihat loop: for (gap = n/2; gap > 0; gap /= 2). Gap terus mengecil." 
    });

    daftarPertanyaan.push_back({
        "Mengapa Shell Sort dikategorikan sebagai Unstable Sort?", 
        {   
            "Karena Shell Sort membutuhkan memori tambahan yang besar untuk operasi gap.", 
            "Karena elemen dengan nilai sama bisa berubah urutan relatifnya saat pertukaran dengan gap."
        }, 
        2, 
        "Saat melakukan swap dengan gap yang besar, elemen dengan nilai sama bisa saling melewati dan mengubah urutan relatif mereka. Ini membuat Shell Sort tidak stable.", 
        "Bayangkan dua elemen '5' yang terpisah jauh. Saat gap swap, posisi relatif mereka bisa tertukar." 
    });

    return daftarPertanyaan;    
}

// Searching
// 1. Linear Search
vector<Pertanyaan> getPertanyaanLinearSearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Kapan Linear Search paling cocok untuk digunakan?", 
        {   
            "Ketika array sangat besar (n > 10000) dan sudah terurut.", 
            "Ketika array kecil atau tidak terurut dan hanya mencari satu kali."
        }, 
        2, 
        "Linear Search cocok untuk data kecil atau tidak terurut karena tidak perlu preprocessing. Untuk data besar sorted, Binary Search lebih efisien.", 
        "Ingat: Linear Search = sederhana, tidak perlu sorted. Binary Search = cepat, tapi harus sorted." 
    });

    daftarPertanyaan.push_back({
        "Apa kompleksitas waktu Best Case dari Linear Search?", 
        {   
            "O(1) - Ketika elemen ditemukan di index pertama.", 
            "O(n) - Karena tetap harus memeriksa semua elemen."
        }, 
        1, 
        "Best Case terjadi ketika target berada di index 0. Hanya 1 comparison diperlukan, sehingga kompleksitasnya O(1) atau konstan.", 
        "Bayangkan elemen yang dicari ada di posisi pertama. Loop langsung return di iterasi pertama." 
    });

    daftarPertanyaan.push_back({
        "Apakah array harus dalam keadaan terurut (sorted) untuk menggunakan Linear Search?", 
        {   
            "Ya, Linear Search hanya bekerja pada array yang sudah sorted.", 
            "Tidak, Linear Search dapat bekerja pada array yang tidak terurut."
        }, 
        2, 
        "Linear Search memeriksa setiap elemen secara berurutan tanpa mempedulikan urutan. Ini adalah keunggulan dibanding Binary Search yang wajib sorted.", 
        "Cek kode: hanya ada perbandingan arr[i] == target, tidak ada asumsi tentang urutan elemen." 
    }); 

    return daftarPertanyaan;    
}

// 2. Binary Search
vector<Pertanyaan> getPertanyaanBinarySearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa syarat wajib yang harus dipenuhi sebelum menggunakan Binary Search?", 
        {   
            "Array harus dalam keadaan terurut (sorted) terlebih dahulu.", 
            "Array harus memiliki jumlah elemen genap agar bisa dibagi dua."
        }, 
        1, 
        "Binary Search bekerja dengan membagi search space menjadi dua berdasarkan perbandingan dengan middle element. Ini hanya valid jika array sudah sorted.", 
        "Ingat: Binary Search = Divide and Conquer. Tidak bisa divide jika data tidak terurut." 
    });

    daftarPertanyaan.push_back({
        "Mengapa Binary Search memiliki kompleksitas O(log n) dan bukan O(n)?", 
        {   
            "Karena Binary Search menggunakan loop yang lebih sederhana daripada Linear Search.", 
            "Karena setiap iterasi mengurangi search space menjadi setengah dari sebelumnya."
        }, 
        2, 
        "Binary Search membagi array menjadi dua setiap iterasi. Untuk n=1000, hanya butuh ~10 iterasi (log2(1000)≈10), bukan 1000 seperti Linear Search.", 
        "Bayangkan membagi kertas menjadi dua terus menerus. Berapa kali bisa dibagi sebelum jadi 1 bagian? Itu log n." 
    });

    daftarPertanyaan.push_back({
        "Mengapa rumus mid = left + (right - left) / 2 lebih disarankan daripada (left + right) / 2?", 
        {   
            "Untuk menghindari integer overflow ketika left + right melebihi batas maksimum int.", 
            "Karena rumus tersebut lebih cepat dalam perhitungan matematika oleh compiler."
        }, 
        1, 
        "Jika left dan right sangat besar (dekat INT_MAX), penjumlahan left + right bisa overflow. Formula left + (right - left) / 2 menghindari ini.", 
        "Ini adalah best practice untuk Binary Search. Meskipun jarang terjadi, overflow bisa menyebabkan bug yang sulit dideteksi." 
    });

    return daftarPertanyaan;    
}

// 3. Interpolation Search
vector<Pertanyaan> getPertanyaanInterpolationSearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Kapan Interpolation Search memiliki performa terbaik (O(log log n))?", 
        {   
            "Ketika data tidak terurut dan acak sepenuhnya.", 
            "Ketika data sorted dan terdistribusi secara uniform (merata)."
        }, 
        2, 
        "Interpolation Search menggunakan formula interpolasi yang mengasumsikan distribusi uniform. Jika data uniform, tebakan posisi sangat akurat dan cepat.", 
        "Ingat: Interpolation = menebak posisi berdasarkan nilai. Tebakan akurat jika data merata." 
    });

    daftarPertanyaan.push_back({
        "Apa kompleksitas waktu Worst Case dari Interpolation Search?", 
        {   
            "O(n) - Ketika data tidak uniform (misal: distribusi eksponensial).", 
            "O(log n) - Sama seperti Binary Search di semua kasus."
        }, 
        1, 
        "Jika data tidak uniform (misal: 1, 2, 4, 8, 16...), formula interpolasi bisa meleset jauh. Search space tidak berkurang signifikan, jadi worst case jadi O(n).", 
        "Bandingkan dengan Binary Search yang konsisten O(log n). Interpolation lebih cepat average, tapi worst case lebih buruk." 
    });

    daftarPertanyaan.push_back({
        "Apa perbedaan utama antara Interpolation Search dan Binary Search dalam menentukan posisi tengah?", 
        {   
            "Binary Search menggunakan formula interpolasi, Interpolation Search selalu di tengah.", 
            "Binary Search selalu di tengah, Interpolation Search menggunakan formula untuk estimate posisi."
        }, 
        2, 
        "Binary Search: mid = (left + right) / 2 (selalu tengah). Interpolation Search: menggunakan formula berdasarkan nilai target untuk estimate posisi yang lebih akurat.", 
        "Binary Search = buka buku di tengah. Interpolation = buka buku di halaman yang sesuai dengan kata yang dicari." 
    }); 

    return daftarPertanyaan;    
}

// 4. Fibonacci Search
vector<Pertanyaan> getPertanyaanFibonacciSearch() {
    vector<Pertanyaan> daftarPertanyaan; 

    daftarPertanyaan.push_back({
        "Apa keunggulan utama Fibonacci Search dibanding Binary Search?", 
        {   
            "Fibonacci Search lebih sederhana dalam implementasi dan lebih mudah dipahami.", 
            "Fibonacci Search hanya menggunakan operasi + dan -, tidak ada division (/)."
        }, 
        2, 
        "Fibonacci Search tidak menggunakan operasi division untuk menghitung posisi probe. Ini berguna untuk hardware dimana operasi division mahal atau tidak tersedia.", 
        "Ingat: Binary Search = (left+right)/2 (pakai division). Fibonacci = offset + fib2 (hanya addition)." 
    });

    daftarPertanyaan.push_back({
        "Apa kompleksitas waktu Fibonacci Search pada average dan worst case?", 
        {   
            "O(log n) - Sama seperti Binary Search.", 
            "O(n) - Lebih lambat karena menggunakan deret Fibonacci."
        }, 
        1, 
        "Fibonacci Search memiliki kompleksitas O(log n) sama seperti Binary Search. Perbedaannya ada pada cara membagi search space, bukan pada kompleksitas.", 
        "Kedua algoritma menggunakan Divide and Conquer. Search space berkurang secara logaritmik setiap iterasi." 
    });

    daftarPertanyaan.push_back({
        "Apa syarat wajib yang harus dipenuhi sebelum menggunakan Fibonacci Search?", 
        {   
            "Array harus memiliki ukuran yang sama dengan angka Fibonacci (misal: 5, 8, 13 elemen).", 
            "Array harus dalam keadaan sorted (terurut) terlebih dahulu."
        }, 
        2, 
        "Seperti Binary Search, Fibonacci Search memerlukan array sorted. Ukuran array tidak harus angka Fibonacci, algoritma akan find fib >= n.", 
        "Cek kode: while (fib < n) untuk mencari Fibonacci number yang >= ukuran array. Tidak harus exact match." 
    }); 

    return daftarPertanyaan;    
}
