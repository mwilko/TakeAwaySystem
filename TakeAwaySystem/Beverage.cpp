//
//  Beverage.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//
//
#include <stdio.h>
#include "Beverage.h"
#include <sstream>

Beverage::Beverage(const std::string& name, double calories, double price, const std::string& type, double volume, double abv)
    : Item(name, calories, price), type(type), volume(volume), abv(abv) {}

std::string Beverage::toString() const {
    // Implement the toString function for Beverage if needed
    return Item::toString() + ", Type: " + type + ", Volume: " + std::to_string(volume) + "ml, ABV: " + std::to_string(abv);
}

const std::string& Beverage::getType() const {
    return type;
}

double Beverage::getVolume() const {
    return volume;
}

double Beverage::getAbv() const {
    return abv;
}

