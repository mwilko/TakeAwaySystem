//
//  Input.hpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 23/12/2023.
//

#ifndef Input_hpp
#define Input_hpp

#include <stdio.h>
#include <iostream>


class Input {
private:
    std::string _typeError = "TypeError. Plase enter a valid value";
    
public:
    int GetInput(int rawValue);
    std::string GetInput(std::string rawInput);
};

#endif /* Input_hpp */
