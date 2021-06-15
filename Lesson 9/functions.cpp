#include <iostream>
#include <string>

using namespace std;

void print_Ham() {
    cout << "ham\n";
}

int main() {
    print_Ham();

    string z;
    getline(cin, z);
    return 0;
}