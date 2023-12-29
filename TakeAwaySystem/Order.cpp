//
//  Order.cpp
//  TakeAwaySystem
//
//  Created by Max Wilkinson on 13/10/2023.
//
//
#include "Order.h"
#include <ctime>
#include <chrono>

int Order::calculateTotal(){
    return total;
}
std::string Order::printReceipt(){
    std::string reciept = NULL;
    
    
    return "Receipt has been made and saved to a text file";
}

void Order::add(Item* choice){
    //finds the users choice of item
    orderItems.push_back(choice);
    Order::toString();
    }

void Order::remove(int numericValue){
    
}

std::string Order::toString() const{
    std::string order = "Thank you, we hope you enjoyed your stay!";
    
    //receipt contents >>
    std::cout << "-------- Max's Club House --------" << std::endl;
    std::cout << "5621 RonnieKillen BLVD" << std::endl;
    std::cout << "ORLANDO, FL" << std::endl;
    auto finish = std::chrono::system_clock::now();

    std::time_t recieptTime = std::chrono::system_clock::to_time_t(finish);
 
    std::cout << std::ctime(&recieptTime) << std::endl;
    
    //item quantity, name, price
    for (int i = 0; i < orderItems.size(); i++) {
        std::cout << orderItems[i] << std::endl;
    }
    //savings (if any), total
    
    return order;
}
