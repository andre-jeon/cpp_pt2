#include <iostream>
#include <string>

using namespace std;

int main() {
    if(4 > 5)
        cout << "You'll never see this.";
    else
        cout << "Pork belly is yummy!\n";

    if(0)
        cout << "nope";

    else if(1)
        cout << "Witches are best in sand.";
    


    string z;
    getline(cin, z);

    return 0;
}