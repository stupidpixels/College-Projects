#include <iostream>
using namespace std ;

int main () {

// Declare Variables.

 int a ;
 int b ;
 int res ;

// Program Descripton.

 cout << "\tThis program can calculate the DCM using Euclides Algorithm.\n" ;

// Ask For A and B.

  cout << "Enter the first number ----> " ;
  cin >> a ;
  
  cout << "Enter the second number ---> " ;
  cin >> b ;

// Calculate DCM.

  while (res != 0) {
  
    a = b ; 
    b = res ;
    res = a % b ;
  
  }

// Display DCM.

  cout << b << endl ;
  
return 0 ; 

}