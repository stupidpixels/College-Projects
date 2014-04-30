/* Header.
 ------------------------------------------------------------------------------/
 Name        :        Julio Franco Gonzalez --- # 801.13.2416

 Description :        This program displays the Elements of an array given by 
                      the user in an input file and calculates their Avarage
                      and Standard Deviation.
 
/ Algorithms  
 ------------------------------------------------------------------------------/
Average  ------------ Input  : A, n - An Array of numbers, its size.
                      Output : Ave  - The Average of the array.
                      ----------------------------------------------
                      Variables : Sum = 0.0 - The sum of the elements.
                                  Average - The final result.

                      1) Read the Numbers.
                      2) FOR each element in the Array.
                      3)   Add up every element.
                      4) Divide the sum by the amount of elements.
                      5) Output Average.

Standard Deviation -- Input  : A, n, Ave - An array, its size and average
                      Output : Devi      - The Standard Deviation.
                      ----------------------------------------------
                      Variables : sum = 0.0   - The variance.
                                  Devi      - The final result.
                                  Ave       - The average of the array.
                      1) FOR each element in the Array.
                      2)   Subtract the average.
                      3)   Elevate it to 2.
                      4)   Add them all up.
                      5) Divide that by n - 1.
                      6) Calculate the Square Root of that result.
                      7) Output Devi.
 -----------------------------------------------------------------------------*/


#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cmath>

using namespace std ;

/* Prototypes.
 ----------------------------------------------------------------------------*/
 void Intro(void) ;
 void Read(double [], int&) ;
 void Output(const double [], int, double, double) ;
 double Average(const double [], int) ;
 double Deviation(const double [], int, double) ;
 

int SIZE = 50 ;

int main() {
    
/* Define Variables.
 ----------------------------------------------------------------------------*/   
  int n ;
  double data[SIZE] ;
  double Ave ;
  double Dev ;

  Intro() ;

/* Read the elements of the file.
 ----------------------------------------------------------------------------*/   
  Read(data, n) ;
 
/* Avarage. 
 ----------------------------------------------------------------------------*/
  Ave = Average(data, n) ;
    
/* Standard Deviation. 
 ----------------------------------------------------------------------------*/
  Dev = Deviation(data, n, Ave) ;
    
/* Results. 
 ----------------------------------------------------------------------------*/
  Output(data, n, Ave, Dev) ;

  return EXIT_SUCCESS ;
}

///////////////////////////////////////////////////////////////////////////////

/* Introduction.
 ----------------------------------------------------------------------------*/
void Intro(void) {

  cout << "\n\tThis program will calculate the Avarage and Standard Deviation"
          "out of a file given by the user.\n" ;
          
  cout << "\tIt will also create an output file with the elements, "
          "the Average and Standard Deviation.\n" ;

  cout << "\tPlease give the output file a name with the desired extention"
          ", like : '.txt, '.doc', '.docx' .\n" ;
}

/* Read Definition.
 ----------------------------------------------------------------------------*/
void Read(double A[], int& n) {

  ifstream Ifile ;
  string filename ;

 // File name input. ---------------------------------------------------------*
  do {
    
    Ifile.clear() ;
    
    cout << "\nEnter the input filename ---> " ;
    cin >> filename ;
    
    Ifile.open(filename.c_str()) ;

 // Input validation for file. -----------------------------------------------*
    if (Ifile.fail()) { 
      
      cout << "The file '" << filename << "' does not exist.\n" ;
    }

  } while (Ifile.fail()) ;  

 // Transfer file contenst. --------------------------------------------------*
  n = 0 ;

  while (n < SIZE && Ifile >> A[n]) {
  
    n++ ;
  }

 Ifile.close() ;

  return ;
}

/* Average Definition.
 ----------------------------------------------------------------------------*/
double Average(const double A[], int n) {

  double sum = 0.0 ;
  double average = 0.0 ;

  if (n == 0)  {
    
    cout << "There are no elements in the Input File!\n\n" ;
    exit(0) ;
  }
  
  for(int i = 0 ; i < n ; i++) {
    sum += A[i] ;
  }

  average = sum / n ;

  return average ;
}

/* Standard Deviation Definition.
 ----------------------------------------------------------------------------*/
double Deviation(const double A[], int n, double Average) {

  double devi = 0.0 ;
  double sum = 0.0 ;

  for (int i = 0 ; i < n ; ++i) {

    sum += pow((A[i] - Average), 2) ;
  }

  devi = sqrt(sum / (n - 1)) ;

  return devi ;
}

/* Output Definition.
 ----------------------------------------------------------------------------*/
void Output(const double A[], int n, double Ave, double Dev) {

  ofstream Ofile ;
  string out_filename ; 
  
  cout << "Enter the output filename --> " ;
  cin >> out_filename ;

  Ofile.open(out_filename.c_str()) ; 

  cout  << fixed << setprecision(3) ;
  cout  << "\n\t<<< Elements of the array >>>\n\n" ;

  Ofile << fixed << setprecision(3) ;
  Ofile << "\n\t<<< Elements of the array >>>\n\n" ;

  for (int i = 0; i < n; ++i) {
    
    cout  << setw(3) << (i + 1) << ") " 
          << setw(6) << A[i] << endl ;

    Ofile << setw(3) << (i + 1) << ") " 
          << setw(6) << A[i] << endl ;
  }

  cout  << "\nThe Average of the elements is >>> " 
        << setw(6) << Ave << endl ;
  
  Ofile << "\nThe Average of the elements is >>> " 
        << setw(6) << Ave << endl ;

  cout  << "The Standard Deviation is      >>> "
        << setw(6) << Dev << endl << endl ;

  Ofile << "The Standard Deviation is      >>> "
        << setw(6) << Dev << endl << endl ;

  Ofile.close() ;

  return ;
}