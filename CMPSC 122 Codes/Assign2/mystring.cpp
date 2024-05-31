/*

File name: mystring.cpp

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
Due: 23:59, Sunday, May 26, 2024
Last Modification: 13:09, Sunday, May 26, 2024
Description: 

This is the "function containing" file that contains each of the CSTRING command equivalent functions I create. 
The program will take in tweo strings from the user, and validate that they can fit into the array. The program then performs
an output of the first string length, a comparison between the two, reprints the contents of the strings, combines the strings,
and finally displays the last instance of 'i' forward in the buffer.


*/


#include "mystring.h" // Where my functions are declared
#include <limits> // For input validation loops
#include <iostream>
using namespace std;

// Start functions

// Function to calculate the length of string 1, returns the pointer position of characters that != '\0'.
int mystrlen(char *s) {
    int strLength = 0;
    while (*s != '\0') {
        strLength++;
        s++;
    }
    return strLength;
}

// Function that compares string 1 to string 2 by ASCII value, returns the difference in pointer address.
int mystrcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

// Function to copy string 1, takes each character in both strings into pointer dest, then retruns the contents of dest.
char *mystrcpy(char *s1, const char *s2) {
    char *dest = s1;
    while ((*s1++ = *s2++) != '\0');
    return dest;
}

// Function to combine two strings, indexes until the end of string 1, then combines until the end of string 2.
char *mystrcat(char *s1, const char *s2) {
    char *dest = s1;
    while (*s1 != '\0') {
        s1++;
    }
    while ((*s1++ = *s2++) != '\0');
    return dest;
}

// Function to point to last instance of 'i' char in buffer, indexes until buffer pointer is 'i' then returns from there until '/0'.
char *mystrrchr(char *buffer, int iChar) {
const char *p = NULL;
for(;;) {
    if (*buffer == (int)iChar)
        p = buffer;
    if (*buffer++ == '\0')
        return (char *)p;
    }
}

// End functions

int main() {

    // Declare variables
    const int size = 21; // Defines max characters + 1
    bool validInputStr1 = true; // Switch for string 1 input verification
    bool validInputStr2 = true; // Switch for string 2 input verification
    char str1[size]; // Define the array for string 1
    char str2[size]; // Define the array for string 2
    char reply; // Define user's reply to keep trying strings

    do{ // Loop until user inputs N.

        do{ // Input and verification loop for first string
            
            char c;
            cout << "\nEnter the first string.\n";
            cout << "Must be less than 20 characters: ";
            cin.get(str1, size); // Get the user input
            cin.get(c); // Get the last buffer character
        
            if(c != '\n'){ // Verify if input is within array limits
                cout << "Too many characters! Try again.\n\n";
                validInputStr1 = false;
            }

            else{
                validInputStr1 = true;
                break;
            }

            // Clear failbit
            cin.clear();
            // Remove the rest of the line
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        } while (!validInputStr1);

        do{  // Input and verification loop for second string
            
            char cc;
            cout << "\nEnter the second string.\n";
            cout << "Must be less than 20 characters: ";
            cin.get(str2, size); // Get the user input
            cin.get(cc); // Get the last buffer character

            if(cc != '\n'){ // Verify if input is within array limits
                cout << "Too many characters! Try again.\n\n";
                validInputStr2 = false;
            }

            else{
                validInputStr2 = true;
                break;
            }

            // Clear failbit
            cin.clear();
            // Remove the rest of the line
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

        } while(!validInputStr2);
    
        char buffer[42]; // Define an array large enough for both strings

        // Length of the first string output
        int strLength = mystrlen(str1);
        cout << "\nLength of string 1: " << strLength;

        // Compare strings output
        cout << "\n\nHere is a comparison of the strings via ASCII: ";
        int compare = mystrcmp(str1, str2);
        if (compare == 0) {
            cout << "String 1 = String 2\n";
        } else if (compare < 0) {
            cout << "String 1 < String 2\n";
        } else {
            cout << "String 1 > String 2\n";
        }

        // Copy string 1 from buffer output
        mystrcpy(buffer, str1);
        cout << "\nHere are the contents of string 1: " << buffer;

        // Copy string 2 from buffer output
        mystrcpy(buffer, str2);
        cout << "\nHere are the contents of string 2: " << buffer;

        // Combined strings output
        mystrcpy(buffer, str1);
        mystrcat(buffer, " ");
        mystrcat(buffer, str2);
        cout << "\nCombined strings: " << buffer << "\n";

        // Last instance of chr in buffer output
        if(mystrrchr(buffer, 'i')){
        cout << "\n\nHere is the last instance of i in the buffer: " << mystrrchr(buffer, 'i') << "\n\n";}
        
        else {
            cout << "\n\nThere is no 'i' here.\n\n\n"; // Handle when no 'i' exists.
        }

        cout << "Would you like to try more strings? (Y/N)\n\n";
        cin >> reply;

        // Clear failbit
        cin.clear();

        // Remove the rest of the line
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }while ((reply == 'Y') | (reply == 'y'));


return 0;
}

/*
Sample output:

Enter the first string.
Must be less than 20 characters: Mitch

Enter the second string.
Must be less than 20 characters: Readinger

Length of string 1: 5

Here is a comparison of the strings via ASCII: String 1 < String 2


Here are the contents of string 1: Mitch
Here are the contents of string 2: Readinger
Combined strings: Mitch Readinger


Here is the last instance of i in the buffer: inger

Would you like to try more strings? (Y/N)

y

Enter the first string.
Must be less than 20 characters: Readinger

Enter the second string.
Must be less than 20 characters: Mitch

Length of string 1: 9

Here is a comparison of the strings via ASCII: String 1 > String 2


Here are the contents of string 1: Readinger
Here are the contents of string 2: Mitch
Combined strings: Readinger Mitch


Here is the last instance of i in the buffer: itch

Would you like to try more strings? (Y/N)

N

*/