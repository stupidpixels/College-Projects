//
//
//

#include <iostream>
using namespace std ;
#include <cstdlib>
#include <ctime>
int main()
{

	int house ; 										// Casino Throw.
	int guess ; 										// User Guess.

	srand(time(0)) ;

	cout << "Welcome to the C++ Casino!";

	house = rand() %6 + 1 ;								// House die throw

	cout << "Enter a number ---> " ; 
	cin >> guess ; 

	cout << "The house threw = " << house << endl ;

	if (guess == house)
		cout << "\a You have WON!\a";
	
	else 
		cout << "\a You have LOST!\a";

	cin.get() ;

	return 0 ;
}