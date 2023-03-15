#include <iostream>
using namespace std;


int add(int x) {
    int y;
    cout << "What would you like to add to" << x;
    cin >> y;
    return x + y;
}

int main()
{
    int s = 0;
    bool i;
    string x;
    // int i; 
    cout << " \n Would you like to keep going: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    if (x == "y"){i = true;};
    while (i) {
        int s = add(s);
        cout << s;


        cout << " \n Would you like to keep going: "; // Type a number and press enter
        cin >> x; // Get user input from the keyboard
        if (x != "y"){i = false;};
    }
}