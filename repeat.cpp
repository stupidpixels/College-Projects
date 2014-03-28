/*
 HEADER :
---------------------------------------------------------------
  Julio Franco González            :            801.13.2416
 
 DESCRIPTION :
---------------------------------------------------------------
  This program will recieve a string and count how many of
  the same letters it has and print them after each group
  of letters.
 
 PSEUDOCODE :
---------------------------------------------------------------
  INPUT  : String (st)
  OUTPUT : newstring | With repeated letters being substituted
                     | with the number of times it's repeated.
  -------------------------------------------------------------
   1. Input string. (st)                                    
   2. Check the strings length. (len)                       
   3. For : each letter in the string. (int i=0 ; i<len ; i++)                                   
   4.   Initialize z = 1 and a stringstream variable (ss).
   5.   While : two concurrent letters are the same.
   6.     Add 1 to z.
   7.     Add 1 to i, so this doesn't become an infinite loop.
   8.   Give the value of z to ss.
   9.   Add each letter(st[i]) and ss to newstring.
   10.Return newstring.
  -------------------------------------------------------------
 
---------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std ;

// Function Prototype.
//------------------------------------------------------------

string repeat(string) ;

// Main Function.
//------------------------------------------------------------

int main() {

  string st ;
  cout << "Please input a string ---> " ;
  cin >> st ;

  cout << repeat(st) << endl ;

  return 0 ;
    
}

// Function Definition.
//------------------------------------------------------------

string repeat(string str) {
    
// Defining Variables.
//------------------------------------------------------------
    
  string newstring ;            // Return string.
  
  int len ;                     // String length.
  len = str.length() ;
    
// Loop to count each letter in the string.
//------------------------------------------------------------
    
  for (int i = 0; i < len; i++) {
    int z = 1 ;                 // Initialize z to 1.
    stringstream ss ;           // stringstream variable.
        
// Loop to count each repeated letter.
//------------------------------------------------------------
        
    while (str[i] == str[i+1]) {
      z++ ;                     // Counter for the output.
      i++ ;                     // Ending the while loop.
    }
        
    ss << z ;                   // Add z to ss.
    newstring += str[i] + ss.str() ;
  }
    
return newstring ;
    
} 
