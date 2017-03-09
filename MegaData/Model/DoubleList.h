//
//  DoubleList.h
//  MegaData
//
//  Created by Trevino, Peyton on 3/9/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#ifndef DoubleList_h
#define DoubleList_h

#include "DoublyLinkedList.hpp"

template<class Type>
class DoubleList : public DoublyLinkedList<Type>
{
private:
public:
    DoubleList();
    ~DoubleList();
    void add(Type data);
    Type remove(int index);
    void addAtIndexFast(int index, Type value);
    Type getFromIndexFast(int index);
}

template<class Type>
void DoubleList<Type> :: add(Type value)
{
    
}

template<class Type>
Type DoubleList<Type>:: remove(int index)
{
    Type derp;
    BiDirectionalNode<Type>* nodeToTakeOut = this->getFront();
    for(int spot =  0; spot< index; spot++)
    {
        nodeToTakeOut = nodeToTakeOut->getNextPointer();
    }
    derp= nodeToTakeOut->getNodeData();
    
    BiDirectionalNode<Type>* prev = nodeToTakeOut->getPreviousPointer();
    BiDirectionalNode<Type>* next = nodeToTakeOut->getNextPointer();
    
    prev->setNextPointe(next);
    next->setPreviousPointer(prev);
    
    delete nodeToTakeOut;
    
    this->setSize(this->getSize() - 1);
    return derp;
}

template<class Type>
Type DoubleList<Type> :: getFromIndexFast(int index)
{
    assert(index >=0 && index < this->getSize());
    Type valueAtIndex;
    BiDirectionalNode<Type>* reference;
    if(index < this->getSize() / 2)
    {
        reference = this->getFront();
        for(int position = 0; position < index; position++)
        {
            reference = reference->getNextPointer();
        }
    }
    else
    {
        reference = this->getEnd();
        for(int position = this->getSize() -1; position > index; position--)
        {
            reference = reference->etPreviousPointer();
        }
    }
    valueAtIndex = reference->getNodeData();
    return valueAtIndex;
}ß
#endif /* DoubleList_h */
