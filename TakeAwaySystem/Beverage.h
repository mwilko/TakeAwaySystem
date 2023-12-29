//
//  Beverage.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 08/11/2023.
//

#ifndef Beverage_h
#define Beverage_h

#include "Item.h"

class Beverage : public Item {
public:
    Beverage(const std::string& name, double calories, double price, const std::string& type, double volume, double abv);

    std::string toString() const override;

    const std::string& getType() const;
    double getVolume() const;
    double getAbv() const;

private:
    std::string type;
    double volume;
    double abv;
};

#endif /* Beverage_h */
