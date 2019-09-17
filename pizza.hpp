//
//  pizza.hpp
//  pizza_store_program
//
//  Created by Mina Moslehpour on 7/24/19.
//  Copyright © 2019 Mina Moslehpour. All rights reserved.
//

#ifndef pizza_hpp
#define pizza_hpp

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class pizza {
public:
    pizza();
    pizza(string, int, string, int);
    
    void setName(string);
    void setSize(int);
    void setBread(string);
    void setPrice(int);
    
    string getName();
    int getSize();
    string getBread();
    int getPrice();
    
private:
    string _name;
    int _size;
    string _bread;
    int _price;
    
};


#endif /* pizza_hpp */
