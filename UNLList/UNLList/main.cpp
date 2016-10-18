//
//  Julio Franco Gonzalez 801.13.2416
//  main.cpp
//  SOLList_xcode
//
//


#include <iostream>
#include "SOLList.h"


using namespace std ;

template<class Type>
void Display(SOLList<Type> l) ;

template<class Type>
void Execute(int, SOLList<Type>&) ;

int Menu() ;

int main() {

    const int EXIT = 7 ;
    int option ;
    SOLList<int> list ;

    do {

    option = Menu() ;

    Execute(option, list) ;

    } while (option != EXIT);

    return EXIT_SUCCESS ;
}

template<class Type>
void Execute(int option, SOLList<Type>& list) {

    Type item ;

    switch (option) {
        case 1:
            cout << "Insert : " ;

            cin >> item ;
            list.insert(item) ;

            break;

        case 2:
            cout << "Remove : " ;

            cin >> item ;
            list.remove(item) ;

            break ;

        case 3:
            cout << "Search : " ;

            cin >> item ;
            
            if (list.search(item))
                cout << "The element is in the list" << endl ;
            else
                cout << "The element is not in the list" << endl  ;
            
            break ;

        case 4:
            cout << "Display : \n\n" ;

            list.print() ;

            break ;

        case 5:
            cout << "Elements : " ;
            cout << list.length() << endl ;

            break ;

        case 6:
            cout << "Erased The List" ;
            list.clear() ;
            
            break ;

        case 7:
            break ;
    }
}

int Menu() {

    int input ;

    cout << "\t<<< LIST OPTIONS >>> \n\n"

         << "1. Insert an element\n"
         << "2. Remove an element\n"
         << "3. Search for an element\n"
         << "4. Display the list\n"
         << "5. Number of elements\n"
         << "6. Erase the list\n"
         << "7. EXIT\n"

         << "\nInput your selection: " ;


    cin >> input ;

    return input ;
}
