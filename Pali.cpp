/*

Header : 
*---------------------------------------------------------------*
| Julio Franco Gonzalez - 801.13.2416                           |
| Angel Sanquiche       - 801.13.7075                           |
*---------------------------------------------------------------*
Description : 
*---------------------------------------------------------------*
| Este programa le pide al usuario una palabra y verifica si    |
| esa palabra es un palindromo o no.                            |
*---------------------------------------------------------------*
Algoritmo :
*---------------------------------------------------------------*
| 1. Pedirle al usuario la palabra.                             |
| 2. Verificar el length de la palabra.                         |
| 3. Virar la palabra alreves.                                  |
| 4. Verificar si es palindromo.                                |
| 5. Desplegarle al usuario si es palindromo o no.              |
*---------------------------------------------------------------*
*/

#include <string>
#include <iostream>

using namespace std;

int  main() {

// Definir variables.
	
  string word;

	int leng;	
	int cont=0;

// Pedirle al usuario la palabra.	
	
  cout << "Entra una palabra y te diremos si es un palindromo: ";
	cin >> word;

// Verificar el length de la palabra.

	leng = word.length() - 1;

// Loop para virar la palabra alreves.

	for (int x=0 ; x<word.length() ; x++) {

		if(word[x]==word[leng])
		
    cont+=1;
		
    leng--;
	}

// Verificar si es palindromo.

	if(cont == word.length())

// Desplegar si es palindromo o no.
	
		cout << "la palabra '"<< word<< "' es si un palindromo."
	
			 << endl;

	else
	
		cout << "la palabra '"<< word<< "' no es un palindromo."
	
			 << endl;

	return 0;
}
