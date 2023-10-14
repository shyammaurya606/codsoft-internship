
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));  // producing random number with the current time line
    
    int secretNumber = rand() % 100 + 1;  // to make our game in limitations ,so that one will not have to give infinite attempt to pridict the number.
    int userGuess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    
    // process the code of the game

    do {
        cout << "Guess the secret number (between 1 and 100): ";
        cin >> userGuess;
        attempts++;
        
        if (userGuess < secretNumber) {
            cout << "Your guess is too low. Try again." << endl;  //means enter the number greater than that .
        } else if (userGuess > secretNumber) {
            cout << "Your guess is too high. Try again." << endl; //means enter the number less than that.
        } else {
            cout << "Congratulations! You've correctly guessed the secret number " << secretNumber << " in " << attempts << " attempts!" << endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
