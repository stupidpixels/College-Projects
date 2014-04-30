/* Rectangle Class Definition.
------------------------------------------------------------------------------*/  
class Rectangle {

/* Data Members.
 -----------------------------------------------------------------------------*/
  private:
    double Width  ;
    double Length ;

/* Function Members.
------------------------------------------------------------------------------*/  
  public:
    void setWidth(double)  ;
    void setLength(double) ;

    double getWidth()  const ;
    double getLength() const ;

    double getPeri() const ;
    double getArea() const ;
} ;

/* Define Setters.
------------------------------------------------------------------------------*/  
void Rectangle::setWidth(double W)  {

  Width = (W > 0.0) ? W : 0.0 ;
}

void Rectangle::setLength(double L) {

  Length = (L > 0.0) ? L : 0.0 ;
}

/* Define Getters.
------------------------------------------------------------------------------*/  
double Rectangle::getWidth()  const {

  return Width ;
}

double Rectangle::getLength() const {

  return Length ;
}

/* Calculate Area & Perimeter.
------------------------------------------------------------------------------*/
double Rectangle::getPeri() const{

  return 2.0 * (Width + Length) ;
} 

double Rectangle::getArea() const {

  return Width * Length ;
}

/* Client Definition.
------------------------------------------------------------------------------*/  
#include <iostream>
#include <iomanip>

using namespace std ;

Rectangle Read(void) ;
void Output(Rectangle) ;

int main() {

  Rectangle BOX ;

  BOX = Read() ;

  Output(BOX) ;

  return EXIT_SUCCESS ;
}

/* Defining Reading Function
------------------------------------------------------------------------------*/
Rectangle Read(void) {

  Rectangle temp ;

  double value ;
  
  cout << "Enter the Rectangles Width -----> " ;
  cin  >> value ;

  temp.setWidth(value) ;

  cout << "Enter the Rectangles Length ----> " ;
  cin  >> value ;

  temp.setLength(value) ;

  return temp ;
}
/* Defining Output Function.
------------------------------------------------------------------------------*/
void Output(Rectangle R) {

  cout << fixed << setprecision(3) ;
  cout << "\n\t<<< RECTANGLE DIMENTIONS >>> \n\n" ;

  cout << "The Rectangles Width is ====== " << setw(8) << R.getWidth() << endl ;
  cout << "The Rectangles Length is ===== " << setw(8) << R.getLength()<< endl ;
  
  cout << "The Rectangles Perimeter is == " << setw(8) << R.getPeri() << endl ;
  cout << "The Rectangles Area is ======= " << setw(8) << R.getArea() << endl ;
}