#include <iostream> 
#include "sub_menu.h"
#include "../modul/array/modul_array.h"
#include "../modul/pointer/modul_pointer.h"
#include "../modul/struct/modul_struct.h"
#include "../modul/fungsi-prosedur/modul_fungsi_prosedur.h"
#include "../modul/sorting/modul_sorting.h"
#include "../modul/searching/modul_searching.h"

using namespace std; 

void showSubMenu() {
    int pilihan; 

    do {
        cout << "\n=== Pilih Materi yang ingin anda pelajari ===" << endl;
        cout << "[1] Array" << endl; 
        cout << "[2] Pointer" << endl;
        cout << "[3] Struct" << endl;
        cout << "[4] Fungsi dan Prosedur" << endl;
        cout << "[5] Sorting" << endl;
        cout << "[6] Searching" << endl;
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
                runModulStruct(); 
                break;
            case 4: 
                runModulFP();
                break;
            case 5:
                runModulSorting();
                break;
            case 6:
                runModulSearching();
                break;
        }
    } while (pilihan != 0);
}