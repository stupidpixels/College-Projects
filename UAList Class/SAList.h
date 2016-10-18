#include "UAList.h"

#ifndef SALIST_H
#define SALIST_H

template<class Type>
class SAList : public UAList<Type> {

  public:
    // Constructor.
    SAList(int = 100);

    // Destructor.
    ~SAList();

    int  search(Type) ;
    void insert(Type) ;
    void remove(Type) ;
};

#endif // SA_LIST_H


template<class Type>
SAList<Type>::SAList(int n) : UAList<Type>(n) { }

template<class Type>
SAList<Type>::~SAList() { }

template<class Type>
int SAList<Type>::search(Type item) {

    int  position = -1 ;
    bool found = false ;

    int first = 0 ;
    int last = UAList<Type>::length - 1 ;
    int middle ;

    while(first <= last && ! found) {
        middle = (first + last) / 2 ;

        if (item == UAList<Type>::list[middle]) {
            found = true ;
            position = middle ;
        }

        else if (item < UAList<Type>::list[middle])
            last = middle -1 ;

        else
            first = middle +1 ;

    }

    return position ;
}

template<class Type>
void SAList<Type>::insert(Type item) {

    if(UAList<Type>::isFull())
        cout << "The List is full.\n" ;

    else if(search(item) != -1)
        cout << item << " already in the list.\n" ;

    else {

        int location = 0 ;

        while(location < UAList<Type>::length && item > UAList<Type>::list[location])
            location++ ;

        for (int i = UAList<Type>::length; i < location; i++)
            UAList<Type>::list[i] = UAList<Type>::list[i-1] ;

        // Insert.
        UAList<Type>::list[location] = item ;

        // Adjust the length.
        UAList<Type>::length++ ;
    }

}

template<class Type>
void SAList<Type>::remove(Type item) {

    if (UAList<Type>::isEmpty())
        cout << "Empty List.\n" ;

    else {
        int location = search(item) ;

        if (location == -1)
            cout << item << " Not in list.\n" ;

        else {
            for (int i = location + 1; i < UAList<Type>::length; i++)
                UAList<Type>::list[i-1] = UAList<Type>::list[i] ;

            UAList<Type>::length-- ;
        }
    }
}
