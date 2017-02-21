//
//  Array.h
//  MegaData
//
//  Created by Trevino, Peyton on 2/15/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#ifndef Array_h
#define Array_h

#include "Node.hpp"
#include <assert.h>

template<class Type>
class Array
{
private:
    int size;
    Node<Type> * front;
public:
    Array();
    Array(int size);
    
    //Destructor
    ~Array<Type>();
    //Copy Constructor
    Array<Type>(const Array<Type> & toBeCopied);
    
    //Helper Methods
    void setAtIndex(int index, Type value);
    Type getFromIndex(int index);
    int getSize();
    
};

template <class Type>
Array<Type> :: Array()
{
    //Never used
    //Default construstor only supplied to avoid compilation error!
    
    
}

template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    
    this->size = size;
    this->front = new Node<Type>();
    
    for(int index = 1; index < size; index++)
    {
        Node<Type>() * current = new Node<Type>();
        current->setNodePointer(front);
        front = current;
    }
}

template <class Type>
void Array<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < size);
    Type balue;
    
    for(int spot = 0; spot < index; spot++)
    {
        current = current->getNodePointer();
    }
    current->setNodeData(value);
}

template <class Type>
Type Array<Type> :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    Type value;
    
    Node<Type> * current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer();
    }
    value = current->getNodeData();
    return value;
    
}

template <class Type>
int Array<Type> :: getSize()
{
    return this->size;
}


#endif /* Array_h */

