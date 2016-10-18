//
// Julio Franco Gonzalez 801.13.2416
// Cylinder Class derived from Circle Class
//
// Given the radius and height of a cylinder,
// this program will return the radius and height of the cylinder
// and calculates its diameter, circumference and area.
//

/* Client Definition.
------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include "cylinder.h"

using namespace std ;

Cylinder Read(void)   ;
void Output(Cylinder) ;
void Prompt() ;

int main() {

    Prompt() ;

    Cylinder C1 = Read() ;

    Output(C1) ;

    return EXIT_SUCCESS ;
}

/* Defining Reading Function
------------------------------------------------------------------------------*/
Cylinder Read(void) {

    Cylinder temp ;
    double  r, h ;

    cout << "Enter the Cylinder's radius : " ;
    cin  >> r ;

    cout << "Enter the Cylinder's height : " ;
    cin  >> h ;

    temp.setDimentions(r,h) ;

    return temp ;
}

/* Defining Output Function.
------------------------------------------------------------------------------*/
void Output(Cylinder c) {

  cout << fixed << setprecision(3) ;

  cout << "\n\t<<< CYLINDER DIMENTIONS >>>\n"

       << "\n The Radius of the cylinder is ==== " << setw(5) << c.getRadius()
       << "\n The Height of the cylinder is ==== " << setw(5) << c.getHeight()
       << "\n The Diameter of the cylinder is == " << setw(5) << c.getDiameter()
       << "\n The Area of the cylinder is ====== " << setw(5) << c.getArea  ()
       << "\n The Volume of the cylinder is ==== " << setw(5) << c.getVolume();

}