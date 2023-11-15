//
//  Item.hpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//
//
#ifndef Item_h
#define Item_h

#include <iostream>


class Item {
    int calories;
    std::string name;
    double price;
    
public:
    std::string toString();
};
#endif /* Item_h */
