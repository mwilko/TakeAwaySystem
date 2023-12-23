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
private:
    int calories;
    std::string name;
    double price;
    Item* _item;
    
public:
    Item(const std::string& itemName);
    virtual std::string toString() const;
    ~Item();

};
#endif /* Item_h */
