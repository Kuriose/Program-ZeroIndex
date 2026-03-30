#include <iostream>
#include "tree_sort.h"
#include "../../fitur/quiz/quiz.h"
#include "../../fitur/visualisasi/visualisasi.h"
#include "../../data/pertanyaan.h"

using namespace std; 

void teoriTreeSort() {
    cout << "\n[Teori -- Tree Sort]" << endl; 
    cout << "Definisi:" << endl;
    cout << "Tree Sort adalah algoritma pengurutan yang menggunakan struktur data" << endl;
    cout << "Binary Search Tree (BST) untuk mengorganisir elemen sebelum traversal." << endl;
    
    cout << "\nKonsep Inti:" << endl;
    cout << "- Insert: Masukkan semua elemen ke dalam BST (kiri < root < kanan)." << endl;
    cout << "- Inorder Traversal: Kunjungi node dengan urutan Left-Root-Right." << endl;
    cout << "- Complexity: O(n log n) average, O(n^2) worst case (BST tidak seimbang)." << endl;
    
    cout << "\nCatatan Penting:" << endl;
    cout << "- Hasil sorted didapat dari Inorder Traversal BST." << endl;
    cout << "- Termasuk Stable Sort jika implementasi menjaga urutan duplikat." << endl;
    cout << "- Worst case terjadi jika input sudah sorted (BST jadi linked list)." << endl;
}

void contohTreeSort() {
    cout << "\n[Contoh -- Source Code]" << endl; 
    cout << "struct Node {" << endl;
    cout << "    int data;" << endl;
    cout << "    Node* left;" << endl;
    cout << "    Node* right;" << endl;
    cout << "};" << endl;
    
    cout << "\nNode* insert(Node* node, int val) {" << endl;
    cout << "    if (node == nullptr) {                // Baris 1: Buat node baru" << endl;
    cout << "        Node* newNode = new Node;" << endl;
    cout << "        newNode->data = val;" << endl;
    cout << "        newNode->left = newNode->right = nullptr;" << endl;
    cout << "        return newNode;" << endl;
    cout << "    }" << endl;
    cout << "    if (val < node->data)                 // Baris 2: Insert ke kiri" << endl;
    cout << "        node->left = insert(node->left, val);" << endl;
    cout << "    else                                  // Baris 3: Insert ke kanan" << endl;
    cout << "        node->right = insert(node->right, val);" << endl;
    cout << "    return node;" << endl;
    cout << "}" << endl;
    
    cout << "\nvoid inorder(Node* node, int arr[], int& i) {" << endl;
    cout << "    if (node == nullptr) return;          // Baris 4: Base case" << endl;
    cout << "    inorder(node->left, arr, i);          // Baris 5: Traverse kiri" << endl;
    cout << "    arr[i++] = node->data;                // Baris 6: Simpan root" << endl;
    cout << "    inorder(node->right, arr, i);         // Baris 7: Traverse kanan" << endl;
    cout << "}" << endl;
    
    cout << "\nPenjelasan:" << endl;
    cout << "-> Baris 1: Buat node baru jika posisi kosong ditemukan." << endl;
    cout << "-> Baris 2-3: Nilai lebih kecil ke kiri, lebih besar ke kanan." << endl;
    cout << "-> Baris 4-7: Inorder traversal menghasilkan urutan sorted." << endl; 
}

void runTreeSort() {
    int pilihan; 

    do {
        cout << "\n=== TREE SORT ===" << endl; 
        cout << "[1] Teori" << endl; 
        cout << "[2] Contoh" << endl; 
        cout << "[3] Quiz" << endl;
        cout << "[4] Visualisasi" << endl; 
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
            case 4: visualisasiTree(); break;
        }
    
    } while (pilihan != 0);
}