//
//  Menu.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//
//
#include "Menu.h"
#include <iostream>
#include <fstream>
using namespace std;

Menu::Menu(string file) {
    ifstream fileContent(file);
    count = 0;
    if (!fileContent) {
        //displays error message with the reason of the error (e.g cannot find file directory)
        cerr << "Error opening file " << file << ": " << strerror(errno) << endl;
        return;
    }
    string line;
    //iterates through all lines in file
    while (getline(fileContent, line)) {
        count++;
        line = "," + line;
        Item* newItem = new Item(line);//each iteration, the line is stored as a reference
        items.push_back(newItem);//add to the items vector
        cout << count << line << endl;
    }
    fileContent.close();
}

//getter function to return vector since its a private variable in 'Item.h'
std::vector<Item*>& Menu::getItems(){
    return items;
}



// display menu in attractive way, group items with corresponding type
// (appetiser, maincourse, beverage)
string Menu::toString() const{
    string menu = NULL;
    
    cout << "-------- Max's Club House --------" << endl;
    
    
    return menu;
}

Menu::~Menu(){
    cout << "Menu destructor called" << endl;
}
