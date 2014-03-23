#include <iostream>
// Data type istream (cin es una variable de tipo istream)
// Data type ostream (cout es una variable de tipo ostream)

#include <fstream>
// Data types ifstream (para archivos de entrada) 
// Data types ofstream (para archivos de salida)

#include <iomanip>

using namespace std;

int main() {

  double suma = 0.0 ;
  double x ;
  double prom ;
  int n = 0 ;	

// Definir variable de typo ifstream 

  ifstream start ;

// Definir variable de typo ofstream

  ofstream end ;

// Conectar el archivo de entrada

  start.open("data.txt") ;

  if (start.fail()) {
    cout << "No hay archivo...\n" ;
    return 1 ;
  }

// Conectar el archivo de salida

  end.open("result.txt") ;

// Priming Read

  start >> x ;

  cout << "Los datos son :\n" ;
  end  << "Los datos son :\n" ;

  while (! start.eof()) {

    suma += x ;
    n++ ;
    cout << setw(3) << n << ") " << setw(6) << x << endl ;
    end  << setw(3) << n << ") " << setw(6) << x << endl ;
    start >> x ;

  }

start.close() ;

// Calcular promedio

  if (n != 0) {
    prom = suma / static_cast<double>(n) ;
    cout << fixed << setprecision(2) ;
    cout << "El promedio es = " << setw(8) << prom << endl ;

    end  << fixed << setprecision(2) ;
    end  << "El promedio es = " << setw(8) << prom << endl ;
  }

  else
    cout << "Archivo vacio, no hay datos!\n" ;

end.close() ;

exit(1) ;

}