//
//  ItemList.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 08/11/2023.
//

#ifndef ItemList_h
#define ItemList_h

#include <iostream>

//ItemList is an abstract class, all functions need to be virual
class ItemList
{
private:
    
public:
    //instances of the item class should be stored by reference as a vector of pointers
    std::vector<std::string*> items;
    virtual std::string toString();
};

#endif /* ItemList_h */
