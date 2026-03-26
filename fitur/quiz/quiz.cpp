#include <iostream> 
#include "quiz.h"

using namespace std; 

void jalankanQuiz(vector<Pertanyaan> daftarPertanyaan) {
    int jawaban; 

    cout << "\n[Quiz]" << endl;

    for (int i = 0; i < daftarPertanyaan.size(); i++) {
        bool benar;
        
        cout << "\nSoal " << i + 1 << ":" << endl; 
        cout << daftarPertanyaan[i].prompt << endl;

        cout << "Pilihan:" << endl;
        for (int j = 0; j < 2; j++) {
            cout << "[" << j + 1 << "] " << daftarPertanyaan[i].opsi[j] << endl;
        }

        for (int kesempatan = 1; kesempatan <= 2; kesempatan++) {
            cout << "Jawaban: "; 
            cin >> jawaban; 

            if (jawaban == daftarPertanyaan[i].jawabanBenar) {
                cout << "Benar!" << endl;
                benar = true; 
                break; 
            }
            else {
                cout << "Salah." << endl; 
                
                if (kesempatan == 1) {
                    cout << "Petunjuk: " << daftarPertanyaan[i].petunjuk << endl; 
                    cout << "Coba lagi..." << endl;
                }
            }
        }

        // Setelah attempt selesai
        if (!benar) {
            cout << "Penjelasan: " << daftarPertanyaan[i].penjelasan << endl;
        }
    }
}