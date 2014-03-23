/*

Header : 
*---------------------------------------------------------------*
| Julio Franco Gonzalez                                         |
| Estudiante 801.13.2416                                        |
*---------------------------------------------------------------*
Description : 
*---------------------------------------------------------------*
| Este programa imprime el resultado del exponencial utilizando |
| la formula e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/20!           |
*---------------------------------------------------------------*
Pseudocode : 
*---------------------------------------------------------------*
| 1. Definir las variables.                                     |
| 2. Calcular los factoriales.                                  |
| 3. Sumar los factoriales.                                     |
| 4. Desplegar los resultados.                                  |
*---------------------------------------------------------------*
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
  // *----------------- Definir las variables. -----------------*

  double x = 1 ; 
  double e = 1 ; 
  double w ;

  // *----------- Ciclo para sumar los factoriales. ------------*

	for (int i = 1 ; i <= 20 ; i++) 
  { 

  // *------- Ciclo para calcular factoriales de 1 - 20. -------*

    for (int j = 1 ; j <= i ; j++)
      x = x * j ;
   
    w = 1 / x ;  
   
    x = 1 ;
   
    e += w ;
	}

  // *---------------- Desplegar los resultados ----------------*

  cout << "\n\t----- Valor de e obtenido mediante sumatoria:  " 
       << fixed  << setprecision(25) << e << endl ;
 
  cout << "\n\t----- Valor de e obtenido usando exp(1):       " 
       << exp(1) << endl<< endl;

  cin.get() ;

  return 0 ;
}