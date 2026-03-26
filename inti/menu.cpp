#include <iostream> 
#include "menu.h"
#include "sub_menu.h"
#include "../modul/array/modul_array.h"
#include "../modul/pointer/modul_pointer.h"

using namespace std; 

void showMainMenu() {
    int pilihan; 

    do {
        cout << "\n=== ZeroIndex ===" << endl;
        cout << "[1] Mulai Belajar" << endl; 
        cout << "[0] Keluar" << endl; 
        cout << "Pilihan Anda:" << endl; 
        cout << "> "; cin >> pilihan; 
        
        switch(pilihan) {
            case 1:
                showSubMenu(); 
                break;
        }
    } while (pilihan != 0);
}