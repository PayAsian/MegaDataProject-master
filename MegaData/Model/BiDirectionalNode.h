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
    
}

template<class Type>
BiDirecitonalNode<Type> :: BiDirectionalNode(Type data) : Node<Type>(data)
{
    
}



#endif /* BiDirectionalNode_h */
