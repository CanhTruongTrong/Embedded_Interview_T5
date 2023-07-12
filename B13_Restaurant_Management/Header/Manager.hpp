/*
* File: Manager.hpp
* Author: Truong Trong Canh
* Date: 11/7/2023
* Description: This is a sample file for set information from manager
*/

#ifndef __MANAGER_HPP__
#define __ MANAGER_HPP__
#include "Food.hpp"
#include <iostream>
#include <string>
#include <list>

using namespace std;

/*---------------------------------Class Manager------------------------------*/
class Manager{
    private:
        list <Food> Database;
        int numTable;
        void addFood();
        void editFood();
        void deleteFood();
        void listFood();
        void setNumTable();
    public:
        Manager();
        list <Food> getDatabase();
        int getNumTable();
};

#endif