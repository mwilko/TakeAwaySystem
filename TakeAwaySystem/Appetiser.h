//
//  Appetiser.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 08/11/2023.
//

#ifndef Appetiser_h
#define Appetiser_h

#include "Item.h"

class Appetiser : public Item {
public:
    Appetiser(std::string& name, double price, int calories, bool shareable, bool twoForOne);
    virtual ~Appetiser();

    std::string toString() const override;
    bool isShareable() const;
    bool isTwoForOne() const;

private:
    bool shareable;
    bool twoForOne;
};

#endif /* Appetiser_h */
