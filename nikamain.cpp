#include <iostream>
#include <string>

using namespace std;

int main() {
    string names;
    string turpinajums;
    string parbaude;

    while (true) {
        cout << "Ievadi vaardu: \n";
        cin >> names;

        cout << "Vai velaties turpinat? Ja gribat nospiediet Y \n";
        cin >> turpinajums;

        if (turpinajums != "Y") {
            break;
        }
    
        }
        cout << "Vai velaties apskatiit ievadītus vaardus? Ja gribat nospiediet A \n";
        cin >> parbaude;

        if (parbaude != "A") {
            
    }

    return 0;
}
