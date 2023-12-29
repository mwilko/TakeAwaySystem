//
//  Item.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//

#include "Item.h"
//#include "Appetiser.h"
//#include "MainCourse.h"
//#include "Beverage.h"
#include <sstream>


Item::Item(const std::string& itemName, double itemPrice, double itemCalories)
    : _name(itemName), _price(itemPrice), _calories(itemCalories) {}

std::string Item::toString() const {
    return "Item: " + _name + ", Price: " + std::to_string(_price) + ", Calories: " + std::to_string(_calories);
}

void Item::getItemVariables() const {
    std::cout << _name << ", " << _price << ", " << _calories << std::endl;
}

Item::~Item() = default;  // Can add implementation when/if needed
