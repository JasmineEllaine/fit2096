/*
 * This file is part of 2020 SEM 1 FIT2096 Lab Assessment 1.
 * Created March 2020 by Jasmine Banares, Student ID: 2973 8660.
 */

#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>
#include "item.h"

class Inventory {
private:
    std::vector<Item> allItems = {};
    
public:
	Inventory();
	~Inventory();

    // Getters.
    // Setters.

    void addItems(std::vector<Item> items);
    void removeItems(std::vector<std::string> items);
    void listItems();
};

#endif