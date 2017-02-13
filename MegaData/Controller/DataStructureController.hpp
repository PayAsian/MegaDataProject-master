//
//  DataStructureController.hpp
//  MegaData
//
//  Created by Trevino, Peyton on 2/8/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#ifndef DataStructureController_hpp
#define DataStructureController_hpp

#include "/Users/ptre8426/Downloads/MegaDataProject-master/MegaData/Model/Node.hpp"
#include <string>

using namespace std;

class DataStructureController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
public:
    DataStructureController();
    void start();
    
};

#endif /* DataStructureController_hpp */
