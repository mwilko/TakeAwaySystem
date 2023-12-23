/* ------------------------------------------------------
CMP2811 Applied Programming Paradigms
Driver program for "Takeaway" assignment
Autumn 2023

This file is a representative test file.
During marking, we will use the exact same notation
as provided in the brief, so make sure you follow that guideline.
Also make sure that you don't modify the code provided here,
but instead add what you need to complete the tasks.

Good luck!
------------------------------------------------------ */
#define _CRT_SECURE_NO_WARNINGS

#include "Menu.h"
#include "Order.h"
#include "Item.h"

#include <iostream>
#include <vector>
#include <cstring>
#include <iostream>
//
using namespace std;

int main()
{
//    cout << "Hello World!" << endl;
    string userCommand;
    vector <string> parameters;

    // Create a menu object from a CSV file
    Menu menu = Menu("menu.csv");

    //  Create an order object
    Order order = Order();

    while (userCommand != "exit")
    {
        getline(cin, userCommand);
        char* cstr = new char[userCommand.length() + 1];
        strcpy(cstr, userCommand.c_str());

        char* token;
        token = strtok(cstr, " ");

        while (token != NULL)
        {
            parameters.push_back(token);
            token = strtok(NULL, " ");
        }

        string command = parameters[0];

        if (command.compare("menu") == 0) {
            cout << menu.toString();
        }
        else if (command.compare("add") == 0)
        {
            int numericValue = NULL;
            cout << "Enter choice based on numeric value on Menu: " ;
            cin >> numericValue;
            
            //stores the output from the getter function to vector
            std::vector<Item*>& menuItems = menu.getItems();
            for (int i = 0; i < menuItems.size(); ++i) {
                // Check if the numeric value matches the current index
                if (numericValue == i + 1) {
                    //if matches, save the index to the choice pointer object
                    Item* choice = menuItems[i];
                    
                    order.add(choice);

                    //exit loop when item is added
                    break;
                }
            }
            // You may also wish to implement the ability to add multiple items at once!
            // e.g. add 1 5 9
        }
        else if (command.compare("remove") == 0)
        {
            
        }
        else if (command.compare("checkout") == 0)
        {

        }
        else if (command.compare("help") == 0)
        {
            
        }

        parameters.clear();

    }

    cout << "Press any key to quit...";
    std::getchar();

}
