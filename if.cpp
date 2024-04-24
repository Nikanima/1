#include <iostream>
using namespace std;

int main () {

    int atziime;
    cout << "Ievadiet savu atzīmi un uzziniet rezultātu: \n";
    cin >> atziime;

    if (atziime >= 4 && atziime < 8) {
        cout << "sekmīgi";
    }
    if (atziime < 4) {
        cout << "nesekmigi";
    }
    if (atziime >= 8 && atziime < 10) {
        cout << "izcili";
    }

    return 0;
}