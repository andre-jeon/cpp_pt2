#include <iostream>

int main() {
    const int i = 5;
    int j = 8;
    i = 4; // ERRPR: can't change const

    int arr1[i];
    int arr2[j];
    


    return 0;
}