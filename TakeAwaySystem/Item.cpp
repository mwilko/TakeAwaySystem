//
//  Item.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//

#include "Item.h"

Item::Item(const std::string& itemName) : _item(new Item(itemName)){
    
}

std::string Item::toString() const{
    std::string item;
    
    return item;
}

Item::~Item(){
    delete _item;
}
