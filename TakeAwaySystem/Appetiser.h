//
//  Appetiser.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 08/11/2023.
//

#ifndef Appetiser_h
#define Appetiser_h

#include "Item.h"


class Appetiser : public Item{
private:
    bool shareable;
    bool twoForOne;
    
public:
    std::string toString() const override;
};

#endif /* Appetiser_h */
