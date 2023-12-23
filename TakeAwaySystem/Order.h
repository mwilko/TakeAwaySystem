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
    //consider 2-4-1 discount, if there is, minus one of them, display as savings
    //(bonus: remove the 2-4-1 item with the lowest price)
    int calculateTotal();
    
    //write final order to 'receipt.txt'
    //done by using the output of the 'toString' method
    std::string printReceipt();
    
    //add/remove based on menu numeric position (starting at 1)
    //when order is altered, inform the user on the action, recalculate + display total price
    void add(Item* choice);
    void remove(Item* choice);
    
    //display items on order, total price and savings made
    std::string toString() const override;

};

#endif /* Order_h */
