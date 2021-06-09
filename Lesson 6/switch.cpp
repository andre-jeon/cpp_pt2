#include <iostream>
#include <string>

using namespace std;

int main() {
    // introduction to functions in c++

    // is the variable inside of the parenthesis(1)
    switch(1) {
        // equal to case 1:
        case 1:
        case 2:
            // if it is, return this following statement
            cout << "at 1" << endl;
            // if it is, return this following statement
            cout << "at 2" << endl;
            break;
        case 3:
            // if it is, return this following statement
            cout << "at 3" << endl;
    }
    
    string z;
    getline(cin, z);

    return 0;
}