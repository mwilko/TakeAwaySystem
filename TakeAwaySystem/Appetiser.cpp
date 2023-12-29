//
//  Appetiser.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//
//
#include "Appetiser.h"

Appetiser::Appetiser(std::string& name, double price, int calories, bool shareable, bool twoForOne)
    : Item(name, price, calories), shareable(shareable), twoForOne(twoForOne) {}

Appetiser::~Appetiser() {}

std::string Appetiser::toString() const {
    std::string shareableStr = shareable ? " (Sharable)" : "";
    std::string twoForOneStr = twoForOne ? " (Two for One)" : "";
    return Item::toString() + shareableStr + twoForOneStr;
}



