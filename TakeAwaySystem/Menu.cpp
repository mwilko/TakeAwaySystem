//
//  Menu.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//
//

#include "Menu.h"
#include "Appetiser.h"
#include "MainCourse.h"
#include "Beverage.h"
#include <stdexcept>
#include <sstream>
#include <iostream>
#include <fstream>

Menu::Menu(std::string file) {
    std::ifstream fileContent(file);
    count = 0;

    if (!fileContent) {
        //displays error message with the reason for the error (e.g., cannot find file directory)
        std::cerr << "Error opening file " << file << ": " << strerror(errno) << std::endl;
        return;
    }

    std::string line;

    //iterates through all lines in given file parameter
    while (getline(fileContent, line)) {
        createItem(line);
    }

    fileContent.close();

    //outputs all vector indexes witht he toString function for attractive presentation
    for (int i = 0; i < items.size(); i++) {
        std::cout << items[i]->toString() << std::endl;
    }
}

Item* Menu::createItem(const std::string& line) {
    // Use stringstream to extract information from the line
    std::istringstream ss(line);
    char itemType;
    ss >> itemType;

    //take the name, price and calories and save them to the variables
    //WILL IMPLIMENT THIS INTO ITEM CLASS AT LATER DATE
    std::string name;
    double price, calories;
    ss >> name >> price >> calories;

    switch (itemType) {
        case 'a': {
            //extracts attribues and allocates them to variables with stringstream
            bool shareable, twoForOne;
            ss >> shareable >> twoForOne;
            //return a newly allocated appetiser object
            return new Appetiser(name, price, calories, shareable, twoForOne);
        }
        case 'm':
            //return a newly allocated maincourse object
            return new MainCourse(name, price, calories);
        case 'b': {
            //extracts attribues and allocates them to variables with stringstream
            std::string beverageType;
            double volume, abv;
            ss >> beverageType >> volume >> abv;
            //return a newly allocated beverage object
            return new Beverage(name, price, calories, beverageType, volume, abv);
        }
        default:
            //error handling, as specified, for invalid argument/ if menu file item didnt have a value (used for reusablility and code robustness)
            throw std::invalid_argument("Unrecognized item type");
    }
}

Item* Menu::getItemByIndex(int index) const {
    if (index >= 1 && index <= items.size()) {
        //returns the value of the given index = 1 because vector starts at index 0
        return items[index - 1];
    } else {
        return nullptr;//error handling, if specified index is higher than the vector size and if its lower than 1
    }
}

//getter function to return a vector since it's a private variable in 'Item.h'
std::vector<Item*>& Menu::getItems() {
    return items;
}

//display menu in an attractive way, group items with corresponding type
//(appetizer, main course, beverage)
std::string Menu::toString() const {
    std::string menu = NULL;

    std::cout << "-------- Max's Club House --------" << std::endl;

    return menu;
}

Menu::~Menu() {
    std::cout << "Menu destructor called" << std::endl;
}
