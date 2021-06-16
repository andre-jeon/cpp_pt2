#include <iostream>

int main() {
    const int i = 5;
    int j = 8;
    i = 4; // ERRPR: can't change const

    int arr1[i];
    int arr2[j]; // ERROR: needs to be const
    int* arr3 = new int[j];

    const int* a;
    int const* b;
    int* const c = new int(4);
    void my_Function() const;

    return 0;
}