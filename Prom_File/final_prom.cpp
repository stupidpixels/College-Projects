/*

Header : 
*------------------------------------------------------------*
| Julio Franco Gonzalez                                      |
| Estudiante 801.13.2416                                     |
*------------------------------------------------------------*
Descripcion :
*------------------------------------------------------------*
| El proposito de este programa es calcular el promedio de   |
| los estudiantes por manera de un archivo de entrada y      |
| desplegar estos resultados en un prompt y atraves de la    |
| creacion de un archivo de salida.                          |
*------------------------------------------------------------*

*/

#include <iostream>
// Data type istream (cin es una variable de tipo istream)
// Data type ostream (cout es una variable de tipo ostream)

#include <fstream>
// Data types ifstream (para archivos de entrada) 
// Data types ofstream (para archivos de salida)

#include <iomanip>
#include <string>

using namespace std;

int main() {

// Declarar variables.

  double suma = 0.0 ;
  int number ;
  double grade1, grade2, grade3 ;
  double prom ;
  char nota ;
  string name ;

// Definir variable de typo ifstream 

  ifstream start ;

// Definir variable de typo ofstream

  ofstream end ;

// Conectar el archivo de entrada.

  start.open("data.txt") ;

// Fail check.

  if (start.fail()) {
    cout << "No hay archivo...\n" ;
    return 1 ;
  }

// Conectar el archivo de salida.

  end.open("result.txt") ;

// Priming Read.

  start >> name >> number >> grade1 >> grade2 >> grade3 ;

  cout << endl << " NOMBRE | ESTUDIANTE | EXAMEN 1 | EXAMEN 2 | EXAMEN 3 | PROMEDIO | NOTA \n" ;
  cout << "------------------------------------------------------------------------\n" ;

  end  << endl << " NOMBRE | ESTUDIANTE | EXAMEN 1 | EXAMEN 2 | EXAMEN 3 | PROMEDIO | NOTA \n" ;
  end  << "------------------------------------------------------------------------\n" ;

// 
  while (! start.eof()) {

// Calcular promedio.

    suma = grade1 + grade2 + grade3 ;
    prom = suma / 3 ;

// Calcular la nota final.
    
    switch(static_cast<int>(prom)/10) {
      case 10 : nota = 'A' ;
        break ;
      case 9 : nota = 'A' ;
        break ;
      case 8 : nota = 'B' ;
        break ;
      case 7 : nota = 'C' ;
        break ;
      case 6 : nota = 'D' ;
        break ;
      default : nota = 'F' ;
    }
 
// Desplegar los resultados. 

    cout << setw(6) << name   << "  | " 
         << setw(8) << number << "  | " 
         << setw(5) << grade1 << "    | "
         << setw(5) << grade2 << "    | "
         << setw(5) << grade3 << "    | " 
         << setw(5) << prom   << "    | " 
         << setw(2) << nota   << endl ;

    end  << setw(6) << name   << "  | " 
         << setw(8) << number << "  | " 
         << setw(5) << grade1 << "    | "
         << setw(5) << grade2 << "    | "
         << setw(5) << grade3 << "    | " 
         << setw(5) << prom   << "    | " 
         << setw(2) << nota   << endl ;
    
    start >> name >> number >> grade1 >> grade2 >> grade3 ;

  }

// Cerrando archivos de entrada y de salida.

start.close() ;

end.close() ;

exit(1) ;

}