#include <iostream>
#include <iomanip>
using namespace std ;

int main (){

// Declarar variables

double suma = 0.0 ;
double x ;
double prom ;
int n ;
int conta = 0 ;


// Desplegar Proposito

// Ingresar cantdad de datos

do {
   cout << "Ingrese cantidad ---> " ; 
   cin >> n ; 
   
    if (n < 0)
      cout << "ERROR" << endl ;
    }while (n < 1) ;

// Ingresar y sumar datos

for (int conta = 1 ; conta <= n ; conta++ )
   {
       cout << "Ingrese el dato " << conta << ") "; 
       cin >> x ;
       suma += x ;
   }
   
// Calcular pormedio
   
   prom = suma / static_cast<double>(n) ;
   cout << fixed << setprecision(2) ;
   
// Desploegar pormedio

   cout << "El promedio = " << setw(10) << prom << endl ;

    return 0 ;

}