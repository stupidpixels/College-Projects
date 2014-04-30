/*
   *----------------------------------------------------------------------------*
  | Julio Franco González - 801.13.2416                                          |
  | This is a sample class for any rectangle that the user input                 |
  | Class - Rectangle                   										                     |
  | Variables - width, height, Input0, Input1                                    |
  | Functions - set_height, set_width, get_height, get_width, perimeter, area    |
  | Objets - rect                                                                |
   *----------------------------------------------------------------------------*
*/

#include <iostream>
using namespace std;


class Rectangle {  // Class Definition.
    
  double width ;   // Variable definition.
  double height ;  // Variable definition.

public : // Defining the functions that im going to use for the object.

  double set_width(double) ;
	double set_height(double) ;

	double get_width() ;
	double get_height() ;

	double perimeter() ;
  double area() ;
} ;

// Setting the height of the object with the set_height function.
double Rectangle::set_height(double Input0) {
	
  height = Input0 ;
}

// Setting the width of the object with the set_width function.
double Rectangle::set_width(double Input1){
	
  width = Input1 ;
}

// Setting the perimeter function to be 2 times the width + 2 times the height of the object.
double Rectangle::perimeter(){

	return 2 * width + 2 * height ;
}

// Setting the area function to be the width times the height of the object.
double Rectangle::area() {
  
	return width * height ;
}

int main() {  // Main function.
  double Input0 ;  // Setting the variables for the inputs.
  double Input1 ;

  Rectangle rect; // Setting the object from the class Rectangle.

  cout << "Give me the Height of your Rectangle :" << endl ; // Asking for the Height of rect.
  cin >> Input0 ;  // Recive it and store it in Input0.
  rect.set_height(Input0) ;  // Setting the height of rect with the set_height function.
  
  cout << "Give me the Width of your Rectangle :" << endl ;  // Asking for the Width of rect.
  cin >> Input1;  // Recive it and store it in Input1.
  rect.set_width(Input1) ;   // Setting the width of rect with the set_width function.

  cout << "Perimeter: " << rect.perimeter() << endl ;  // Print the perimeter of rect.
  cout << "Area: " << rect.area() << endl ;  // Print the area of rect.
  
  return 0 ;
}