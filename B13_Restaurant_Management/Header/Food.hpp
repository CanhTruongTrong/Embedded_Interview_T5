/*
* File: Food.hpp
* Author: Truong Trong Canh
* Date: 11/7/2023
* Description: This is a sample file for food information
*/

#ifndef __FOOD_HPP__
#define __FOOD_HPP__
#include <iostream>
#include <string>

using namespace std;

/*-----------------Class Food------------------*/
class Food{
    private:
        int Id;
        string name;
        double price;
    public:
        Food(string n, double p);
        int getId();
        void setName(string n);
        string getName();
        void setPrice(double p);
        double getPrice();
        void display();
};

#endif