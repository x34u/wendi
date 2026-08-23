#include <iostream>
using namespace std;

int main() {
    int nilai = 95;
    switch (nilai / 10) {
        case 9:
            cout << "Nilaimu A" << endl;
            break;
        case 8:
            cout << "Nilaimu B" << endl;
            break;
        case 7:
            cout << "Nilaimu C" << endl;
            break;
        case 6:
            cout << "Nilaimu D" << endl;
            break;
        default:
            cout << "Nilaimu E" << endl; 
    }
    return 0;
}
