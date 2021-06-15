#include <iostream>
#include <string>

using namespace std;

void print_Ham();

int main() {
    print_Ham();
    
    string s;
    getline(cin, s);

    return 0;
}

void print_Ham() {
    cout << "ham";
}