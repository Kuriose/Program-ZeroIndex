#include <iostream> 
#include <vector> 
#include "modul_array.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void tampilkanTeoriArray() {
    cout << "\n[Teori -- Array]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Array merupakan struktur data yang digunakan untuk menyimpan kumpulan nilai dengan tipe data yang sama dalam lokasi memori yang berurutan." << endl;
    
    cout << "\nKonsep Inti:" << endl; 
    cout << "- Kumpulan nilai dalam Array disebut elemen." << endl; 
    cout << "- Untuk mengakses elemen-elemen tersebut, harus menggunakan Indeks" << endl; 
    cout << "- Indeks elemen dimulai dari angka 0" << endl; 
    
    cout << "\nCatatan Penting:" << endl; 
    cout << "- Semua elemen dalam array WAJIB memiliki tipe data yang identik" << endl; 
    cout << "- Hindari akses indeks di luar batas (out of bounds) karena dapat menyebabkan program crash." << endl;
}

void tampilkanContohArray() {
    cout << "\n[Contoh -- Source Code]" << endl;
    cout << "#include <iostream>" << endl; 
    cout << "using namespace std;" << endl;
    
    cout << "\nint main () {" << endl;
    cout << "   int nilai[3] = {80, 90, 70};    // Baris 1" << endl;  
    cout << "   cout << nilai[0] << endl;       // Baris 2" << endl;
    cout << "   nilai[1] = {95};                // Baris 3" << endl;
    cout << "   cout << nilai[1] << endl;       // Baris 4" << endl;
    cout << "   return 0;" << endl;    
    cout << "}" << endl;

    cout << "\nPenjelasan" << endl; 
    cout << "- Baris 1: Deklarasi array integer bernama 'nilai' dengan 3 elemen" << endl; 
    cout << "- Baris 2: Mencetak elemen pertama (indeks 0), yaitu 80" << endl; 
    cout << "- Baris 3: Mengubah nilai elemen kedua (indeks 1), menjadi 95" << endl; 
    cout << "- Baris 4: Mencetak elemen kedua yang diubah menjadi 95" << endl; 
}

void runModulArray() {
    int pilihan; 

    do {
        cout << "\n=== MODUL ARRAY ===" << endl;
        cout << "[1] Teori" << endl;
        cout << "[2] Contoh" << endl;
        cout << "[3] Quiz" << endl;
        cout << "[4] Visualisasi" << endl;
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl;
        cout << "> "; cin >> pilihan;

        switch(pilihan) {
            case 1: tampilkanTeoriArray(); break;
            case 2: tampilkanContohArray(); break;
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanArray(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
            case 4: visualisasiArray(); break;
        } 
 
    } while (pilihan != 0);
}