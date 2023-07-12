/*
* File: TableInformation.hpp
* Author: Truong Trong Canh
* Date: 11/7/2023
* Description: This is a sample file for table information
*/

#ifndef __TABLEINFORMATION_HPP__
#define __TABLEINFORMATION_HPP__ 
#include "Food.hpp"
#include <iostream>
#include <string>
#include <list>

using namespace std;

/*-------------------------Class TableInformation-----------------------*/
class TableInformation{
    private:
        int numTable;
        bool status;
        typedef struct{
            Food food;
            int quantity;
        }TypeFood;
        list <TypeFood> Database_Food;
    public:
        TableInformation(int nT, bool stt);
        int getNumTable();
        void setStatus(bool stt);
        bool getStatus();
        void listFood();
        void addFood();
        void editFood();
        void deleteFood();
        void pay();
        
};

#endif