//
//
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

// Prototipos 

void Purpose(void) ;
void Output(double, double, double, double) ;
double Read_r(void) ;
double Diameter(double rad) ;
double Circumference(double) ;
double Area(double) ;

int main() {
 
  double R ;
  double D ;
  double C ;
  double A ;
    

  // Output Purpose.
  
    Purpose() ; 

  // Call Read_r.

    R = Read_r() ;

  // Call Diameter.

    D = Diameter(R) ;

  // Call Circumference.

    C = Circumference(R) ;

  // Call Area.

    A = Area(R) ;

  // Call Output.
  
    Output(R, D, C, A) ;

  return 0;
}

// Defining Functions.

void Purpose(void) {
  cout << "\n Given the radious of a circle, this program will"
       << " calculate and display the Diameter, Circumference"
       << " and Radious.\n" ;
  return ;  
}

double Read_r(void) {
  double rad ;
  cout << "\nInput the radious ---> " ;
  cin >> rad ;
  return rad ;
}

double Diameter(double r) {
  return 2.0 * r ;
}

double Circumference(double r) {
  return 2.0 * M_PI * r ;
}

double Area(double r) {
  return pow(r,2.0) * M_PI ;
}

void Output(double R, double D, double C, double A) {
  cout << fixed << setprecision(3) ;
  cout << "\n\t<<< CIRCLE DIMENTIONS >>>\n" ;
  cout << "\nThe Radious is ============== " << setw(8) << R ;
  cout << "\nThe Diameter is ============= " << setw(8) << D ;
  cout << "\nThe Circumference is ======== " << setw(8) << C ;
  cout << "\nThe Area is ================= " << setw(8) << A ;
  cout << endl << endl ;
}