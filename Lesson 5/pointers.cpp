#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[] = { 1, 2, 3 };
    int* p1 = &a[0];

    cout << *p1 << endl;
    cout << p1[0] << endl;
    cout << p1[1] << endl;
    cout << p1[2] << endl;
    cout << ' ' << endl;
    cout << a << endl;
    cout << p1 << endl;
    cout << p1 + 1 << endl;
    cout << &p1[1] << endl;

    int b = 777;
    int* p2 = &b;
    cout << p2[0] << endl;

    string y;
    getline(cin, y);

    return 0;
}