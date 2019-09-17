//
//  pizza.cpp
//  pizza_store_program
//
//  Created by Mina Moslehpour on 7/24/19.
//  Copyright © 2019 Mina Moslehpour. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include "pizza.hpp"
using namespace std;

pizza::pizza() {
    _name = " ";
    _size = 0;
    _bread = " ";
    _price = 0;
}

pizza::pizza(string name, int size, string bread, int price) {
    _name = name;
    _size = size;
    _bread = bread;
    _price = price;
}

void pizza::setName(string name) {
    _name = name;
}

void pizza::setSize(int size) {
    _size = size;
}

void pizza::setBread(string bread) {
    _bread = bread;
}

void pizza::setPrice(int price) {
    _price = price;
}

string pizza::getName() {
    return _name;
}

int pizza::getSize() {
    return _size;
}

string pizza::getBread() {
    return _bread;
}

int pizza::getPrice(){
    return _price;
}



