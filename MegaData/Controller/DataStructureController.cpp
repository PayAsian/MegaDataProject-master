//
//  DataStructureController.cpp
//  MegaData
//
//  Created by Trevino, Peyton on 2/8/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#include "DataStructureController.hpp"
#include <iostream>
#include "../Model/IntNodeArray.hpp"
using namespace std;

DataStructureController :: DataStructureController()
{
    wordNode = Node<string>("derpy mcderpface");
    numberNode = Node<int>();
}

void DataStructureController:: testNodes()
{
    cout << "" << endl;
    cout << wordNode.getNodeData() << endl;
    cout << "" << endl;
    cout << numberNode.getNodeData() << endl;
    
}

void DataStructureController :: start()
{
    cout << "Starting the project" << endl;
    
    cout << "Switching to the array testing" << endl;
    testIntArray();
    cout << "Finished testing" << endl;
}

void DataStructureController :: testIntArray()
{
    cout << "Testing the array" << endl;
    
    IntNodeArray temp = IntNodeArray(3);
    
    for(int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    cout << "Tesing input" << endl;
    
    for(int index = 0; index < temp.getSize(); index++)
    {
        temp.setAtIndex(index, index);
    }
    
    for(int index = 0; index < 3; index++)
    {
        cout << temp.getFromIndex(index) << " is at spot " << index << endl;
    }
    
    void DataStructureController :: testListIntro()
    {
        List<int> sample;
        sample.addFront(2);
        sample.addEnd(3);
        sample.addFront(1);
        
        for(int index = 0; index < sample.getSize(); index++ )
        {
            cout << sample.getFromIndex(index) << endl;
            cout << sample.remove(1) << endl;
        }
        
        count << "Size should read 3 and is " << sample.getSize() << endl;
    }
    
}
