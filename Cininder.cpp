/*

Header : 
*--------------------------------------------------------------*
| Julio Franco Gonzalez                                        |
| Estudiante 801.13.2416                                       |
*--------------------------------------------------------------*
Description : 
*--------------------------------------------------------------*
| Given the Radious of the base of a Cilinder and its height,  | 
| this program  will be able to calculate and display its      |
| Radious, Height, Area and Volume and display them            |
*--------------------------------------------------------------*
Pseudocode :  
*--------------------------------------------------------------*
| 1. Input the Cilinder's Radious and Height.                  |
|                                                              |
| 2. Calculate the Area, store it in Area.                     |
|                                                              |
| 3. Calculate the Volume, store it in Volume.                 |
|                                                              |
| 4. Calculate the , store it in Volume.                       |
|                                                              |
| 5. Output the Radious, Height, Area and the Volume.          |
*--------------------------------------------------------------*

*/

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main()
{
  
  // Define Variables . . . . . . . . . . . . . . . . . . . . . .

  double Radious ;  // Cinlinder's Radious
  double Height ;   // Cilinder's Height
  double Area ;     // Cilinder's Area
  double Volume ;   // Ciliunder's Volume

  // Input the cilinder's Radious . . . . . . . . . . . . . . . .

  cout << endl << " Please enter the Cilinder's Radious --> " ;
  cin >> Radious ;

  // Input the Height of the cilinder . . . . . . . . . . . . . . 
  
  cout << " Please enter the Cilinder's Height ---> " ;
  cin >> Height ;

  // Calculate the Area of the cilinder . . . . . . . . . . . . .
  
  Area = 2.0 * M_PI * Radious * (Radious + Height) ; 

  // Calculate the Volume of the cilinder . . . . . . . . . . . . 
  
  Volume = M_PI * Radious * pow(Radious, 2.0) * Height ;

  // Output the Radious, Height, Area and the Volume. . . . . . .
  
  system("clear") ;
  cout  << fixed << setprecision(5);

  cout << "\n\t<<< CILINDER DIMENTIONS >>>\n"
       << "\n The Radious of the cilinder is ===== " << setw(10) << Radious
       << "\n The Height of the cilinder is ====== " << setw(10) << Height
       << "\n The Area of the cilinder is ======== " << setw(10) << Area
       << "\n The Volume of the cilinder is ====== " << setw(10) << Volume
       << endl << endl ;

  return EXIT_SUCCESS;

}