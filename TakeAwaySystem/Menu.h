//
//  Menu.hpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//

#ifndef Menu_h
#define Menu_h

#include "ItemList.h"

class Menu : ItemList//class Menu inherits from ItemList class
{
private:
    int count = NULL;
    
public:
    Menu(std::string file = "null");
    std::string ToString();//derived function
};


#endif /* Menu_h */
