/*
 * This file is part of 2020 SEM 1 FIT2096 Lab Assessment 1.
 * Created March 2020 by Jasmine Banares, Student ID: 2973 8660.
 */

#include <string>
#include "item.h"

Item::Item(std::string item_name, std::string item_description,
            std::string item_type) {
    name = item_name;
    description = item_description;
    type = item_type;
}

Item::~Item() {
}

std::string Item::getItemName() {
    return name;
}

std::string Item::getItemDescription() {
    return description;
}

std::string Item::getItemType() {
    return type;
}