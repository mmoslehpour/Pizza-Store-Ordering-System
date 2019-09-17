//
//  main.cpp
//  pizza_store_program
//
//  Created by Mina Moslehpour on 7/24/19.
//  Copyright © 2019 Mina Moslehpour. All rights reserved.
//

#include <iostream>
#include "pizza.hpp"
#include <vector>
#include <string>
using namespace std;

void orderPizza(vector<pizza *> &);
void checkOut(vector<pizza *>);

string name[] = {{"Pepperoni"}, {"Cheese"}, {"Hawaii"}, {"Veggie"}, {"chicken"}};
int flavorPrice[] = {100, 70, 80, 60, 75};
int size[] = {5, 8, 10};
int sizePrice[] = {20, 50, 70};
string bread[] = {{"plain"}, {"cheese"}};
int breadPrice[] = {0, 10};

int main() {
    
    vector<pizza *> order;
    int option;

   
    do {
        cout << "Enter option 1-3: ";
        cin >> option;
        switch(option) {
            case 1:
                orderPizza(order);
                break;
            case 2:
                checkOut(order);
                break;
            case 3:
                return 0;
            
        }
        
    } while(true);
    
}
    
void orderPizza(vector<pizza *> &order) { // 用＆：可以get address 修改外面的 (vector<pizza *> order)
    
    int choice, size_choice, bread_choice;
    cout << "Enter your choice of flavor: " ;
    cin >> choice;
    
    cout << "Enter your size of pizza: " ;
    cin >> size_choice;
    
    cout << "Enter your bread of pizza: " ;
    cin >> bread_choice;
    
    int price = flavorPrice[choice] + sizePrice[size_choice] + breadPrice[bread_choice];
    pizza *pizzaPtr = new pizza(name[choice], size[size_choice], bread[bread_choice], price); // *pizzaPtr 指向 new pizza 的 address
    order.push_back(pizzaPtr);  // push back 每個pizza 進外面的     vector<pizza *> order
}

void checkOut(vector<pizza *> order) {
    
    int totalPrice = 0;
    
    for (int i = 0; i < order.size(); i++) {
        totalPrice += order[i]->getPrice();
    }
    cout << "Total Price: " << totalPrice;
    cout << endl;
}

    



void menu(string name[], int size[], string bread[]) {
    
    for(int i = 0; i < 5; i++) {
        cout << name[i] ;
    }

    
}
