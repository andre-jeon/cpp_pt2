#include <iostream>
#include <string>

using namespace std;

int main() {
    // for (int i = 0; i < 10; i++)
    //     cout << i << endl;

    int i = 0;

    for (;;) {
        if (i == 5) {
            i++;
            continue;
        }

        cout << i++ << endl;
        if (i > 10)
            break;
    }

    string z;
    getline(cin, z);
    return 0;
}