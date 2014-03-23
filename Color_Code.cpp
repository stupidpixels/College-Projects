/*

Header : 
*--------------------------------------------------------------*
| Julio Franco Gonzalez                                        |
| Estudiante 801.13.2416                                       |
*--------------------------------------------------------------*
Descripcion : 
*--------------------------------------------------------------*
| Este programa, dado un numero de 0 - 9 te da el color        | 
| asignado a este.                                             |
|                                                              |
| número | color                                               |
| ----------------                                             |
| 0      | negro                                               |
| 1      | marrón                                              |
| 2      | rojo                                                |
| 3      | anaranjado                                          |
| 4      | amarillo                                            |
| 5      | verde                                               |
| 6      | azul                                                |
| 7      | violeta                                             |
| 8      | gris                                                |
| 9      | blanco                                              |
*--------------------------------------------------------------*

*/

#include <iostream>
using namespace std;

int main() {

int x ; 

cout << "Entre un numero entre 0 y 9 : " ;
cin >> x ; 

switch (x) {
  case 0: cout << "*-----------------------*\n"
                  "|   El color es negro.  |\n"
                  "*-----------------------*\n";
  	break;

  case 1: cout << "*-----------------------*\n"
                  "|  El color es marron.  |\n"
                  "*-----------------------*\n";
    break;
  
  case 2: cout << "*-----------------------*\n"
                  "|   El color es rojo.   |\n"
                  "*-----------------------*\n";
    break;
  
  case 3: cout << "*-----------------------*\n"
                  "|El color es anaranjado.|\n"
                  "*-----------------------*\n";
    break;
  
  case 4: cout << "*-----------------------*\n"
                  "| El color es amarillo. |\n"
                  "*-----------------------*\n";
    break;
  
  case 5: cout << "*-----------------------*\n"
                  "|   El color es verde.  |\n"
                  "*-----------------------*\n";
    break;
  
  case 6: cout << "*-----------------------*\n"
                  "|   El color es azul.   |\n"
                  "*-----------------------*\n";
    break;
  
  case 7: cout << "*-----------------------*\n"
                  "| El color es violeta.  |\n"
                  "*-----------------------*\n";
    break;
  
  case 8: cout << "*-----------------------*\n"
                  "|    El color es gris.  |\n"
                  "*-----------------------*\n";
    break;
  
  case 9: cout << "*-----------------------*\n"
                  "|   El color es blaco.  |\n"
                  "*-----------------------*\n";
    break;
  default : cout << "*-----------------------*\n"
                    "|   	  ERROR  		 |\n"
                    "*-----------------------*\n";
  }
}