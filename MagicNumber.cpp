#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int guess;
    int magic = 67;
    // for(guess = 0; guess!= magic; ){
    //     cout << "Guess the magic number: \n";
    //     cin >> guess;
    // }

    // Using Do-while

    do
    {
        cout << "Guess the magic number: \n";
        if (!(cin >> guess)) // if input fails
        {
            cin.clear();                                         // reset fail state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }
    } while (guess != magic);
    cout << "6666666666677777777777777";
}