#include <iostream>
#include <string>
using namespace std;

int main() {
    int my_array[2];
    my_array[0] = 0;
    my_array[1] = 1;

    int my_array2[3] = { 0, 1, 2 };
    int my_array3[3] = { 4 };
    int my_array4[] {7,7,7};
    int my_array5[4]{};

    cout << my_array5[0] << endl;

    // creating character array
    char a[] = "asdf";
    char b[] = "asdf";
    

    string y;
    getline(cin, y);
    return 0;
}