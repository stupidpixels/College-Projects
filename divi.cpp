#include <iostream>
using namespace std ;

int main () {

// Declare variabes.

int n ; 
int lim ; 

// Program description.

cout << "\tThis program will display the divisors of a number the user inputs.\n" ;

// Input Number.

cout << "Please enter a number ---> " ; 
cin >> n ;
lim = n/2 ;

// Calculate and display the divisors.

  for (int i = 1 ; i <= lim ; i++) {
  //cout << i << endl ;
    if (lim % i == 0)
      cout << i << endl ;
  }

return 0 ;

}