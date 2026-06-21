#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int secretNumber = rand() % 100 + 1; // Generate random number between 1-100
    int guess = 0;
    int attempts = 0;
    cout << "========================================" << endl;
    cout << "   WELCOME TO NUMBER GUESSING GAME" << endl;
    cout << "========================================" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "Can you guess it?" << endl << endl;
    while (guess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number." << endl;
            attempts--; // Don't count invalid attempts
            continue;
        }
        
        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100!" << endl;
            attempts--;
            continue;
        }
        
        // Provide feedback
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } 
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } 
        else {
            cout << "\n========================================" << endl;
            cout << "   CONGRATULATIONS! YOU WON!" << endl;
            cout << "========================================" << endl;
            cout << "The secret number was: " << secretNumber << endl;
            cout << "Number of attempts: " << attempts << endl;
        }
        cout << endl;
    }
    
    return 0;
}
