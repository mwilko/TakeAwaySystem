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
public:
    Item(const std::string& itemName, double itemPrice, double itemCalories);
    virtual ~Item();

    virtual std::string toString() const;
    virtual void getItemVariables() const;

private:
    std::string _name;
    double _price;
    double _calories;
};

#endif /* Item_h */
