//
// Julio Franco Gonzalez 801.13.2416
// Complex Numbers Class
//
//

/* Complex Numbers Class.
------------------------------------------------------------------------------*/
#include <cmath>
#include <iostream>

using namespace std ;

#ifndef COMPLEX
#define COMPLEX

class Complex {
  private:
    int real ;
    int imaginary ;

  public:
    Complex(int = 0, int = 0) ;
    ~Complex() ;

    void setComplex(int, int) ;
    void getComplex(const int&, const int&) ;

    Complex operator+ (const Complex&) const ;
    Complex operator- (const Complex&) const ;
    Complex operator* (const Complex&) const ;
    Complex operator/ (const Complex&) const ;

    bool operator== (const Complex&) const ;

    Complex operator~ () const ;
    double  operator! () const ;

    friend ostream& operator<<(ostream&, const Complex&) ;
    friend istream& operator>>(istream&, Complex&) ;
};

#endif

/* Complex Numbers Class Definition.
------------------------------------------------------------------------------*/
Complex::Complex(int r, int i) {
    real = r ;
    imaginary = i ;
}

Complex::~Complex() {}

void Complex::setComplex(int r, int i) {

    real      = r ;
    imaginary = i ;
}

void Complex::getComplex(const int& r, const int& i) {

    cout << real      << "Real      : " << endl ;
    cout << imaginary << "Imaginary : " << endl ;
}

/* Operator Overloading.
------------------------------------------------------------------------------*/
Complex Complex::operator+(const Complex& other) const {

    return Complex((real + other.real), (imaginary + other.imaginary)) ;
}

Complex Complex::operator-(const Complex& other) const {

    return Complex((real - other.real), (imaginary - other.imaginary)) ;
}

Complex Complex::operator*(const Complex& other) const {

    return Complex(((real * other.real) - (imaginary * other.imaginary))
            , ((real * other.imaginary) + (imaginary * other.real))) ;
}

Complex Complex::operator/(const Complex& other) const {

    return Complex(((real * other.real) + (imaginary * other.imaginary))

                 /(pow(other.real, 2.0) + pow(other.imaginary, 2.0))

                 , ((imaginary * other.real) - (real * other.imaginary))

                 /(pow(other.real, 2.0) + pow(other.imaginary, 2.0))) ;
}

Complex Complex::operator~() const {

    return Complex(real - imaginary) ;
}

double Complex::operator!() const {

    return sqrt((real * real) + (imaginary * imaginary)) ;
}

bool Complex::operator==(const Complex& other) const {

    bool flag = false ;

    if (real == other.real && imaginary == other.imaginary)
        flag = true ;

    return flag ;
}

ostream& operator<<(ostream &output, const Complex& value){

    output << "(" << value.real << ", " << value.imaginary << ")" ;
    return output ;
}

istream& operator>>(istream &input, Complex& value){

    char trash = 0 ;
    int r, i ;

    input >> trash >> r >> trash >> i >> trash ;
    value.setComplex(r,i) ;

    return input ;
}