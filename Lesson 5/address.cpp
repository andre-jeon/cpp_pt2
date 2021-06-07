#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 5;
    int& my_ref = a;

    // the value of a
    cout << a << endl;

    cout << my_ref << endl;

    // back and forth grabbing ref and deref data
    cout << *&a << endl;
    cout << &my_ref << endl;

    // // variable a's value
    // cout << a << endl;

    // // address of the value a
    // // some random place in memory
    // cout << &a << endl;

    // string b = "Ham Sandwitch";

    // // variable b's value
    // cout << b << endl;

    // // address of the value b
    // // some random place in memory
    // cout << &b << endl;

    string y;
    getline(cin, y);

    return 0;
}