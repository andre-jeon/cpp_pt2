#include <iostream>
#include <string>
using namespace std;

int main() {
    // = assignment operator
    // << insertion operator
    // >> extraction operator
    // :: scope operator
    // sizeof()

    cout << 5 + 4 << endl;
    cout << 5 - 4 << endl;
    cout << 5 * 4 << endl;
    cout << 5 / 4 << endl;
    cout << 5 % 4 << endl;

    int x = 5;
    x += 8;
    cout << x << endl;

    int wounds = 0;

    // can have the increments in the beginning or at the end
    wounds++;
    ++wounds;
    cout << wounds << endl;
    wounds--;
    cout << wounds << endl;

    cout << !true << endl;
    cout << (5 == 4) << endl;
    cout << (5 != 4) << endl;
    cout << (5 < 4) << endl;
    cout << (5 > 4) << endl;
    cout << (5 <= 4) << endl;
    cout << (5 >= 4) << endl;
    cout << (true && true) << endl;
    cout << (true || false) << endl;

    // type enter to close the program
    string y;
    getline(cin, y);

    return 0;
}