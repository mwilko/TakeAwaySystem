//
//  Input.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 23/12/2023.
//

#include "Input.h"

int GetInput(int choice)
{
    bool isValid = false;
    do
    {
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // if input isnt an integer:
        if (std::cin.fail())
        {
            std::cin.clear();  // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard invalid input
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        }
        else
        {
            isValid = true;
        }

    } while (!isValid);

    return choice;
}
