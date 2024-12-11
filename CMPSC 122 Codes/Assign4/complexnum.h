/* 

File name: complexnum.h

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
Due: 23:59, Sunday, June 9, 2024
Last Modification: 06:28, Thursday, June 7, 2024
Description: 

HEADER FILE: This program makes use of a complex number class to execute several complex number operations. The user
enters either one or two complex numbers, and the output of the appropriate mathematical function is 
shown in a readable format. The file now includes a revised negation function, and additional division function.

*/

#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
using namespace std;

class Complexno {
  public :
    Complexno();                            // Default constructor
    Complexno(double r);                    // Second constructor - creates a complex number of equal value to a real.
    Complexno(double r, double c);          // Standard constructor - sets both of the real and complex components based on parameters.  
    
    friend Complexno operator+(Complexno, Complexno);   // Adds two complex numbers overload
    friend Complexno operator-(Complexno, Complexno);   // Subtracts two complex numbers overload
    friend Complexno operator*(Complexno, Complexno);   // Multiplies two complex numbers overload
    friend Complexno operator/(Complexno, Complexno);   // Divides two complex numbers overload
    friend ostream& operator<<(ostream &, Complexno &); // Insertion operator overload
    Complexno operator-();                              // Negates a complex number overload
    
    double magnitude();                     // Computes and returns the magnitude of a complex number.
    void shownum();                         // Prints out a complex number in a readable format.
    void enternum();                        // Reads in a complex number from the user.
  
  private :
    double real;                            // Stores real component of complex number
    double complex;                         // Stores complex component of complex number
};

// Displays the answer to a complex number operation.
void display(Complexno, Complexno, Complexno, char);

#endif
