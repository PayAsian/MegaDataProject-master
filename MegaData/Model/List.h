//
//  List.h
//  MegaData
//
//  Created by Trevino, Peyton on 2/21/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#ifndef List_h
#define List_h
#include <assert.h>

class List
{
private:
    int size;
    Node<Type> * front;
    
public:
    List();
    List(int size);
    List<Type>();
    List<Type>(const List<Type> & toBeCopied);
    ~List<Type>();
    void setAtIndex(int index, Type value);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    int getSize();
    
};

template<class Type>
void List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * newFirst = new Node<Type>();
        newFirst->setNodeData(value);
        newFirst->setNodePointer(front);
        
        this->front = newFirst;
    }
    
    size++;
}

template<class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    
    size++;
}

template<class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    else if
    {
        addEnd(value);
    }
    else
    {
        Node<Type> * insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNodePointer();
        }
    }
    
}


#endif /* List_h */
