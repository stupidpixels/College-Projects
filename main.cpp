/*

Header : 
*------------------------------------------------------------*
| Julio Franco Gonzalez                                      |
| Estudiante 801.13.2416                                     |
*------------------------------------------------------------*
Description : 
*------------------------------------------------------------*
| This program uses functions to encrypt, decrypt words and  |
| add numbers depeending on a cause that has to be met.	     |
*------------------------------------------------------------*

*/

#include <iostream>
#include <string>

using namespace std ;

// Prototypes

int foo(int) ;

string tkEncrypt(string) ;

string tkDecrypt(string) ;

int main() {

	cout << "\n\t<<< RESULTADOS >>>\n" ;

cout << "*----------------------------------------*" ;

// Called the function foo() with the parameters of 4 and 9

	cout << "\nResultado pasando argumento 4: " << foo(4) << endl;
	cout << "Resultado pasando argumento 9: " 	<< foo(9) << endl;

cout << "*----------------------------------------*\n" ;

// Called the function tkEncrypt with the parameters "zorra and "candido".

	cout << "zorra encriptada es: "   << tkEncrypt("zorra")   << endl;
	cout << "candido encriptada es: " << tkEncrypt("candido") << endl;

cout << "*----------------------------------------*\n" ;

// Checked the function tkEncrypt() with the fucntion tkDecrypt.

	string st = "perro" ;
	
	if (st == tkDecrypt( tkEncrypt( st ) ) ) {
  
   		cout << "Encripte y decripte correctamente!\n\n" ;
	
  }
	else {
  		
      cout << "Luego de encriptar no logre recuperar el "
        	 << "mensaje original\n\n" ;
	
  }
	
	return 0 ;
	
}

// Defining Functions.

int foo(int t) {
	int n = 0 ;

	for (int i = 0 ; i < t ; ++i){
		n = n + i ;
	}

	return n ;
}

string tkEncrypt(string st) {
	int len = st.length() + 1 ;

	for (int i = 0; i < len ; i++) {
   	
    if (st[i] == 'z'){
      st[i] = 'a' - 1 ;
    }
    
    st[i]++ ;
   	
    if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u') {
		  st[i] = toupper(st[i]) ;
 		}
	
  }
	return st ;
}

string tkDecrypt(string st) {
	int len = st.length() + 1 ;

	for (int i = 0 ; i < len ; i++ ) {
		
    if (st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U') {
			st[i] = tolower(st[i]) ;
		}
		
    st[i]-- ;
	
  }
	return st ;
}