#ifndef QUIZ_H
#define QUIZ_H

#include <string> 
#include <vector> 

using namespace std;

struct Pertanyaan {
    string prompt; 
    string opsi[2];
    int jawabanBenar; 
    string penjelasan;
    string petunjuk;
};

void jalankanQuiz(vector<Pertanyaan> daftarPertanyaan);

#endif