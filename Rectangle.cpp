/*

Header :
*---------------------------------------------------------------------*
| Julio Franco Gonzalez                                               |
| Estudiante 801.13.2416                                              |
*---------------------------------------------------------------------*
Description : 
*---------------------------------------------------------------------*
| Given the Lenght and Width of a Rectangle, this program will        |
| calculate the Perimeter and the Area of the Rectangle and display   |
| them to the user.                                                   |
*---------------------------------------------------------------------*
Pseudocode :
*---------------------------------------------------------------------*
| 1. Ask the user to INPUT the Lenght of the Rectangle, store it in L.|
|                                                                     |
| 2. Ask the user to INPUT the Width of the Rectangle, store it in W. |
|                                                                     |
| 3. Calculate the Perimeter ( 2*L + 2*W ), store it in P.            |
|                                                                     |
| 4. Calculate the Area ( L * W ), store it in A.                     |
|                                                                     |
| 5. Output the Lenght, Width, Perimeter and Area to the User.        |
*---------------------------------------------------------------------*

*/

#include <iostream>
using namespace std;

int main()
{
  double L;
  
  double W;
  
  double P;
  
  double A;

// Ask the user to IMPUT the Lenght of the Rectangle, store it in L.
  
  cout << " Please Enter the Lenght of the Rectangle : ";
  
  cin >> L;

// Ask the user to IMPUT the Width of the Rectangle, store it in W.
  
  cout << " Please Enter the Width of the Rectangle : ";
  
  cin >> W;

// Calculate the Perimeter ( 2*L + 2*W ), store it in P.
  
  P = (2 * L) + (2 * W);

// Calculate the Area ( L * W ), store it in A.
  
  A = L * W; 

// Output the Lenght, Width, Perimeter and Area to the User.

  cout << " The Lenght of the Rectangle is " << L << endl << endl;

  cout << " The Width of the Rectangle is " << W << endl << endl;
  
  cout << " The Perimeter of the Rectangle is " << P << endl << endl;
  
  cout << " The Area of the Rectangle is " << A << endl << endl;

  return 0;
}