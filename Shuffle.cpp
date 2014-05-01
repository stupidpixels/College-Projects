/*

Header : 
*---------------------------------------------------------------*
| Julio Franco Gonzalez - 801.13.2416                           |
| Angel Sanquiche       - 801.13.7075                           |
*---------------------------------------------------------------*
Description : 
*---------------------------------------------------------------*
| This program asks the user to input two words, shuffles       |
| those two words and outputs the new word.                     |
*---------------------------------------------------------------*
Algoritmo :
*---------------------------------------------------------------*
| 1. Ask the user for the two words.                            |
| 2. Check the length of the two words.                         |
| 3. Check which word is the longest and set it to maxLen.      |
| 4. Output the words by letter alternating between each other. |
*---------------------------------------------------------------*
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string FirstWord ;
	string SecondWord ;

	int len1 ;
	int len2 ; 
	int maxLen ;

	int x = 0 ;
	
	cout << "\tPlease enter two words. \n\n" ;

	cout << "\tPlease enter the first word ----> " ;
	cin >> FirstWord ;
	
	cout << "\tPlease enter the second word ---> " ;
	cin >> SecondWord ; 

	len1 = FirstWord.length() ;
	len2 = SecondWord.length() ;

	if ( len1 > len2 ) {
		maxLen = len1 ;
	}

	else {
		maxLen = len2 ;
	}

cout << "The first word's lenght is " <<len1 
     << "The second word's lenght is " << len2 << endl ;

for (int i = 0 ; i < maxLen ; ++i) {

	cout << FirstWord[i] << SecondWord[i] ;
}

cout << endl << endl ; 

return 0 ;
}