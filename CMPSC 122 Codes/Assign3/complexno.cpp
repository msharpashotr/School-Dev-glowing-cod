/*

File name: complexno.cpp

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
Due: 23:59, Sunday, June 2, 2024
Last Modification: 21:30, Thursday, May 30, 2024
Description: 

DECLARATION FILE: This program makes use of a complex number class to execute several complex number operations. The user
enters either one or two complex numbers, and the output of the appropriate mathematical function is 
shown in a readable format.

*/

#include "complexno.h"


// Default constructor sets both components to 0.
Complexno::Complexno() {
  real = 0.0;
  complex = 0.0;
}

// Second constructor - creates a complex number of equal value to a real.
Complexno::Complexno(double r) {
  real = r;
  complex = 0.0;
}

// Standard constructor - sets both of the real and complex components based

Complexno::Complexno(double r, double c) {
real = r;
complex = c;
}

// (1) --------------------------------- Add -----------------------
// Adds two complex numbers and returns the answer.

Complexno Complexno::add(const Complexno& num2) {
  Complexno answer;
  answer.real = real + num2.real;
  answer.complex = complex + num2.complex;
  return answer;
}

// (2) --------------------------------- subtract------------------
// Defien sub to subtracts two complex numbers and returns the answer.

Complexno Complexno::sub(const Complexno& num2) {
  Complexno answer;
  answer.real = real - num2.real;
  answer.complex = complex - num2.complex;
  return answer;
}

// (3) --------------------------------- Multiply------------------
// Multiplies two complex numbers and returns this answer.
Complexno Complexno::mult(const Complexno& num2) {
  Complexno answer;
  answer.real = (real * num2.real)-(complex * num2.complex);
  answer.complex = (real * num2.complex)+(num2.real * complex);
  return answer;
}

// (4) --------------------------------- Magnitude ------------------
// Computes and returns the magnitude of a complex number.
double Complexno::magnitude() {
  double answer;
  answer = sqrt((real * real)+(complex * complex));
  return answer;
}

// (5) --------------------------------- Negates ------------------
// Negates a complex number.
Complexno Complexno::negate() {
  Complexno answer;
  answer.real = -real;
  answer.complex = -complex;
  return answer;
}

// --------------------------------- Print ------------------
// Prints out a complex number in a readable format.

void Complexno::shownum() {

  if(complex == 0){
  cout << "(" << real << ")";
  }

  else{
  if(complex > 0)
  cout << "(" << real << "+" << complex << "i" << ")";

  else
  cout << "(" << real << complex << "i" << ")";
  }
}



// Reads in a complex number from the user.
void Complexno::enternum() {

  cout << "Enter the real part of the complex number : ";
  cin >> real;
  cout << "Enter the imaginary part of the complex number : ";
  cin >> complex;
}

// Displays the answer to a complex number operation.
void display(Complexno n1, Complexno n2, Complexno n3, char op) {

  n1.shownum();
  cout << " " << op << " ";
  n2.shownum();
  cout << " = ";
  n3.shownum();
  cout << endl;
}