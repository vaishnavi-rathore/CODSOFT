#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess, attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        // Get user's guess
        cout << "Enter your guess (between 1 and 100): ";
        cin >> guess;

        // Increment the attempts count
        attempts++;

        // Provide feedback on the guess
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
