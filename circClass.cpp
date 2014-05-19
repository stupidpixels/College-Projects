/* Circle Class Definition.
------------------------------------------------------------------------------*/
class Circle {

/* Data Members.
------------------------------------------------------------------------------*/
  private:
    double Radius ;
    double Diameter ;

/* Function Members.
------------------------------------------------------------------------------*/
  public: 
    void setRad (double) ;
    void setDiam(double) ;

    double getRad () const ;
    double getDiam() const ;
    double getCirc() const ;
    double getArea() const ;
};

/* Define Setters.
------------------------------------------------------------------------------*/
const double PI = 3.14159 ; 

void Circle::setRad(double R) {

  Radius = (R > 0.0) ? R : 0.0 ;
}

void Circle::setDiam(double D) {

  Diameter = (D > 0.0) ? D : 0.0 ;
}

/* Define Getters.
------------------------------------------------------------------------------*/
double Circle::getRad() const {

  return Radius ;
}

double Circle::getDiam() const {

  return 2 * Radius ;
}

/* Calculates Circumference & Area.
------------------------------------------------------------------------------*/
double Circle::getCirc() const {

  return 2 * PI * Radius ;
}

double Circle::getArea() const {

  return PI * (Radius * Radius) ;
}

/* Class Client.
------------------------------------------------------------------------------*/
#include <iostream>
#include <iomanip>

using namespace std ;
  
Circle Read(void) ;
void Output(Circle) ;

int main() {

  Circle Ring ;

  Ring = Read() ;

  Output(Ring) ;

  return EXIT_SUCCESS ;
} 

/* Read Function Definition.
------------------------------------------------------------------------------*/
Circle Read(void) {

  Circle temp ;

  double value ;

  cout << "Please enter the Radius of the Circle ---> " ;
  cin  >> value ;

  temp.setRad(value) ;

  return temp ;
}

/* Output Function Definition.
------------------------------------------------------------------------------*/
void Output(Circle Ring) {

  cout << fixed << setprecision(3) ;
  cout << "\n\t<<< CIRCLE DIMENTIONS >>> \n\n" ;

  cout << "The Radius is   ========= " << setw(8) << Ring.getRad()  << endl ;
  cout << "The Diameter is ========= " << setw(8) << Ring.getDiam() << endl ;

  cout << "The Circumference is ==== " << setw(8) << Ring.getCirc() << endl ;
  cout << "The Area is     ========= " << setw(8) << Ring.getArea() << endl ;
}