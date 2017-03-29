//
//  FileController.hpp
//  MegaData
//
//  Created by Trevino, Peyton on 3/29/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Model/DoubleList.h"
#include "../Model/FoodItem.hpp"
#include "../Model/CrimeData.hpp"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>


using namespace std;

class FileController
{
private:
    DoubleList<FoodItem> foodItemList;
    
public:
    DoubleList<FoodItem> readFoodItemDataFromFileAsList(string filename);
    void writeFoodItemDataStatistics(DoubleList<FoodItem> source, string filename);
};

#endif /* FileController_hpp */
