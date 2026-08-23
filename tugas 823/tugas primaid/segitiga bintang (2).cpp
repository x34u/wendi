#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    do {
        int j = 1;
        while (j <= rows) {
            cout << " ";
            j++;
        }
        int k = 1;
        while (k <= (5 - (rows - 1))) {
            cout << "*";
            k++;
        }
        cout << endl;
        rows--;
    } while (rows > 0);
    return 0;
}
