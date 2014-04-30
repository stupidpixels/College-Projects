/* Header.
 ------------------------------------------------------------------------------/
 Name          :      Julio Franco Gonzalez --- # 801.13.2416

 Description   :      This program looks through a file with names and orderes 
                      them using the bubble sort algorithm.
 
/ Algorithms  
 ------------------------------------------------------------------------------/
Bubble Sort  -------- Input  : A, n - An Array of numbers, its size.
                      Output : The ordered array 
                      ----------------------------------------------
                      1) FOR each element in the Array.
                      2)   FOR each word in the element.
                      3)     Check which name is first in the alphabet.
                      4)     IF the second name is first.
                      5)       Swap them in place.
                      5) Output the result.

 -----------------------------------------------------------------------------*/



#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 

using namespace std ;

/* Prototypes.
 -----------------------------------------------------------------------------*/
void Read (string[], int&) ;
void Swap (int&, int&) ;
void BubbleSort (string[], int) ;
void Output (string[], int) ;

const int SIZE = 50 ;

int main() {

  string Names[SIZE] ;
  int n ;

/* Read The Names from the file.
 -----------------------------------------------------------------------------*/
  Read(Names, n) ;

/* Display the original array of names.
 -----------------------------------------------------------------------------*/
  cout  << "\n<<< Elements of the Array >>>\n" 
        << "-------------------------------------\n" ;
  Output(Names, n) ;
  
/* Display the ordered array of names.
 -----------------------------------------------------------------------------*/  
  BubbleSort(Names, n) ;
  Output(Names, n) ;
  
  return EXIT_SUCCESS ;
}

/* Read Definition.
 -----------------------------------------------------------------------------*/
void Read(string Names[], int& n) {
  
  ifstream Ifile ;
  string filename ;

 // File name input. ----------------------------------------------------------*
  do {

  Ifile.clear() ;
  	
	cout << "\nEnter the input filename ---> " ;
  cin >> filename ;
    
  Ifile.open(filename.c_str()) ;

 // Input validation for file. ------------------------------------------------*
    if (Ifile.fail()) {

      cout << "The file '" << filename << "' does not exist!\n" ;
    }
  
  } while (Ifile.fail());

 // Transfer file contents. ---------------------------------------------------*
  n = 0 ;
  
  while (Ifile.good()) {
  
    getline(Ifile, Names[n]) ;
    n++ ;
  }

  Ifile.close() ;
  
  return ;
}

/* Swap Definition.
 -----------------------------------------------------------------------------*/
void Swap(string& x, string& y) {
    
    string temp = x ;
    x = y ;
    y = temp ;
}

/* Bubble Definition.
 -----------------------------------------------------------------------------*/
void BubbleSort(string Names[], int n) {
 
  bool done = false ;
    
  for (int pass = 1; pass < n && !done; pass++) {
        
    for (int compa = 0; compa < (n - pass); compa++) {
        
      if (Names[compa] > Names[compa + 1]) {
                
        Swap(Names[compa], Names[compa + 1]) ;
        done = false ;
      }
    }
  }

  cout << "\n<<< Elements of the Array ( ORDERED ) >>>\n"
       << "--------------------------------------\n" ;
}

/* Output Definition.
 -----------------------------------------------------------------------------*/
void Output(string Names[], int n) {

  ofstream Ofile ;
  Ofile.open("results.txt") ;

  Ofile << "\n<<< Elements of the Array ( ORDERED ) >>>\n"
        << "-------------------------------------------------------\n" ;

  for (int i = 0 ; i < n ; ++i) {

    cout  << setw(3) << (i+1) << ") " 
          << setw(6) << Names[i] << endl ;
    

    Ofile << setw(3) << (i+1) << ") " 
          << setw(6) << Names[i] << endl ;
  }

  Ofile.close() ;
}