/*
* File: Food.cpp
* Author: Truong Trong Canh
* Date: 11/7/2023
* Description: This is a sample file for food information
*/

#include "Food.hpp"

Food::Food(string n, double p){
    static int id = 100;
    Id = id;
    id++;
    name = n;
    price = p;
}

/*
* Function: getId
* Description: This function gets Id of food
* Input:
    None
* Output:
    return Id of food
*/
int Food::getId(){
    return Id;
}

/*
* Function: setName
* Description: This function sets name of food
* Input:
    n - name of food
* Output:
    None
*/
void Food::setName(string n){
    name = n;
}

/*
* Function: getName
* Description: This function gets name of food
* Input:
    None
* Output:
    return name of food
*/
string Food::getName(){
    return name;
}

/*
* Function: setPrice
* Description: This function sets price of food
* Input:
    n - price of food
* Output:
    None
*/
void Food::setPrice(double p){
    price = p;
}

/*
* Function: getPrice
* Description: This function gets price of food
* Input:
    None
* Output:
    return price of food
*/
double Food::getPrice(){
    return price;
}

/*
* Function: display
* Description: This function displays food
* Input:
    None
* Output:
    None
*/
void Food::display(){
    cout << "-----------------------" << endl;
    cout << " ID   | Name     | Price  " << endl;
    cout << " " << getId() << "    " << getName() << "       " << getPrice() << endl;
}