/*
* File: Staff.hpp
* Author: Truong Trong Canh
* Date: 11/7/2023
* Description: This is a sample file for get information from manager
*/

#ifndef __STAFF_HPP__ 
#define __STAFF_HPP__ 
#include "Food.hpp"
#include "TableInformation.hpp"

#include <iostream>
#include <string>
#include <list>

using namespace std;

/*--------------------------Class Staff----------------------------------*/
class Staff{
    private:
        list <Food> DATABASE_FOOD;
        list <TableInformation> DATABASE_TABLE;
        void addFood();
        void editFood();
        void deleteFood();
        void pay();
        void choiceTable();
    public:
        Staff(list <Food> database, int nT);
};

#endif