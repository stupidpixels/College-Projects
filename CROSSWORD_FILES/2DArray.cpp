/* Header.
 ------------------------------------------------------------------------------/
 Name        :        Julio Franco Gonzalez --- # 801.13.2416

 Description :        This program will recieve a twodimentional array from a 
                      file and find and capitalize the word "PERRO".

                      It can look for the word either horizontally, vertically
                      or diagonally.

                      The file with the Crossword will be called "words.txt".

 -----------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

/* Prototypes. ---------------------------------------------------------------*/

void Write2D (char[][20], int ROWS) ;
void Solve2D (char[][20], int ROWS) ;
void Print2D (char[][20], int ROWS) ;

/* Main Function. ------------------------------------------------------------*/

int main() {
  
  const int ROWS = 20 ;
  const int COLS = 20 ;
  
  char Crossword[COLS][ROWS] ;

  Write2D(Crossword, 20) ;
  Solve2D(Crossword, 20) ;  
  Print2D(Crossword, 20) ;

  return 0 ;
}

/* Function Definitios. ------------------------------------------------------*/

void Write2D(char Crossword[][20], int ROWS) {
  
/* Open Input File. ----------------------------------------------------------*/
    
  ifstream IFile ;
  IFile.open("words.txt") ;
    
/* Fail-State Check. ---------------------------------------------------------*/
    
  if (IFile.fail()) {
      
    cout << "\t<<< There is no Input File! >>>\n" ;
      
    exit(1) ;
  }
    
/* Populate 2D Array with the Crossword. -------------------------------------*/
    
  char c ;
  int ctr = 0 ;
  
  while(IFile >> c) {
    
    Crossword[ctr/20][ctr%20] = c;
    
    ctr++;
  }
  IFile.close() ;
}

/* Solving Function ----------------------------------------------------------*/

void Solve2D(char Crossword[][20], int ROWS) {

  char x ;

  for (int r = 0; r < ROWS; r++) {
    
    for (int c = 0; c < 20; c++) {

/* Checking for solution from left to right. ---------------------------------*/

      if (Crossword[r][c] == 'p' && Crossword[r][c+1] == 'e' && 
          Crossword[r][c+2] == 'r' && Crossword[r][c+3] == 'r' &&
          Crossword[r][c+4] == 'o') {
        for(int k = 0 ; k < 5 ; k++) {
          
          x = Crossword[r][c + k] ;
          
          Crossword[r][c+k] = (toupper(x)) ;
        }
      }

/* Checking for solution from top to bottom. ---------------------------------*/

      else if (Crossword[r][c] == 'p' && Crossword[r+1][c] == 'e' && 
               Crossword[r+2][c] == 'r' && Crossword[r+3][c] == 'r' &&
               Crossword[r+4][c] == 'o') {
        for(int k = 0 ; k < 5 ; k++) {
          
          x = Crossword[r+k][c] ;
          
          Crossword[r+k][c] = (toupper(x)) ;
        }
      }

/* Checking for solution diagonally ------------------------------------------*/

      else if (Crossword[r][c] == 'p' && Crossword[r+1][c+1] == 'e' && 
               Crossword[r+2][c+2] == 'r' && Crossword[r+3][c+3] == 'r' &&
               Crossword[r+4][c+4] == 'o') {
        for(int k = 0 ; k < 5 ; k++) {
          
          x = Crossword[r+k][c+k] ;
          
          Crossword[r+k][c+k] = (toupper(x)) ;
        }
      }
    }
  }
}

/* Printing Function. --------------------------------------------------------*/

void Print2D(char Crossword[][20], int ROWS) {

  cout << "\n\t\t<<< This is the Crossword >>> \n\n" ;

  for (int r = 0; r < ROWS; r++) {

    for (int c = 0; c < 20; c++) {

      cout << Crossword[r][c] << " | ";
    }
    cout << endl;
  }
  cout << endl;
}