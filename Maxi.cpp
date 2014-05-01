/*

Header : 
*--------------------------------------------------------------*
| Julio Franco Gonzalez                                        |
| Estudiante 801.13.2416                                       |
*--------------------------------------------------------------*
Description : 
*--------------------------------------------------------------*
| Este programa determina cuál es el valor máximo de una       |
| funcion entre los valores de x desde 1 al 20.                |
*--------------------------------------------------------------*
Pseudocodigo : 
*--------------------------------------------------------------*
| 1. Definir variables                                         |
| 2. Resolver la equacion 20 veces con el rango de [1,20].     |
| 3. Darle el valor maximo de la equacion a max.               |
| 4. Desplegar los resultados.                                 |
*--------------------------------------------------------------*
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {

// Definir variables ------------------------------------------*

int n ;
double x = 1 ;
double max = -1000 ;
double eq ; 

// Resolver la equacion 20 veces con el rango de [1,20]. ------*

for (x = 1 ; x <= 20 ; x++) {

  eq = (pow((-x/10.0),5.0)) - (pow(sin(-x/10.0),2.0)) ;
  cout << "\tDominio : " << x << " " << eq << endl ;

// Darle el valor maximo de la equacion a max. ----------------*

  if (eq > max) {
    max = eq ;
    n = x ;
  }
}

// Desplegar los resultados. ----------------------------------*

cout << "\n\tEl valor maximo de f(x) para el dominio [1, 20] es " 
     << max << endl;
cout << "\ty es obtenido cuando x es " << n << endl << endl ; 

return 0 ;

}