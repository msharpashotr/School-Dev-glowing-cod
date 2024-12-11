// Meng Su
// 6/05/22
// Program Description: The complexno class provides an abstract data type
//                      to deal with complex numbers. The program I have
//                      written simply demonstrates the functionality of
//                      the class. The class allows the user to add, subtract,
//                      multiply and divide complex numbers, as well as
//                      compute the value of a complex number to the power
//                      of a positive integer.

// You can paste your header part of the documentation and sample outputs in complexnum.h file

#include "complexnum.h"   // please use this new header file name instead of complexno.h for assignment 4.
#include "complexnum.cpp"

int main() {

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(1);

  Complexno n1, n2, n3;
  cout << "Welcome to the complex number calculator.\n";

  // Display menu options and read in the user's choice.
  int choice;
  while(true){
      cout << "\n Would you like to\n";
      cout << "1. Add 2 complex numbers.\n";
      cout << "2. Subtract 2 complex numbers.\n";
      cout << "3. Multiply 2 complex numbers.\n";
      cout << "4. Divide 2 complex numbers.\n";
      cout << "5. Find the magnitude of a complex number.\n";
      cout << "6. Negate a complex number\n";
      cout << "7. Quit\n\n";
      cin >> choice;
      if (choice==7) {
          cout << "You quit the calculator.\n";
          return (0);
      }

      // Read in the necessary complex numbers from the user.
      cout << "Enter the first complex number : \n";
      n1.enternum();
      if (choice<5) {
        cout << "Enter the second complex number : \n";
        n2.enternum();
      }
      
      // Execute the appropriate choice.
      if (choice == 1) {
        n3 = n1 + n2;
        cout << n1 << " + " << n2 << " = " << n3 << endl;
      }
      else if (choice == 2) {
        n3 = n1 - n2;
        cout << n1 << " - " << n2 << " = " << n3 << endl;
      }
      else if (choice == 3) {
        n3 = n1 * n2;
        cout << n1 << " * " << n2 << " = " << n3 << endl;
      }
      else if (choice == 4) {
        n3 = n1 / n2;
        cout << n1 << " / " << n2 << " = " << n3 << endl;
      }
      else if (choice == 5) {
        cout << "|" << n1 << "| = " << n1.magnitude() << endl;
      }
      else if (choice==6) {
        n3 = -n1;
        cout << "-" << n1 << " = " << n3 << endl;
      }
      else
          cout << "Sorry, that was not a valid choice. Please try it again:\n";
  }
    return 0;
}


/* Please copy and paste your sample run as comments here:

Welcome to the complex number calculator.

 Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Divide 2 complex numbers.
5. Find the magnitude of a complex number.
6. Negate a complex number
7. Quit

1
Enter the first complex number : 
Enter the real part of the complex number: 1
Enter the imaginary part of the complex number: 2
Enter the second complex number : 
Enter the real part of the complex number: 3
Enter the imaginary part of the complex number: 4
(1.0+2.0i) + (3.0+4.0i) = (4.0+6.0i)

 Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Divide 2 complex numbers.
5. Find the magnitude of a complex number.
6. Negate a complex number
7. Quit

2
Enter the first complex number : 
Enter the real part of the complex number: 4
Enter the imaginary part of the complex number: -3
Enter the second complex number : 
Enter the real part of the complex number: 2
Enter the imaginary part of the complex number: -1
(4.0-3.0i) - (2.0-1.0i) = (2.0-2.0i)

 Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Divide 2 complex numbers.
5. Find the magnitude of a complex number.
6. Negate a complex number
7. Quit

3
Enter the first complex number : 
Enter the real part of the complex number: 5
Enter the imaginary part of the complex number: 6
Enter the second complex number : 
Enter the real part of the complex number: 7
Enter the imaginary part of the complex number: 8
(5.0+6.0i) * (7.0+8.0i) = (-13.0+82.0i)

 Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Divide 2 complex numbers.
5. Find the magnitude of a complex number.
6. Negate a complex number
7. Quit

4
Enter the first complex number : 
Enter the real part of the complex number: 8
Enter the imaginary part of the complex number: 7
Enter the second complex number : 
Enter the real part of the complex number: 6
Enter the imaginary part of the complex number: 5
(8.0+7.0i) / (6.0+5.0i) = (1.4+0.0i)

 Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Divide 2 complex numbers.
5. Find the magnitude of a complex number.
6. Negate a complex number
7. Quit

5
Enter the first complex number : 
Enter the real part of the complex number: 2.3
Enter the imaginary part of the complex number: 4.9
|(2.3+4.9i)| = 5.4

 Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Divide 2 complex numbers.
5. Find the magnitude of a complex number.
6. Negate a complex number
7. Quit

6
Enter the first complex number : 
Enter the real part of the complex number: -8
Enter the imaginary part of the complex number: 3
-(-8.0+3.0i) = (8.0-3.0i)

 Would you like to
1. Add 2 complex numbers.
2. Subtract 2 complex numbers.
3. Multiply 2 complex numbers.
4. Divide 2 complex numbers.
5. Find the magnitude of a complex number.
6. Negate a complex number
7. Quit

7
You quit the calculator.

*/
