#include <iostream> 
#include "sub_menu.h"
#include "../modul/array/modul_array.h"
#include "../modul/pointer/modul_pointer.h"
#include "../modul/sorting/modul_sorting.h"
#include "../modul/searching/modul_searching.h"

using namespace std; 

void showSubMenu() {
    int pilihan; 

    do {
        cout << "\n=== Pilih Materi yang ingin anda pelajari ===" << endl;
        cout << "[1] Array" << endl; 
        cout << "[2] Pointer" << endl;
        cout << "[3] Sorting" << endl;
        cout << "[4] Searching" << endl;
        cout << "[0] Keluar" << endl; 
        cout << "Pilihan Anda:" << endl; 
        cout << "> "; cin >> pilihan; 
        
        switch(pilihan) {
            case 1:
                runModulArray(); 
                break;
            case 2:
                runModulPointer(); 
                break;
            case 3: 
                runModulSorting(); 
                break;
            case 4: 
                runModulSearching();
                break;
        }
    } while (pilihan != 0);
}