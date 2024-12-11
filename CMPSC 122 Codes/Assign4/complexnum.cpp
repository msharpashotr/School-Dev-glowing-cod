/*

File name: complexnum.cpp

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

DECLARATION FILE: This program makes use of a complex number class to execute several complex number operations. The user
enters either one or two complex numbers, and the output of the appropriate mathematical function is 
shown in a readable format. The file now includes overloaded operators, and additional division function.

*/

#include <cmath>
#include "complexnum.h"


// Default constructor sets both components to 0.
Complexno::Complexno() : real (0.0), complex (0.0) {}

// Second constructor - creates a complex number of equal value to a real.
Complexno::Complexno(double r) : real(r), complex(0.0) {}

// Standard constructor - sets both of the real and complex components based
Complexno::Complexno(double r, double c) : real(r), complex(c) {}

// (1) --------------------------------- Add -----------------------
// Adds two complex numbers and returns the answer.

Complexno operator+(Complexno num1, Complexno num2) {
    return Complexno(num1.real + num2.real, num1.complex + num2.complex);
}

// (2) --------------------------------- Subtract------------------
// Subtracts two complex numbers and returns the answer.

Complexno operator-(Complexno num1, Complexno num2) {
    return Complexno(num1.real - num2.real, num1.complex - num2.complex);
}

// (3) --------------------------------- Multiply------------------
// Multiplies two complex numbers and returns this answer.
Complexno operator*(Complexno num1, Complexno num2) {
    return Complexno((num1.real * num2.real) - (num1.complex * num2.complex), (num1.real * num2.complex) + (num1.complex * num2.real));
}

// (4) --------------------------------- Divide ------------------
// Divides two complex numbers and returns the answer.

Complexno operator/(Complexno num1, Complexno num2) {
    double divisor = num2.real * num2.real + num2.complex * num2.complex;
    return Complexno((num1.real * num2.real + num1.complex * num2.complex) / divisor, (num1.complex * num2.real - num1.real * num2.complex) / divisor);
}

// (5) --------------------------------- Magnitude ------------------
// Computes and returns the magnitude of a complex number.

double Complexno::magnitude() {
    return sqrt((real * real) + (complex * complex));
}

// (6) --------------------------------- Negates ------------------
// Negates a complex number and returns the answer.
Complexno Complexno::operator-() {
    return Complexno(-real, -complex);
}

// ---------------------------------ostream------------------------
// Overloaded << to allow for printing of the complex numbers

ostream& operator<<(ostream &output, Complexno &answer) {
    output << "(" << answer.real << (answer.complex >= 0 ? "+" : "") << answer.complex << "i)";
    return output;
}

// --------------------------------- Print ------------------
// Prints out a complex number in a readable format.

void Complexno::shownum() {
    cout << *this << endl;
}

// Reads in a complex number from the user.
void Complexno::enternum() {
    cout << "Enter the real part of the complex number: ";
    cin >> real;
    cout << "Enter the imaginary part of the complex number: ";
    cin >> complex;
}

// Displays the answer to a complex number operation.
void display(Complexno n1, Complexno n2, Complexno n3, char op) {
    cout << n1 << " " << op << " " << n2 << " = " << n3 << endl;
}
