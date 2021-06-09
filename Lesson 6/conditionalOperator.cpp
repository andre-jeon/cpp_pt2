#include <iostream>
#include <string>

using namespace std;

int main() {
    // bool condition ? option 1 : option 2
    // bool condition = the expression to be evaluated
    // ? = to begin this analysis
    // option 1 or option 2 based the evalution
    // if true a not false b
    
    // is 5 greater than 4? 'a' since it's true
    5 > 4 ? cout << 'a' : cout << 'b';

    string z;
    getline(cin, z);

    return 0;
}