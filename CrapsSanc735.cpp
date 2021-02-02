/*
* Roberto Sanchez, sanc735@usc.edu
* ITP 165, Spring 2021
* L03 Craps
*/

#include <iostream>
using namespace std;

int main()
{
    string isFirstRoll; 
    int firstRollSum; // dice roll sum for the first roll
    int diceRollSum; // sum of dice roll for current round

    cout << "Hello, Welcome to Craps City.\n";
    cout << "Is this your first roll? (y/n) ";
    cin >> isFirstRoll;

    // this is user's first round
    if (isFirstRoll == "y") {
        cout << "\nAlrighty, let's play! Please roll two dice.\n";
        cout << "What is the sum of both dice? ";
        cin >> diceRollSum; // sum of roll for current round
        
        // if user rolled winning sum - win game
        if ((diceRollSum == 7) || (diceRollSum == 11)) {
            cout << "\nYOU WON!\n";
        }
        // if user rolled losing sum - lose game
        else if ((diceRollSum == 2) || (diceRollSum == 3) || (diceRollSum == 12)) {
            cout << "\nYOU LOSE!\n";
        }
        // otherwise continue to next round
        else {
            cout << "\nKeep playing.!\n";
            cout << "Please restart the program to continue to the next round.\n";
        }
    }
    // this is not the user's first round
    else if (isFirstRoll == "n") {
        cout << "\nAlrighty, let's continue playing!\n";
        cout << "What is the sum of your first roll? ";
        cin >> firstRollSum; // sum of first roll

        cout << "\nPlease roll two dice again.\n";
        cout << "What is the sum of both dice? ";
        cin >> diceRollSum; // sum of roll for current round


        if (diceRollSum == firstRollSum) {
            cout << "\nYOU WON!\n";
        }
        else if (diceRollSum == 7) {
            cout << "\nYOU LOSE!\n";
        }
        else {
            cout << "\nKeep playing!\n";
            cout << "Please restart the program to continue to the next round.\n";
        }
    }
    // user input did not match the available options (y/n)
    // stop game
    else {
        cout << "\nProgram could not understand your input.\n"
        << "Please restart the program and try again.\n";
    }
    return 0;
}
