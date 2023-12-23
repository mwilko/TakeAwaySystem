//
//  ItemList.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 08/11/2023.
//

#ifndef ItemList_h
#define ItemList_h

#include <vector>
#include "Item.h"
#include <iostream>


class ItemList {
protected:
    std::vector<Item*> items;

public:
    virtual std::string toString() const = 0;
};

#endif /* ItemList.h */
