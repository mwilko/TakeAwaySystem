//
//  Order.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//

#ifndef Order_h
#define Order_h

#include "ItemList.h"

class Order : ItemList//class Order inherits from ItemList class
{
private:
    int total = NULL;
public:
    int calculateTotal();
    std::string printReceipt();
    
    void addItem();
    void removeItem();
};

#endif /* Order_h */
