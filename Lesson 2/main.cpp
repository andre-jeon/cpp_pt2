#include <iostream>
using namespace std;

int main() {
    /*
    // three different ways to represent variables
    int x = 0;
    int y(0);
    int z{0};

    int cars = 14;
    int debt = -1000;
    float cash = 2.32;
    double credit = 32.32;
    char a = 'a';

    // string of characters
    char* sandwitch = "ham";
    bool does_she_like_me = true;
    // auto do_i_have_pants_on = false;
    // auto blank_check = 200.00;
    int over_9000 = INT_MAX;
    cout << over_9000 << endl;
    */
    // cout << sizeof(char) << endl;
    // cout << sizeof(int) << endl;
    // cout << sizeof(float) << endl;
    // cout << sizeof(double) << endl;
    // cout << sizeof(bool) << endl;

    // cout << ' ' << endl;
    // cout << sizeof(short int) << endl;
    // cout << sizeof(long int) << endl;
    // cout << sizeof(long long int) << endl;

    // unsigned can't be negative
    // unsigned start from the end of the spectrum, maximum value it can hold
    signed int x = -1;
    unsigned int y = -1;

    cout << x << endl;
    cout << y << endl;

    cout << INT_MIN << endl;
    cout << INT_MAX << endl;
    cout << LONG_MIN << endl;
    cout << LONG_MAX << endl;
    cout << SHRT_MIN << endl;
    cout << SHRT_MAX << endl;
    cout << 0 << endl;
    cout << USHRT_MAX << endl;
    
    return 0;
}