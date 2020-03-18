/*
 * This file is part of 2020 SEM 1 FIT2096 Lab Assessment 1.
 * Created March 2020 by Jasmine Banares, Student ID: 2973 8660.
 */

#include <string>
#include <iostream>
#include "inventory.h"
#include "item.h"

Inventory::Inventory() {
}

Inventory::~Inventory() {}

void Inventory::addItems(std::vector<Item> items) {
    for (auto new_item : items) {
        allItems.push_back(new_item);
    }
}
void Inventory::removeItems(std::vector<std::string> items) {
    for (auto name : items) {
        std::vector<Item> newInventory = {};
        for (auto inventory_item : allItems) {
            if (inventory_item.getItemName() != name) {
                newInventory.push_back(inventory_item);
            }
        }
        allItems = newInventory;
    }
}
void Inventory::listItems() {
    std::cout << "You have the following items:\n" << std::endl;
    for (auto inventory_item : allItems) {
        std::cout << "Name: " << inventory_item.getItemName()
            << "\nDescription: " << inventory_item.getItemDescription()
            << "\nType: " << inventory_item.getItemType()
            << std::endl << std::endl;
    }
}