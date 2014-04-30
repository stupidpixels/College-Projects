/*

Header : 
*--------------------------------------------------------------*
| Julio Franco Gonzalez                                        |
| Estudiante 801.13.2416                                       |
*--------------------------------------------------------------*
Description : 
*--------------------------------------------------------------*
| This program will print every number from 1 to 100 and for   |
| multiples of three print “Fizz” instead of the number and    |
| for the multiples of five print “Buzz”.                      |
*--------------------------------------------------------------*
Pseudocode :  
*--------------------------------------------------------------*
| 1. Initialize i = 1.                                         |
| 2. Print "FizzBuzz" if the number is a multiple of 3 & 5.    |
| 3. Print "Fizz" if the number is a multiple of 3.            |
| 4. Print "Buzz" if the number is a multiple of 5.            |
| 5. Otherwise print the number.                               |
| 6. Stop.                                                     |
*--------------------------------------------------------------*

*/

#include<iostream>
using namespace std;

int main() {

  for (int i = 1; i <= 100; i++)
  {
    // Print "FizzBuzz" if the number is a multiple of 3 & 5. -*

      if ( i % 3 == 0 && i % 5 == 0 )
        cout << "=== FizzBuzz \n" ;

    // Print "Fizz" if the number is a multiple of 3. ---------*

      else if ( i % 3 == 0 )
        cout << "=== Fizz \n" ;

    // Print "Buzz" if the number is a multiple of 5. ---------*

      else if ( i % 5 == 0 )
        cout << "=== Buzz \n" ;

    // Otherwise print the number. ----------------------------*
    
      else 
        cout << "=== " << i << "\n" ;
  }

  return 0 ;

}