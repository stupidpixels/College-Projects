/*

Header : 
*---------------------------------------------------------------*
| Julio Franco Gonzalez - 801.13.2416                           |
| Angel Sanquiche       - 801.13.7075                           |
*---------------------------------------------------------------*
Description : 
*---------------------------------------------------------------*
| This program displays the length of any word the user inputs  |
| and counts the number of vowels inthe word.                   |
*---------------------------------------------------------------*
Algorithm :
*---------------------------------------------------------------*
| 1. Ask the user for the word.                                 |
| 2. Check the length of the word.                              |
| 3. Use the length to control the loop that counts vowels.     |
| 4. Print each letter and if its a vowel also print which      |
|    vowel it is (First, Second, Third...).                     |
*---------------------------------------------------------------*

*/

#include <iostream>
#include <string>

using namespace std;

// Define variables.

string word ;

int len ;
int x = 1 ;

int main() {

// Ask the user for the word.

	cout << "\tPlease input a word. \n" ;

	cin >> word ;

// Check the length of the word.

	len = word.length() ;

	cout << "Length of the word --- " << len << endl ; 

// Use the length to control the loop that counts vowels.

	for (int i = 0; i < len ; ++i)
	{
		cout << "\n letter --- " << word[i] ;

// Print each letter and if its a vowel also print which vowel it is.

		if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' 
        || word[i] == 'u' ||
        
        word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' 
        || word[i] == 'U') {
			
      cout << " === " << x ;
			
      x++ ; 
    }
  }

cout << endl << endl << word << " has " << x - 1 << " vowels.\n " ;

return 0 ; 
}