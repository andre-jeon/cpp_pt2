// Create a program that outputs "Changing return type, fingers crossed!".
// Then change the return type for the main function from 'int' to 'char' and instead of "reaturn 0;"
// type "return 'a'".

#include <iostream>

int main() {
    std::cout << "Changing return type, fingers crossed!\n";
    return 'a';
}