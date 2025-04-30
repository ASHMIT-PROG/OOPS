#include <iostream>
using namespace std;

int main() {
    int nr, dr;
    cin >> nr >> dr;

    int re; // Declare 're' outside try block

    try {
        if (dr == 0) {
            throw dr;  // will jump to catch block
        }
        re = nr / dr;
    }
    catch(int ex) {
        cout << "Divide by zero is not allowed" << endl;
        return 0; // exit to avoid using uninitialized 're'
    }

    cout << "Result: " << re << endl;
    return 0;
}
