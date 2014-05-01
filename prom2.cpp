#include <iostream>
using namespace std ;

int main () {

// Declarar variables

	double suma = 0.0 ;
	double x = 0 ;
	double prom ;
	int conta = 0 ;

// Desplegar Proposito

cout << "\t Este programa calcula el promedio de los datos el usuario indique."

// Ingresar y sumar los de datos

  cout << "Ingrese datos (-1 para terminar) ---> " ;
  cin >> x ; 
  
  while ( x != -1 ) {
  
  	suma += x ; 
  	conta++ ;
  	cout << "Ingrese datos (-1 para terminar) ---> " ;
  	cin >> x ; 
  }
   
// Calcular pormedio
   
  if (conta != 0) {
      
      prom = suma / static_cast<double>(conta) ;
      
      cout << fixed << setprecision(2) ;
      cout << "El promedio = " << setw(10) << prom << endl ;
  }   
  
  else 
  
   	cout << "\t<--- No hay datos! --->\n\n" ;
  
return 0 ;

}