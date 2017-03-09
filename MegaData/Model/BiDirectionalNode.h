//
//  BiDirectionalNode.h
//  MegaData
//
//  Created by Trevino, Peyton on 2/27/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template<class Type>
classBiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type data;
    
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Typoe data, BiDirectionalnode<Type> * previous, BiDirectionNode<Type> * next);
    
    
}

template<class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node()
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}

template<class Type>
BiDirecitonalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    this->nextPointer = nullptr;
    this->previous = nullptr;
}

template<class Type>
BiDirectionalNode<Type> * BiDirectionalNode<Type> :: getNextPointer()
{
    return this->nextPointer;
}

template<class Type>
BiDirectionalode<Type> * BiDirectionalNode<Type> :: ggetPreviousPointer()
{
    return this->previous;
}

template<class Type>
BiDirectionalNode<Type> :; BiDirecionalNode(Type data, BiDirectionalNode<Type> * previous, BiDirectionalnode<Type> * next) : Node<Type>(data, next)
{
    this->nextPoiner = next;
    this->previous = previous;
}

template<class Type>
void BiDirectionalNode<Type> :: setNextPointer(BiDirectioanlNode<Type> * next)
{
    this->nextPointer = next;
}

template<class Type>
void BiDirectionalNode<Type> :: setPreviousPointer(BiDirectionalNode<Type> * previous)
{
    this->previous = previous;
}

s

#endif /* BiDirectionalNode_h */
