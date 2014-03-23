//  + . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . +
//  |                                                                   |
//  |     Nombre   : Lillian González      CCOM 3033-001                |
//  |     Num. Est.: 801-12-3125           Segundo Semestre 2013-14     |
//  |     Nombre   : Juan Franco           Prof. Arce-Nazario           |
//  |     Num. Est.: 801-13-2416           Prof. Colorado               |
//  |     Fecha    : 7 / 2 / 14            Archivo  : coins.cpp         |
//  |                                                                   |
//  + . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . +
//  |                                                                   |
//  |        Propósito: Este programa calcula y despliega un            |
//  |                   número pseudo-aleatorio y calcula la            |
//  |                   cantidad de pesetas, dimes, vellones            |
//  |                   y chavitos que se necesitan para dar            |
//  |                   esa cantidad en centavos.                       |
//  |                                                                   |
//  + . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . +


#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std ;


int main()
{
//Declarar variables . . . . . . . . . . . . . . . . . . . . . . . . . .
    
  int x ;   // Variable para cantidad de centavos
    
// Estableciendo el "seed" del número aleatorio

  srand(time(0)) ;
    
// Despleagar propósito del programa . . . . . . . . . . . . . . . . . .

  cout << "\n\tSistema de entrenamiento de devolución de monedas.\n" ;
    
// Calcular el número aleatorio y desplegarlo. . . . . . . . . . . . . .

        x = rand()% 95 + 5 ;

  cout << "\tDetermine la combinación de monedas para un cambio de "
       << x << " centavos..." << endl;
    
// Pausar el programa. . . . . . . . . . . . . . . . . . . . . . . . . .
    
  cin.get() ;
    
// Calcular y desplegar la cantidad de monedas . . . . . . . . . . . . .

 
  cout << "\tPesetas ---> " << x / 25 << endl ;
        x = x % 25 ;

  cout << "\tDimes -----> " << x / 10 << endl ;
        x = x % 10 ;

  cout << "\tVellones --> " << x / 5  << endl ;
        x = x % 5 ;

  cout << "\tChavitos --> " << x / 1  << endl ;
        x = x % 1 ;

  return 0;

}