#include <iostream>
#include "tree_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriTreeSort() {
    cout << "\n[Teori]" << endl; 
    cout << 
    "Tree Sort merupakan algoritma yang mengurutkan data dengan membangun Binary Search Tree (BST) dari elemen-elemen array." << endl;
    cout <<
    "Setelah semua elemen dimasukkan ke dalam BST, dilakukan In-Order Traversal (Kiri -> akar -> kanan) untuk menghasilkan data yang terurut naik" << endl;
}

void contohTreeSort() {
    cout << "\n[Contoh]" << endl; 
    cout << "[5, 3, 2]" << endl; 
    cout << "-> Tree Sort" << endl; 
}

void runTreeSort() {
    int pilihan; 

    do {
        cout << "\n=== TREE SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl; 
        cout << "[0] Kembali" << endl;
        cout << "Masukkan Pilihan Anda" << endl; 
        cout << "> "; cin >> pilihan; 

        switch (pilihan) {
            case 1: teoriTreeSort(); break; 
            case 2: contohTreeSort(); break; 
            case 3: {
                vector<Pertanyaan> daftarPertanyaan = getPertanyaanTreeSort(); 
                
                jalankanQuiz(daftarPertanyaan); 
                break;
            }
        }
    
    } while (pilihan != 0);
}