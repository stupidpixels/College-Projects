/*

 Header :
*------------------------------------------------------------------------------+
| Julio Franco Gonzalez                                                        |
| Estudiante               :    801.13.2416                                    |
*------------------------------------------------------------------------------+
 Descripcion :
*------------------------------------------------------------------------------+
| Pre-lab 10                                                                   |
*------------------------------------------------------------------------------+

*/
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std ;

// Unit Test Prototypes. ------------------------------------------------------+

void testSEE() ;
void testSEI() ;
void testSHA() ;
void testCTP() ;
void testMAD() ;

// Function Prototypes. -------------------------------------------------------+

int sumEvenElements(int [], int) ;
int sumEvenIndices (int [], int) ;
int sumHalfArray   (int [], int) ;
int countThePrimes (int [], int) ;
int MinAbsDiff     (int [], int) ;

bool isPrime       (int n) ;

// Main Program. --------------------------------------------------------------+

int main() {
  
  testSEE() ;
  testSEI() ;
  testSHA() ;
  testCTP() ;
  testMAD() ;
  
  cout << "\nPassed All The Unit Tests!!\n" ;
  
  return EXIT_SUCCESS ;

}

// Unit Tests Definitions. ----------------------------------------------------+

void testSEE() {
  
  int A[4] = {1, 5, 11, 17} ;
  assert(sumEvenElements(A, 4) == 0) ;
  
  int B[3] = {1, 5, 20} ;
  assert(sumEvenElements(B, 3) == 20) ;
  
  int C[5] = {0, 5, 10, 20, 45} ;
  assert(sumEvenElements(C, 5) == 30) ;
  
  cout << "\tPassed the sumEvenElements unit test\n" ;
}

//-----------------------------------------------------------------------------+

void testSEI() {
  
  int A[4] = {1, 5, 11, 17} ;
  assert(sumEvenIndices(A, 4) == 12) ;
  
  int B[3] = {1, 5, 20} ;
  assert(sumEvenIndices(B, 3) == 21) ;
  
  int C[5] = {0, 5, 10, 20, 45} ;
  assert(sumEvenIndices(C, 5) == 55) ;
  
  cout << "\tPassed the sumEvenIndices unit test\n" ;
}

//-----------------------------------------------------------------------------+

void testSHA() {
  int A[4] = {1, 5, 11, 17} ;
  assert(sumHalfArray(A, 4) == 6) ;
  
  int B[3] = {1, 5, 20} ;
  assert(sumHalfArray(B, 3) == 6) ;
  
  int C[5] = {0, 5, 10, 20, 45} ;
  assert(sumHalfArray(C, 5) == 15) ;
  
  cout << "\tPassed the sumHalfArray unit test\n" ;
}

//-----------------------------------------------------------------------------+

void testCTP() {

  int A[6] = {2, 4, 5, 9, 7, 6} ;
  assert(countThePrimes(A, 6) == 3) ;
  
  int B[3] = {1, 2, 11} ;
  assert(countThePrimes(B, 3) == 2) ;
  
  int C[4] = {3,6,7,13} ;
  assert(countThePrimes(C, 4) == 3) ;
  
  cout << "\tPassed the countThePrimes unit test\n" ;
}

//-----------------------------------------------------------------------------+

void testMAD() {
  
  int A[4] = {10, 5, 11, 17} ;
  assert(MinAbsDiff(A, 4) == 1) ;
  
  int B[4] = {0, -5, 20, -3} ;
  assert(MinAbsDiff(B, 4) == 2) ;
  
  int C[5] = {0, 5, 10, 20, 45} ;
  assert(MinAbsDiff(C, 5) == 5) ;
  
  cout << "\tPassed the MinAbsDiff unit test\n" ;
}

// Function Definitions. ------------------------------------------------------+

int sumEvenElements(int A[], int size) {

  int sum = 0 ;
  
  for (int i = 0; i < size; i++) {
    if (A[i] % 2 == 0) {
      sum = sum + A[i] ;
    }
  }
  return sum ;
}

//-----------------------------------------------------------------------------+

int sumEvenIndices(int A[], int size) {
 
  int sum = 0 ;
  
  for (int i = 0; i < size; i++) {
    if (i % 2 == 0) {
      sum = sum + A[i] ;
    }
  }
  return sum ;
}

//-----------------------------------------------------------------------------+

int sumHalfArray(int A[], int size) {
  
  int sum = 0 ;
  
  for (int i = 0; i < size / 2; i++) {
    if (size % 2 != 0) {
      size += 1 ;
    }
    sum = sum + A[i] ;
  }
  return sum ;
}

//-----------------------------------------------------------------------------+

int countThePrimes(int A[], int size) {
  
  int n = 0 ;
  
  for (int i = 0; i < size; i++) {
    if (isPrime(A[i])) {
      n++ ;
    }
  }
  return n ;
}

//-----------------------------------------------------------------------------+

int MinAbsDiff(int A[], int size) {
  
  int min = 0 ;
  int std = abs(A[0] - A[1]) ;
  int dts = 0 ;
  
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++){
      dts = abs(A[i] - A[j]) ;
      
      if (dts < std) {
        min = dts ;
        std = dts ;
      }
      else {
        min = dts ;
      }
    }
  }
  return std ;
}

//-----------------------------------------------------------------------------+

bool isPrime(int n) {

  if (n == 1) {
    return false ;
  }
    
  int i ;
	
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return false ;
		}
	}
	return true ;
}