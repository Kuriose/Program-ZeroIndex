#include <iostream> 
#include <vector> 
#include "modul_array.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void tampilkanTeoriArray() {
    cout << "\n[Teori]" << endl; 
    cout << "Array adalah kumpulan data dengan index dimulai dari 0." << endl; 
}

void tampilkanContohArray() {
    cout << "\n[Contoh]" << endl;
    cout << "int arr[3] = {10, 20, 30};" << endl;
    cout << "arr[0] = 10" << endl;
    cout << "arr[1] = 20" << endl;
    cout << "arr[2] = 30" << endl;
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