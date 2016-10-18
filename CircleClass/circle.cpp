/*
// Julio Franco Gonzalez 801.13.2416
// Circle Class
//
// This program, given the radius of a cirlce returns its radius and calculates
// its diameter, circumference and area.
*/

/* Client Definition.
------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include "circle.h"

using namespace std ;

Circle Read(void) ;
void Output(Circle) ;

int main() {

  Circle circle = Read() ;

  Output(circle) ;

  return EXIT_SUCCESS ;
}

/* Defining Reading Function
------------------------------------------------------------------------------*/
Circle Read(void) {

  Circle temp ;

  double value ;

  cout << "\nEnter the Circles Radius -----> " ;
  cin  >> value ;

  temp.setRadius(value) ;

  return temp ;
}
/* Defining Output Function.
------------------------------------------------------------------------------*/
void Output(Circle R) {

  cout << fixed << setprecision(3) ;
  cout << "\n   <<< CIRCLE DIMENTIONS >>> \n\n" ;

  cout << "The Radius is ========== " << setw(5) << R.getRadius()   << endl ;
  cout << "The Diameter is ======== " << setw(5) << R.getDiameter() << endl ;
  cout << "The Circumference is === " << setw(5) << R.getCircum()   << endl ;
  cout << "The Area is ============ " << setw(5) << R.getArea()     << endl ;
}