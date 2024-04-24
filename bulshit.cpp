#include <iostream>
using namespace std;

int main () {
    const int n = 10;
    int numbers[n];
    int para[n];
    int nepara[n];
    cout << "Enter " << n << " numbers\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter next number \n";
        cin >> numbers[i]; 
    }

    cout << "\nparu skaitli: \n";
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
        cout << numbers[i] << ", "; 
        }
    }

    cout << "\nneparu skaitli: \n";
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << ", "; 
        }
    }
    

    return 0;
}