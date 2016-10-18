//
//
//  UNLList
//
//  Created by Frank Gonzalez on 10/4/16.
//  Copyright © 2016 HAXE. All rights reserved.
//

#ifndef UNLList_h
#define UNLList_h

#include <iostream>

using namespace std ;

template <class Type>
struct Node {
    Type info ;
    Node<Type> * link ;
};

template <class Type>
class UNLList {
  protected :
    Node<Type> * head ;
  
  private :
    void destroyList() ;
    void copy(const UNLList&) ;

    
  public :
    /* Constuctor Prototype.
    --------------------------------------------------------------------------*/
    UNLList() ;
    
    /* Copy Constructor.
     -------------------------------------------------------------------------*/
    UNLList(const UNLList<Type>&) ;
    
    /* Desstuctor Prototype.
     -------------------------------------------------------------------------*/
    ~UNLList() ;
    
    /* Overloaded Asignment Operator.
     -------------------------------------------------------------------------*/
    const UNLList<Type>& operator=(const UNLList<Type>&) ;
    
    /* Observers.
     -------------------------------------------------------------------------*/
    
    int  length () const ;
    void print  () const ;
    bool isEmpty() const ;
    bool isFull () const ;
    bool search (const Type) const ;
    
    /* Modifiers.
     -------------------------------------------------------------------------*/
    
    void insert(Type) ;
    void remove(Type) ;
    void clear() ;
    
};

/* Constructor.
 -----------------------------------------------------------------------------*/
template <class Type>
UNLList<Type>::UNLList() : head(NULL) { }

/* Copy Constructor.
 -----------------------------------------------------------------------------*/
template <class Type>
UNLList<Type>::UNLList(const UNLList<Type> & other) { copy(other) ; }

/* Destructor.
 -----------------------------------------------------------------------------*/
template <class Type>
UNLList<Type>::~UNLList() { destroyList() ; }

/* Overloaded Asignment Operator.
 -----------------------------------------------------------------------------*/
template <class Type>
const UNLList<Type>& UNLList<Type>::operator=(const UNLList<Type>& other) {
    
    // Avoid Self-Assignment.
    if (this != &other) {
        destroyList() ;
        copy(other) ;
    }
    return * this ;
}

/* Destroy List.
 -----------------------------------------------------------------------------*/
template <class Type>
void UNLList<Type>::destroyList() {
    Node<Type> * kod ;
    
    while (head != NULL) {
        kod = head ;
        head = head -> link ;
        delete [] kod ;
    }
}

/* Observers.
 -----------------------------------------------------------------------------*/
template <class Type>
int UNLList<Type>::length () const {
    
    int count = 0 ;
    Node<Type> * current = head ;
    
    while (current != NULL) {
        count++ ;
        current = current -> link ;
    }
    
    return count ;
}

template <class Type>
void UNLList<Type>::print  () const {
    
    if (isEmpty())
        cout << "\nEmpty List. Cannot Print.\n" ;
    
    else {
        Node<Type> * current = head ;
//      while(current != NULL)
//          cout << current->info << endl ;
        
        cout << "\n\t<<< ELEMENTS OF THE LIST >>>\n" ;
        
        for (int i = 1; i <= length(); i++) {
            cout << i << ") " << current->info << endl ;
            current = current->link ;
        }
    }
}

template <class Type>
bool UNLList<Type>::isEmpty() const { return head == NULL ; }

template <class Type>
bool UNLList<Type>::isFull () const {
    
    bool full ;
    
    Node<Type> * temp ;
    temp = new Node<Type> ;
    
    if (temp == NULL)
        full = true ;
    
    else {
        full = false ;
        delete temp ;
    }
    
    return full ;
}

template <class Type>
bool UNLList<Type>::search (const Type item) const {
    
    bool found = false ;
    
    if (isEmpty())
        cout << "Empty List. Cannot Search\n" ;
    
    else {
        Node<Type> * current = head ;
        
        while (current != NULL && !found)
            
            if (item == current->info)
                found = true ;
            else
                current = current -> link ;
    }
    
    return found ;
}


/* Modifiers.
 -----------------------------------------------------------------------------*/
template <class Type>
void UNLList<Type>::insert(Type item) {

    if (!isEmpty() && search(item))
        cout << item << " already in the list.\n" ;
    
    else {
        
        Node<Type> * newNode = new Node<Type> ;
        newNode->info = item ;
        newNode->link = NULL ;
        
        // Case 1 : empty list.
        if (isEmpty())
            head = newNode ;
    
        // Case 2 : non-empty list.
        else {
            Node<Type> * current = head ;
            while (current->link != NULL)
                current = current->link ;
            
            current->link = newNode ;
        }
    }
}

template <class Type>
void UNLList<Type>::remove(Type item) {
    
    if (isEmpty())
        cout << "Empty List. Cannot Remove.\n" ;
    
    else if(!search(item))
        cout << item << " Not In List.\n" ;
    
    else {
        if (head->info == item) {
            Node<Type> * kod = head ;
            head = head->link ;
            delete kod ;
        }
        
        else {
            Node<Type> * current  = head->link ;
            Node<Type> * previous = head ;
            
            while (current-> info != item) {
                previous = current ;
                current  = current->link ;
            }
            previous->link = current->link ;
            delete current ;
        }
    }
}

template <class Type>
void UNLList<Type>::clear() { destroyList() ; }


template <class Type>
void UNLList<Type>::copy(const UNLList<Type> & other) {
    
    if (other.isEmpty())
        head = NULL ;
    
    else {
        // Copy first node.
        Node<Type> * newNode ;
        Node<Type> * current = other.head ;
        
        head = new Node<Type> ;
        head->info = current->info ;
        head->link = NULL ;
        
        // Copy the rest.
        Node<Type> * previous = head ;
        current = current->link ;
        
        while (current != NULL) {
            
            // Create Node.
            newNode = new Node<Type> ;
            newNode->info = current->info ;
            newNode->link = NULL ;
            
            // Insert node.
            previous->link = newNode ;
            
            // Update node.
            previous = previous->link ;
            current  = current ->link ;
        }
    }
}

#endif /* UNLList_h */
