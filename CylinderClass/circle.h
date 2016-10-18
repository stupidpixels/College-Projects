#include <cmath>

#ifndef CIRCLE_H
#define CIRCLE_H

/* Circle Class Definition.
------------------------------------------------------------------------------*/
class Circle {

/* Data Members.
 -----------------------------------------------------------------------------*/
  protected:
    double radius ;

/* Function Members.
------------------------------------------------------------------------------*/
  public:
    Circle() ;
    ~Circle() ;

    void Read() ;
    void setRadius(double)  ;

    double getArea    () ;
    double getRadius  () ;
    double getCircum  () ;
    double getDiameter() ;

};

#endif // CIRCLE_H

/* Constructors.
------------------------------------------------------------------------------*/

Circle::Circle() : radius(0.0) {}

/* Destructor.
------------------------------------------------------------------------------*/
Circle::~Circle() {}

/* Define Setters.
------------------------------------------------------------------------------*/
void Circle::setRadius(double R)  {

  radius = (R > 0.0) ? R : 0.0 ;
}

/* Define Getters.
------------------------------------------------------------------------------*/
double Circle::getRadius()  {

  return radius ;
}

double Circle::getDiameter()  {

  return radius * 2.0 ;
}

/* Calculate Circumference & Area.
------------------------------------------------------------------------------*/
double Circle::getCircum() {

  return 2.0 * M_PI * radius ;
}

double Circle::getArea()   {

  return M_PI * (radius * radius) ;
}