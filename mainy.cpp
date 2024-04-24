#include <iostream>
#include <string>

using namespace std;

int main() {
    string ievaditsTeksts;

    cout << "Ievadiet virkni: ";
    
    getline(cin, ievaditsTeksts); 
    for (size_t i = 0; i < ievaditsTeksts.length(); ++i) {
        if (ievaditsTeksts[i] == 'a') { 
            ievaditsTeksts[i] = ' ';
        }
    }

    cout << "izmainita virkne: " << ievaditsTeksts << endl;

    return 0;
}
