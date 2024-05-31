/*

File name: mystring.h
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
Last Modification: 12:23, Sunday, May 26, 2024
Description: 

This is the "function declaring" file that will define each of the CSTRING command equivalent functions I created in mystring.cpp.

*/

#ifndef MYSTRING_H
#define MYSTRING_H

int mystrlen(const char *s);
int mystrcmp(const char *s1, const char *s2);
char *mystrcpy(char *s1, const char *s2);
char *mystrcat(char *s1, const char *s2);
char *mystrrchr(const char *pc, int iChar);

#endif


