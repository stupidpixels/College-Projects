//
// Unsorted List Class
//
#include <iostream>
using namespace std ;

#ifndef UALIST_H
#define UALIST_H

template<class Type>
class UAList {

  protected:
	// Fisical Length
	int maxSize ;

	// Logical Length
	int length  ;

	// Actual List
	Type * list  ;

	void copy(const UAList<Type>&) ;

  public:

  	/* Default Constructor initialized list to 100 spaces.
  	-------------------------------------------------------------------------*/
	UAList(int = 100) ;

	/* Copy Constructor.
     -------------------------------------------------------------------------*/
	UAList(const UAList<Type>&) ;

	/* Destructor.
     -------------------------------------------------------------------------*/
	~UAList() ;

	const UAList<Type>& operator= (const UAList<Type>&) ;

	// Observers
	bool isEmpty   () const ;
	bool isFull    () const ;

	int  listSize  () const ;
	int  listLength() const ;
	int  search(Type) const ;

	void print     () const ;

	// Mutators
	void insert(Type) ;
	void remove(Type) ;
	void clear ()     ;
};

#endif

//
// Implementation.
//

template<class Type>
UAList<Type>::UAList(int size) {
	maxSize = size > 0 ? size : 100 ;
	length  = 0    ;

	// Generate List
	list = new Type[maxSize] ;
}


template<class Type>
UAList<Type>::~UAList() {
	delete [] list ;
	list = NULL ;
}

template<class Type>
UAList<Type>::UAList(const UAList<Type>& original) { copy(original) ; }

template<class Type>
const UAList<Type>:: & operator=(const UAList<Type>& original) {

   // Avoid self assignment.
   if (this != &original) {
       delete [] list ;
       copy(original) ;
   }

   return *this ;
}

template<class Type>
void UAList<Type>::copy(const UAList<Type>& original) {

    maxSize = original.maxSize ;
    length  = original.length  ;

    // Create the list.
    list = new Type[maxSize] ;

    // Copy the list.
    for (int i = 0; i < length; i++)
        list[i] = original.list[i] ;
}

// Observers
template<class Type>
bool UAList<Type>::isEmpty() const { return length == 0 ; }

template<class Type>
bool UAList<Type>::isFull() const { return length == maxSize ;}

template<class Type>
int  UAList<Type>::listSize() const { return maxSize ; }

template<class Type>
int  UAList<Type>::listLength() const { return length ; }

template<class Type>
int UAList<Type>::search(Type item) const {

    int  position = -1 ;
    bool found = false ;

    for (int i = 0 ; i < length && !found ; i++)

        if (list[i] == item) {
            position = i ;
            found = true ;
        }

    return position ;
}

template<class Type>
void UAList<Type>::print() const {

	if (isEmpty())
		cout << "Empty List.\n" ;

	else {
		cout << "The List is :\n" ;
		for (int i = 0; i < length; i++) {
			cout << (i + 1) << ") " << list[i] << endl ;
		}
	}
}

// Mutators

template<class Type>
void UAList<Type>::insert(Type n) {

	if (isFull())
		cout << "Full list, cannot insert.\n" ;

	else if (search(n) != -1)
		cout << n << "Already in the list.\n" ;

	else
		list[length++] = n ;
}

template<class Type>
void UAList<Type>::remove(Type n) {

	int location = search(n) ;

	if (isEmpty())
		cout << "Empty list, cannot remove.\n" ;

	else if (location == -1)
		cout << "Not in the list.\n" ;

    else {
		list[location] = list[length - 1] ;
		length-- ;
	}
}

template<class Type>
void UAList<Type>::clear() { length = 0 ; }



