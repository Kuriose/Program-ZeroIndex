#include <iostream> 
#include <vector> 
#include "modul_struct.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void tampilkanTeoriStruct() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Struct (Structure) merupakan tipe data bentukan (user-defined type) dalam C++ yang memungkinkan penggabungan beberapa variabel dengan tipe data berbeda menjadi satu kesatuan nama." << endl;
    cout << 
    "Struct digunakan untuk merepresentasikan sebuah entitas nyata yang memiliki beberapa atribut." << endl; 
    cout << 
    "Misalnya, data 'Mahasiswa' memiliki atribut Nama (String), NIM (String), IPK (Float)." << endl; 
    cout << "Daripada membuat 3 variabel terpisah, kita bisa membuatnya dalam satu Struct." << endl;
}

void tampilkanContohStruct() {
    cout << "\n[Contoh]" << endl;
    cout << "// 1. Definisi Struct" << endl;
    cout << "struct Buku {" << endl; 
    cout << "   string judul;" << endl;
    cout << "   string penulis;" << endl;
    cout << "   int tahun;" << endl;
    cout << "   float harga;" << endl;
    cout << "}; // -> Jangan Lupa tanda titik koma ';'" << endl;

    cout << "int main() {" << endl;
    cout << "   // 2. Deklarasi Variabel Struct" << endl;
    cout << "   Buku bukuSaya;" << endl;

    cout << "   // 3. Mengisi Nilai Field (Akses menggunakan operator titik/dot '.')" << endl;
    cout << "   bukuSaya.judul = 'Belajar C++';" << endl;
    cout << "   bukuSaya.penulis = 'John Doe';" << endl;
    cout << "   bukuSaya.judul = 2024;" << endl;
    cout << "   bukuSaya.judul = 150000.50;" << endl;

    cout << "   // 4. Menampilkan Nilai" << endl;
    cout << "   cout << 'Judul: ' << bukuSaya.judul << endl" << endl;
    cout << "   cout << 'Harga: ' << bukuSaya.harga << endl" << endl;

    cout << "   return 0;" << endl;
    cout << "}" << endl;
}

void runModulStruct() {
    int pilihan; 

    do {
        cout << "\n=== MODUL STRUCT ===" << endl;
        cout << "[1] Teori" << endl;
        cout << "[2] Contoh" << endl;
        cout << "[3] Quiz" << endl;
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl;
        cout << "> "; cin >> pilihan;

        switch(pilihan) {
            case 1: tampilkanTeoriStruct(); break;
            case 2: tampilkanContohStruct(); break;
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanStruct(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiStruct(); break;
        } 
 
    } while (pilihan != 0);
}