/*
 * This file is part of 2020 SEM 1 FIT2096 Lab Assessment 1.
 * Created March 2020 by Jasmine Banares, Student ID: 2973 8660.
 */

#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
private:
    std::string name;
    std::string description;
    std::string type;
    
public:
	Item(std::string item_name, std::string item_description,
        std::string item_type);
	~Item();

    // Getters 
    std::string getItemName();
    std::string getItemDescription();
    std::string getItemType();
};

#endif