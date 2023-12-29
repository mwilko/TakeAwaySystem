//
//  MainCourse.h
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 08/11/2023.
//

#ifndef MainCourse_h
#define MainCourse_h

#include "Item.h"

class MainCourse : public Item {
public:
    MainCourse(const std::string& itemName, double itemPrice, int itemCalories);
    virtual ~MainCourse();
};

#endif /* MainCourse_h */
