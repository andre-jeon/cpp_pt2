#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 5;
    
    // as long as x exsists/not none
    while (x) {
        
        // decreasing the value of x by 1
        cout << x-- << endl;
    }

    string z;
    getline(cin, z);

    return 0;
}