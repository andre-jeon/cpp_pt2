#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 5;
    
    // do this 
    do {
        // decreasing the value of x by 1
        cout << x-- << endl;
    }

    // while x exsists
    while (x);

    string z;
    getline(cin, z);

    return 0;
}