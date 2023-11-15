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

Menu::Menu(string file){
    ifstream fileContent(file);
    count = 0;
    if (!fileContent)//error handling: there is no file named as the parameter given, statement is ran
    {
        cerr << "Error opening file " << file << ": " << strerror(errno) << endl;
        return;  // Add this line to exit the function if the file cannot be opened
    }
    string item;
    while (getline(fileContent, item)) {
        count++;
        item = "," + item;
        items.push_back(count + &item);//stores each value in the vector as a pointer
        //cout << count << item <<endl;
    }
    fileContent.close();
    
}

string Menu::ToString(){
    string menu = NULL;
    
    return menu;
}
