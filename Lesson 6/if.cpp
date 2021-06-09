#include <iostream>
#include <string>

using namespace std;

int main() {

    if(1) cout << "ham";

    if(-1) cout << " sandwitch";

    if('a') cout << " with";

    if(5 > 4) {
        cout << " lettuce";
    }

    if(5 >= 4) {
        cout << " tomatoes";
    }

    if(3 != 3) {
        cout << " pickles";
    }


    if(3 == 3) {
        cout << " pickles";
    }

    if(3 && 3) {
        cout << " pickles";
    }


    if(0 || -1) {
        cout << " pickles";
    }

    // pass
    if (5 >= 4)
        ;


    string z;
    getline(cin, z);

    return 0;
}