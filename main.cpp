#include <iostream>
using namespace std;

int main () {

    string password, password2;
    bool vaiParolesSakrit = false; 

    

    while (!vaiParolesSakrit) {

       cout << "\nIevadi 2 reizes:";
        cin >> password;
        cin >> password2; 
    
        if (password == password2) {
            cout << "\ntrue";
            vaiParolesSakrit = true;
        } else {
            cout << "\n false";
            
        }
   
    }
    
    return 0;
}
