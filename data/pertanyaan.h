#ifndef PERTANYAAN_H 
#define PERTANYAAN_H    

#include <vector> 
#include "../fitur/quiz/quiz.h"

using namespace std; 

// MODUL ARRAY
vector<Pertanyaan> getPertanyaanArray(); 

// MODUL POINTER
vector<Pertanyaan> getPertanyaanPointer();

// MODUL STRUCT
vector<Pertanyaan> getPertanyaanStruct();

// MODUL FUNGSI & PROSEDUR
vector<Pertanyaan> getPertanyaanFP();

// MODUL SORTING
vector<Pertanyaan> getPertanyaanBubbleSort();
vector<Pertanyaan> getPertanyaanInsertionSort();
vector<Pertanyaan> getPertanyaanSelectionSort();
vector<Pertanyaan> getPertanyaanHeapSort();
vector<Pertanyaan> getPertanyaanMergeSort();

vector<Pertanyaan> getPertanyaanQuickSort();
vector<Pertanyaan> getPertanyaanTreeSort();
vector<Pertanyaan> getPertanyaanExchangeSort();
vector<Pertanyaan> getPertanyaanRadixSort();
vector<Pertanyaan> getPertanyaanShellSort();

// MODUL SEARCHING
vector<Pertanyaan> getPertanyaanLinearSearch();
vector<Pertanyaan> getPertanyaanBinarySearch();
vector<Pertanyaan> getPertanyaanInterpolationSearch();
vector<Pertanyaan> getPertanyaanFibonacciSearch();

#endif