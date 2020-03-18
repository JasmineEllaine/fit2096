/*
 * This file is part of 2020 SEM 1 FIT2096 Lab Assessment 1.
 * Created March 2020 by Jasmine Banares, Student ID: 2973 8660.
 */

#include <string>
#include <vector>
#include "item.h"
#include "inventory.h"

int main (){
    Inventory my_inventory = Inventory();
    Item item_1 = Item("golden key", "a shiny key to unlock all doors", "KEYS");
    Item item_2 = Item("pink key", "a cute key to unlock pink doors", "KEYS");
    Item item_3 = Item("gold coin", "an old coin from the medieval times", "COINS");
    
    std::vector<Item> items_to_add = {item_1, item_2, item_3};
    my_inventory.addItems(items_to_add);
    my_inventory.listItems();

    std::vector<std::string> items_to_remove = {item_2.getItemName()};
    my_inventory.removeItems(items_to_remove);
    my_inventory.listItems();

    return 0;
}