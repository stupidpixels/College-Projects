//
//  Julio Franco Gonzalez 801.13.2416
//  main.cpp
//  UAList_xcode
//
//


#include <iostream>
#include "SAList.h"


using namespace std ;

template<class Type>
void Display(UAList<Type> l) ;

template<class Type>
void Execute(int, SAList<Type>&) ;

int Menu() ;

int main() {

    const int EXIT = 8 ;
    int option ;
    SAList<int> list ;

    do {

    option = Menu() ;

    Execute(option, list) ;

    } while (option != EXIT);

    return EXIT_SUCCESS ;
}

template<class Type>
void Execute(int option, SAList<Type>& list) {

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
            list.search(item) ;

            break ;

        case 4:
            cout << "Display : \n\n" ;

            list.print() ;

            break ;

        case 5:
            cout << "Elements : " ;
            cout << list.listLength() ;

            break ;

        case 6:
            cout << "Capacity : " ;
            list.listSize() ;

            break ;

        case 7:
            cout << "Erased The List" ;
            list.clear() ;

            break ;

        case 8:
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
         << "6. List capacity\n"
         << "7. Erase the list\n"
         << "8. EXIT\n"

         << "\nInput your selection: " ;


    cin >> input ;

    return input ;
}
