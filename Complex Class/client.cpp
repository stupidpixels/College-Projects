//
// Client for complex
//

#include "complex.h"

void Calculate(Complex c1, Complex c2) ;

int main() {

    Complex c1, c2 ;

    cin >> c1 ;
    cin >> c2 ;

    Calculate(c1, c2) ;

    if (c1 == c2)
        cout << c1 << " y " << c2 << " son iguales.\n" ;

    else
        cout << c1 << " y " << c2 << " NO son iguales.\n" ;

    cout << "El complemento de "    << c1 << " es " << ~c1 << endl ;
    cout << "El valor absoluto de " << c1 << " es " << !c1 << endl ;

    return 0 ;
}

void Calculate(Complex c1, Complex c2) {

   cout << c1 << " + " << c2 << " = " << c1 + c2 << endl ;
   cout << c1 << " - " << c2 << " = " << c1 - c2 << endl ;
   cout << c1 << " * " << c2 << " = " << c1 * c2 << endl ;
   cout << c1 << " / " << c2 << " = " << c1 / c2 << endl ;
}
