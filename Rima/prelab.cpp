/*
 
1. Pida al usuario una terminación de palabra
2. Imprima todas las palabras del archivo soloPalabras.txt que terminen igual que la palabra entrada por el usuario.
3. Imprima el total de las palabras encontradas.

*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std ;

int main () {

// Declarar variables.

	string word ;
  string segment ;

  int x ;

// Declarar archivos de entrada / salida.

  ifstream iFile ;
    
    iFile.open("soloPalabras.txt") ;

    if (iFile.fail()) {
      
      cout << "No hay archivo...\n" ;
      exit(1) ;
    }

  ofstream oFile ;
  
    oFile.open("resultados.txt") ;

// Pedir la terminacion al usuario.

  cout << "Entre una terminacion de palabra: " ;
  cin >> segment ;

// Verificar la terminacion de las palabras.

  iFile >> word ;
  int len = word.length() + 1 ;

  cout  << "Palabras que riman con '" << segment << "'" << endl ;
  oFile << "Palabras que riman con '" << segment << "'" << endl ;

    while (iFile >> word) {

      if (word.find(segment, word.length() - segment.length()) != -1){
        cout  << word << endl ;        
        oFile << word << endl ;
        x++ ;
      }
    }

    cout  << "\n=============================\n" ;
    cout  << "Un total de " << x << " palabras.\n\n" ;

    oFile << "\n=============================\n" ;
    oFile << "Un total de " << x << " palabras.\n\n" ;

  iFile.close() ;
  oFile.close() ;

exit(1) ;
  
}