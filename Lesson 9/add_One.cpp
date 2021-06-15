#include <iostream>
#include <string>

using namespace std;

void add_One(int* i) {
    (*i)++; // increment value at *i
    *i++; // next location in memory
    (*i)++; // BAD! Alters unknown value
}

