/*

File name: assign1.cpp

Academic Integrity Statement: I certify that, while others may have assisted me in brain storming, debugging and validating 
this program, the program itself is my own work. I understand that submitting code which is the work of other individuals is a 
violation of the course Academic Integrity Policy and may result in a zero credit for the assignment, or course failure and a 
report to the Academic Dishonesty Board. I also understand that if I knowingly give my original work to another individual that
it could also result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. See 
Academic Integrity Procedural Guidelines (Links to an external site.) at: 
https://psbehrend.psu.edu/intranet/faculty-resources/academic-integrity/academic-integrity-procedural-guidelines

Assisted by and Assisted line numbers: NA

Name: Mitchell Readinger
PSUID: 925010227
PSU UserID: MAR5938
Course Title: CMPSC 122 Summer 2024
Due: 23:59, Sunday, May 19, 2024
Last Modification: 20:16, Friday, May 17, 2024
Description: The computer will pick a number between 50 and 150. The user and computer will take turns guessing the number with the 
computer indicating whether the number is too high or too low each time. Once the correct answer is guessed, the computer will display
a "correct number choosen" message, then start a new game.

*/

// Libraries used
#include <iostream>
#include <limits>   // for validating inputs
#include <cstdlib>  // for srand (seed random) and rand (random) functions
#include <ctime>    // time function for seed
using namespace std;

// Begin main function
 
int main(){

    // Declare variables
    int upperLimit = 150;
    int lowerLimit = 50;
	int numbr;
    int guess;
    int compGuess;
    char reply;
    bool inputIsInt = true;

    // Loop to keep playing game
    do{

        srand(unsigned(time(NULL))); // Seed random number for different number (given in module materials).
        numbr = rand() % ((upperLimit-lowerLimit)+1) + lowerLimit; // Random number between 50 and 150.

        cout << "\nWelcome to the Educated Guessing Game! In this game, the computer will generate a number between 50 and 150. " ;
        cout << "\nYou will then take turns with the computer trying to guess the number. \nOnce the correct number is guessed, you can choose to play again.\n\n" ;

        // Commented out test code. Below line identifies the correct answer during testing.
        //cout << "\nFOR TESTING: The correct answer is: " << numbr << endl;
        
        // Game loop
        do{

            // Loop to verify input.
            do{
                // Ask for user's guess.
                cout << "\nYour turn \nEnter a guess between 50 and 150 : ";
                cin >> guess;

                if (cin.peek() != '\n'){
                    cout << "You must enter a whole number.\nPlease try again.\n";
                    inputIsInt = false;
                }
                else if (guess > upperLimit || guess < lowerLimit){
                    cout << "You have entered a number outside of the range, please try again.\n";
                    inputIsInt = false;
                }

                else {
                    inputIsInt = true;
                    break;
                }

                // Clear failbit
                cin.clear();

                // Remove the rest of the line
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            } while (!inputIsInt);
                    
            // Conditions to determine user's guess, then feedback high, low, or correct.
            if (guess > numbr){
                cout << "\nYou were too high\n";}
            else if (guess < numbr){
                cout << "\nYou were too low\n";}
            else{   
                cout << "\nYou were correct!\n\n";
                break;}
                    
            // Random generator for computer's guess, ignorant of previous guesses.
            compGuess = rand() % ((upperLimit-lowerLimit)+1) + lowerLimit;

            // Show computer's guess.
            cout << "\nMy turn! \nMy guess is " << compGuess;

            // Conditions to determine computer's guess, then feedback high, low, or correct.
            if (compGuess > numbr){
                cout << "\nI was too high\n";}
            else if (compGuess < numbr){
                cout << "\nI was too low!\n";}
            else {
                cout << "\nI was correct!\n\n";
                break;}   

        
        }while (guess != numbr || compGuess != numbr);
            
        cout << "\nWould you like to play again? (Y/N)\n\n";
        cin >> reply;

    }while ((reply == 'Y') | (reply == 'y'));

	return 0;
}

/* Sample output:

Welcome to the Educated Guessing game! In this game, the computer will generate a number between 50 and 150. 
You will then take turns with the computer trying to guess the number. 
Once the correct number is guessed, you can choose to play again.


Your turn 
Enter a guess between 50 and 150 : 75

You were too low

My turn! 
My guess is 107
I was too high

Your turn 
Enter a guess between 50 and 150 : 104

You were correct!


Would you like to play again? (Y/N) N

*/