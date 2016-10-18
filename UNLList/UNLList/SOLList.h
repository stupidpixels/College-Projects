//
//  SOLList
//  UNLList
//
//  Created by Frank Gonzalez on 10/7/16.
//  Copyright © 2016 HAXE. All rights reserved.
//

#ifndef SOLLIST_H
#define SOLLIST_H

#include "UNLList.h"
#include <iostream>

using namespace std ;

template <class Type>
class SOLList : public UNLList<Type> {

  public:
    // Redifened Search Function.
    bool search(Type) const ;
    
    // Redifined Insert Function.
    void insert(Type) ;
} ;

template <class Type>
bool SOLList<Type>::search(Type item) const {
    bool found = false ;
    
    if (UNLList<Type>::isEmpty())
        cout << "List is Empty. Cannot Search.\n" ;
    
    else {
        Node<Type> * current = UNLList<Type>::head ;
        bool flag = false ;
    
        while (current != NULL && !flag)
            
            if (item <= current-> info)
                flag = true ;
            
            else
                current = current-> link ;
        
        if (flag && current->info == item)
            found = true ;
    }
    
    return found ;
}

template <class Type>
void SOLList<Type>::insert(Type item) {
    
    if (!UNLList<Type>::isEmpty() && search(item))
        cout << item << " Already in the list.\n" ;
    
    else {
        
        // Create and fill New Node.
        Node<Type> * newNode = new Node<Type> ;
        newNode-> info = item ;
        newNode-> link = NULL ;
        
        // Case 1: Empty list.
        if (UNLList<Type>::isEmpty())
            UNLList<Type>::head = newNode ;
        
        // Case 2: Non-Empty List.
        else {
            Node<Type> * current = UNLList<Type>::head ;
            Node<Type> * trail   = NULL ;
            
            bool flag = false ;
            while (current != NULL && !flag){
                
                if (item <= current->info)
                    flag = true ;
                else {
                    trail   = current ;
                    current = current-> link ;
                }
            }
            
            if (current == UNLList<Type>::head) {
                newNode-> link = UNLList<Type>::head ;
                UNLList<Type>::head = newNode ;
            }
            
            else {
                trail-> link   = newNode ;
                newNode-> link = current ;
            }
        }
    }
}

#endif /* SOLLIST_H */
