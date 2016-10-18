#include <cmath>
#include "circle.h"

#ifndef CYLINDER_H
#define CYLINDER_H

/* Cylinder Class Definition.
------------------------------------------------------------------------------*/
class Cylinder : public Circle {

/* Data Members.
------------------------------------------------------------------------------*/
  private:
    double height ;

  public:
/* Function Members.
------------------------------------------------------------------------------*/
    Cylinder ();
    ~Cylinder();

    void setDimentions(double, double) ;

    double getHeight() ;
    double getVolume() ;
    double getArea  () ;
};

#endif // CYLINDER_H

/* Cylinder Class Definition.
------------------------------------------------------------------------------*/

// Constructor.
Cylinder::Cylinder() : height(0.0) {}

// Destructor.
Cylinder::~Cylinder() {}

// Getting Dimentions.
void Cylinder::setDimentions(double r, double h) {

    radius = (r > 0.0) ? r : 0.0 ;
    height = (h > 0.0) ? h : 0.0 ;
}

double Cylinder::getHeight() {

    return height ;
}

double Cylinder::getVolume() {

    return M_PI * (radius * radius) * height ;
}

double Cylinder::getArea() {

    return (2 * M_PI * radius * height) + (2 * M_PI * (radius * radius)) ;
}