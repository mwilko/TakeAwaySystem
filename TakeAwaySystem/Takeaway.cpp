#include "Menu.h"
#include "Order.h"
#include "Item.h"

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    string userCommand;
    vector<string> parameters;

    // Create a menu object from a CSV file
    Menu menu("menu.csv");

    // Create an order object
    Order order;

    while (userCommand != "exit") {
        cout << "Enter a command: ";
        getline(cin, userCommand);

        char* cstr = new char[userCommand.length() + 1];
        strcpy(cstr, userCommand.c_str());

        char* token;
        token = strtok(cstr, " ");

        while (token != NULL) {
            parameters.push_back(token);
            token = strtok(NULL, " ");
        }

        if (!parameters.empty()) {
            string command = parameters[0];

            if (command == "menu") {
                cout << menu.toString() << endl;
            } else if (command == "add") {
                if (parameters.size() > 1) {
                    int index = stoi(parameters[1]);
                    Item* choice = menu.getItemByIndex(index);
                    if (choice != nullptr) {
                        order.add(choice);
                        cout << "Item added to the order." << endl;
                    } else {
                        cout << "Invalid item index." << endl;
                    }
                } else {//if parameter is only one word/value
                    cout << "Try: 'add [numbered position on Menu]'" << endl;
                }
            } else if (command == "remove") {//removes the specified item based on its numbered position on the menu

            } else if (command == "checkout") {//displays current order and asks if the user wants to pay or return and edit the order

            } else if (command == "help") {//displays message with all commands and what they do

            } else {//if none of the avaliable commands are entered
                cout << "Error: '" << command << "' is not avaliable. Enter 'help' for assistance " << endl;
            }

            parameters.clear();
        }
    }

    cout << "Press any key to quit...";
    return 0;
}

