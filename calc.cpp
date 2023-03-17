#include <iostream>
#include <cmath>
#include <random>

using namespace std;


// Adds the number given and the new number.
int add(int x) {
    int y;
    cout << "\n What would you like to add to " << x << " : ";
    cin >> y;
    return x + y;
}

// Subtracts the number given and the new number.
int sub(int x) {
    int y;
    cout << "\n What would you like to Subtact from " << x << " : ";
    cin >> y;
    return x - y;
}

// Divides the number given and the new number.
int div(int x) {
    int y;
    cout << "\n What would you like to Divide " << x << " By?: ";
    cin >> y;
    return x / y;
}

// Multiplies the number given and the new number.
int mult(int x) {
    int y;
    cout << "\n What would you like to multiply " << x << " By?: ";
    cin >> y;
    return x * y;
}


// Finds the radius from circumfrance.
int rad(int c){
    return c/(2*M_PI);
}

int main()
{
    // Here we define the variables.
    int s = 0;
    bool i = true;
    int total = 0;
    string usr_inp;
    string x;
    cout << "\n Please Enter Your First Number: ";
    cin >> total;

    // Here is the while loop that keeps going until the user hits anything but y.
    while (i) {

        cout << "\n Pick the operator you would like to use. (+ - / *): ";
        cin >> usr_inp;
        // This goes through each one you can add, and shows you the total after.
        if (usr_inp == "+")
        {
            total = add(total);
            cout << "\n Total: " << total;
        };
        if (usr_inp == "-")
        {
            total = sub(total);
            cout << "\n Total: " << total;
        };
        if (usr_inp == "/")
        {
            total = div(total);
            cout << "\n Total: " << total;
        };
        if (usr_inp == "*")
        {
            total = mult(total);
            cout << "\n Total: " << total;
        };


        cout << "It's radius would be " << rad(total) << " if you entered in the circumfrence";
        cout << " \n Would you like to keep going: "; // Type a number and press enter
        cin >> x; // Get user input from the keyboard
        if (x != "y"){i = false;};
    }

    cout << "\n alright let's play a new game I'm thinking of something between 1 and 100, if you guess it in 10 trys You WIN! otherwise you loose. What's your first guess?";
    int guess;
    cin >> guess;


    // Here I add take in a random number between 0 and 100
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0, 100);
    int the_number = distr(gen);
    int counter = 0;

    // Here I create a while loop that breaks whe you guess right or go over the guess limit.
    while (guess != the_number || counter == 9){
        if (guess > the_number){
            cout << "\n Your guess was too Big";
        }
        if (guess < the_number){
            cout << "\n Your guess was too Small";
        }
        cout << "\n What's your new number?";
        cin >> guess;
    }
    if (guess == the_number){
        cout << "\n \n Congrats you Won!!!!";
    }
    else{
        cout << " \n \n You lost better luck next time.";
    }
    
    cout << "\n \n Well this is the end.";
}