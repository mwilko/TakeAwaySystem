//
//  Beverage.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 08/11/2023.
//

#ifndef Beverage_h
#define Beverage_h

#include "Item.h"

class Beverage : Item {
private:
    double abv; //alcohol by volume: double variable
    int volume; //volume of beverage (ml): integer variable
public:
    bool isAlcoholic();
    std::string toString();
};

#endif /* Beverage_h */
