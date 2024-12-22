#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Set up random number generator
    srand(time(0));
    int targetNumber = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've picked a number between 1 and 100. Can you guess it?" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < targetNumber) {
            cout << "Too low! Try a higher number.";
            if (targetNumber - userGuess <= 10) {
                cout << " (You're very close!)";
            }
            cout << endl;
        } else if (userGuess > targetNumber) {
            cout << "Too high! Try a lower number.";
            if (userGuess - targetNumber <= 10) {
                cout << " (You're very close!)";
            }
            cout << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}