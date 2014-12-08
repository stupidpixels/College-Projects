/* Header   :
-------------------------------------------------------------------------------/
  Name      : Julio Franco Gonzalez
  Student   : 801.13.2416

// Problem  : The traveling salesman problem (TSP) asks the following question
-------------------------------------------------------------------------------/
              Given a list of cities and the distances between each pair of
              cities, what is the shortest possible route that visits each city
              exactly once and returns to the original city?

// Algorithm: Calculates the Shortest route to be taken.
-------------------------------------------------------------------------------/
              Input  : A, an array of 10 cities
                       size, the size of the array
              Output : An array of int stating the order in which the
                       cities must be visited.
              ============================================================
              1.  Create P, an array of integers from 0 to 9
              2.  Compute the route distance of visiting the cities
                  in the order established in P and assign this to minDist
              3.  copy P into minOrder, another int array of size 10
              4.  while(more permutations):
              5.    permute(P)
              6.    tmpDist = route distance visiting the cities in
                              the order established by P
              7.    if (tmpDist < minDist):
              8.       minDist = tmpDist
              9.       copy P into minOrder
              10. return minOrder
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <cassert>
#include <string>
#include <algorithm>

using namespace std ;

// Constants for the distance computation

const double EARTH_RADIUS =  6372.8 ;
const double TWOPI   = 2 * acos(-1) ;

// The data type to represent a city for the purpose
// of our application

class City {

  private:
    string name ;

    double lat  ;
    double lon  ;

  public:
    City() { name = "" ; lat = 0.0 ; lon = 0.0 ; }

    City(string st, double myLat, double myLon) {

      name = st ;
      lat  = myLat ;
      lon  = myLon ;
    }

    double getLat() {
      return lat ;
    }

    double getLon() {
      return lon ;
    }

    string getName() {
      return name ;
    }

    void setAll(string st, double myLat, double myLon) {

      name = st ;
      lat  = myLat ;
      lon  = myLon ;
    }

    void print() {
      cout << name << " " << lat  << " " << lon << endl ;
    }
} ;
// Function to convert from degrees to radians.
// Input:   deg: an angle in degrees
// Returns: the angle in radians

inline double deg2rad(double deg) {

  return deg/360.0 * TWOPI ;
}

// Function to compute the orthorhombic distance between two
// cities, based on their latitudes and longitudes.
// Inputs: A and B: the cities
// Returns: their distance in km

double odDistance(City &A, City &B) {

  return EARTH_RADIUS * acos(
  sin( deg2rad( A.getLat() ) ) * sin( deg2rad( B.getLat() ) ) +
  cos( deg2rad( A.getLat() ) ) * cos( deg2rad( B.getLat() ) ) *
  cos( deg2rad( A.getLon() ) - deg2rad(B.getLon() ) ) ) ;
}

// Some unit tests for the distance function

void unitTests() {

  City ny("NewYork", 40.7142, -74.0064 ) ;
  City london("London", 51.50, -0.1167 ) ;
  City la("LA", 34.0522, -118.2428) ;

  assert(abs( odDistance(ny, london) - 5576.74) < 10) ;
  assert(abs( odDistance(ny, la) - 3940.14) < 10) ;
  assert(abs( odDistance(ny, ny) - 0) < 100) ;
}

// Print the cities from an array
// Input:  A, an array of cities
//         size, its size
// Output: Prints all cities in the array

void printArrayOfCities(City A[], int size) {

  for (int i = 0; i < size; i++)
    A[i].print() ;
}

// Given the object that represents an input file, this function counts
// how many lines in the file.
// Precondition: The if-stream object is at the beginning of the file
// Post-condition: The if-stream object is at the beginning of the file

int countLinesInFile(ifstream &file) {

  string dummy ;
  int ctr = 0  ;

  while( getline(file,dummy)) ctr++ ;

  // 'reset' the file, so that it can be reread from the start
  file.clear() ;
  file.seekg(0, ios::beg) ;
  return ctr ;
}

// Given the if-stream object of a file, an (empty) array of cities
// and the number of records to read from the file, this function
// reads the values from the file to the structures in the array.

void readFileToArray(ifstream &file, City A[], int numOfCities) {

  string city ;
  double lat, lon ;

  for( int i = 0 ; i < numOfCities ; i++ ) {

    file >> city >> lat >> lon  ;
    A[i].setAll(city, lat, lon) ;
  }
}

// Given the array of cities, determines the farthest two cities.
// Returns (by reference) the indexes of the two cities in the array.

void maxDistances(City A[], int size, int &idxCityA, int &idxCityB, double &max)
{
  max = odDistance(A[0], A[1]) ;
  idxCityA = 0 ;
  idxCityB = 1 ;

  for (int j = 0 ; j < size ; j++) {

    for (int i = j+1 ; i < size ; i++) {

      if(odDistance(A[j], A[i]) > max) {

        max = odDistance(A[j], A[i]) ;
        idxCityA = i ;
        idxCityB = j ;
      }
    }
  }
}

// Given the array of cities, determines the closest two cities.
// Returns (by reference) the indexes of the two cities in the array.

void minDistances(City A[], int size, int &idxCityA, int &idxCityB, double &min)
{
  idxCityA = 0 ;
  idxCityB = 1 ;

  min = odDistance(A[0], A[1]) ;

  for (int j = 0 ; j < size ; j++) {

    for (int i = j+1 ; i < size ; i++) {

      if(odDistance(A[j], A[i]) < min) {

        min = odDistance(A[j], A[i]) ;
        idxCityA = i ;
        idxCityB = j ;
      }
    }
  }
}

void routeDist(City A[], double &dist, int P[], int n) {

  dist = 0.0 ;
  int *a = P ;
  int count = 0 ;

  while(count < n-1) {

    int *b = a+1 ;
    
    dist += odDistance(A[*a], A[*b]) ;
    
    a++ ;
    count++ ;
  }
}

void minDist(City A[], double &dist, int P[], int n) {

  double tempD = dist ;
  double finalD ;
  int minP[n] ;

  for (int i = 0; i < n; ++i)
    minP[i] = i ;

  do {

    routeDist(A, dist, P, n) ;

    if(dist < tempD) {

      tempD  = dist ;
      finalD = tempD ;

      for (int i = 0; i < n; ++i)
        minP[i] = P[i] ;
    }
    next_permutation(P, P+n) ;

  } while(P[0] == 0) ;

  cout << "\n\tThe shortest route (" << finalD << " km)\n" ;

  for (int i = 0; i < n; ++i)
    cout << A[minP[i]].getName() << " -> " ;
    cout << A[0].getName() << endl << endl ;
}

int main() {

  unitTests() ;

  string fileName ;
  int    minA, minB ;
  int    maxA, maxB ;
  double max, min ;
  double dist ;

  int X[10] = {0,1,2,3,4,5,6,7,8,9} ;

  cout << "\nEnter the file name: " ;
  cin  >> fileName ;

  ifstream inFile ;
  inFile.open(fileName.c_str()) ;

  // count the number of lines in the file

  int numLines = countLinesInFile(inFile) ;

  // create an array of structures with as many elements as there
  // are lines in the file.

  City *A = new City[numLines] ;
  cout << "Created the array of " << numLines << " cities\n\n" ;

  // read the data from the file into the array of structures

  readFileToArray    (inFile, A, numLines) ;
  printArrayOfCities (A, numLines) ;
  maxDistances       (A, numLines, maxA, maxB, max) ;
  minDistances       (A, numLines, minA, minB, min) ;

  // find the farthest and closest cities

  cout << "\n\tThe farthest distance is between:" << endl  ;
  A[maxA].print() ;
  A[maxB].print() ;

  cout << "with a distance of : " << max << " km.\n" ;

  cout<< endl << "\tThe closest distance is between:" << endl;
  A[minA].print() ;
  A[minB].print() ;

  cout << "with a distance of : " << min << " km.\n" ;

  routeDist(A, dist, X, 10) ;
  minDist  (A, dist, X, 10) ;

  delete []A ;
  return EXIT_SUCCESS ;
}