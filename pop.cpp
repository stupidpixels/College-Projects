#include <iostream>
using namespace std ;

int main () {

// Declare Variables.

int year ;
int pop = 9780 ;

// Calculate population growth.

	for ( year = 0 ; pop < 30000 ; year++ ) {

    pop *= 1.1 ;

// Display yearly growth.

    cout << year << " --- the population is " << pop << endl ;
	}

return 0 ;

}
