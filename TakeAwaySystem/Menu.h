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
    //loads menu object from file path (path = parameter)
    Menu(std::string file);
    std::vector<Item*>& getItems();//getter function to access private vector 'items'
    
    //display whole menu in attractive way (structure: a, m, b)
    std::string toString() const override;//derived function
    ~Menu();
};


#endif /* Menu_h */
