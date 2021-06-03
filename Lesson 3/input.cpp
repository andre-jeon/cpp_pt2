#include <iostream>
#include <string>
using namespace std;

int main() {

    /*
    string x;
    
    cout << "Please enter an Int: ";

    // passing in user's input
    cin >> x;

    cout << "Thank you!" << endl;
    */
    
    /*
    string y;

    cout << "Sandwich Type: ";
    getline(cin, y);
    cout << "Creating " << y;
    cout << " Sandwich." << endl;
    cout << "Press enter to exit...";
    // pressing enter to close the program
    getline(cin, y);
    */

    char x, y;
    int max_num_char = 100;
    char stop_at = ' ';

    x = cin.get();
    cin.ignore(max_num_char, stop_at);
    y = cin.get();
    cin.ignore(max_num_char, '\n');
    

    return 0;
}