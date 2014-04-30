/* Header.
 ------------------------------------------------------------------------------/
 Name        :        Julio Franco Gonzalez --- # 801.13.2416

 Description :        I have finished the countTwos function so it can count 
                      how many 2's there are in the bidimensional array created
                      by fillWithRandom.
                      
 -----------------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
using namespace std;
 
const int ROWS = 5;
const int COLS = 7;
 
//
// Fill a bidimensional array with random numbers in the 
// range [0,3]. 
// Input: A, a two dimensional array with 7 columns
//        rows, the number of rows.
//
// Output: Fills the array with random numbers
//
 
void fillWithRandom(int A[][COLS], int rows) {
    for (int i=0; i < rows; i++) {
        for (int j=0; j < COLS; j++) {
            A[i][j] = rand() % 4;
        }        
    }
}
 
//
// Print a bidimensional array 
// Input: A, a two dimensional array with 7 columns
//        rows, the number of rows.
// Output: Prints the array 
//
 
void printArray(int A[][COLS], int rows) {
    for (int i=0; i < rows; i++) {
        for (int j=0; j < COLS; j++) {
            cout << A[i][j] << "  " ;
        }        
        cout << endl;
    }
    cout << endl;
}
 
//
// Count the number of 2's in a bidim array
// Input: A, a two dimensional array with 7 columns
//        rows, the number of rows.
// Output: The number of twos in the array.
//
 
int countTwos(int A[][COLS], int rows) {
  
  int count = 0 ;
  int x ;

  for (int i = 0; i < rows; i++) {

    for (int j = 0; j < COLS; j++) {

      x = A[i][j] ;

      if (x == 2)
        count++ ;
    }
  }
  return count ;
}
 
int main() {
 
    int A[ROWS][COLS];
    
    srand(time(NULL));
 
    fillWithRandom(A, ROWS);
    printArray(A, ROWS);
    cout << "The number of twos is: " 
         << countTwos(A,ROWS) << endl;
         
    return 0;
}