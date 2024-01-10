#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));
    int actualnumber = (rand() % 100) + 1;
    int guessednumber;
    int attempts = 0;
    cout << "Welcome to number guessing game" << endl;
    cout << "Guessing number range is in between (1-100)" << endl;
    do
    {
        cout << "Guessed Number is :" << endl;
        cin >> guessednumber;
        if (guessednumber > actualnumber)
        {
            cout << "The guess is too high.Try Again!!" << endl;
        }
        else if (guessednumber < actualnumber)
        {
            cout << "The guess is too low.Try Again!!" << endl;
        }
        else
        {
            cout << "You won the game in " << attempts + 1 << " attempts " << endl;
        }
        attempts++;
    } while (guessednumber != actualnumber);

    return 0;
}