/*
* File: TableInformation.cpp
* Author: Truong Trong Canh
* Date: 11/7/2023
* Description: This is a sample file for table information
*/

#include "TableInformation.hpp"

TableInformation::TableInformation(int nT, bool stt){
    numTable = nT;
    status = stt;
}

/*
* Function: getNumTable
* Description: This function gets the number of tables
* Input:
    None
* Output:
    return the number of tables
*/
int TableInformation::getNumTable(){
    return numTable;
}

/*
* Function: setStatus
* Description: This function sets status of table
* Input:
    stt - status of table
* Output:
    None
*/
void TableInformation::setStatus(bool stt){
    status = stt;
}

/*
* Function: getStatus
* Description: This function gets status of table
* Input:
    None
* Output:
    return the status of table
*/
bool TableInformation::getStatus(){
    return status;
}

/*
* Function: listFood
* Description: This function shows list of food
*/
void TableInformation::listFood(){
    for(auto item : Database_Food){
        cout << "Name: " << item.food.getName() << endl;
    }
}

/*
* Function: addFood
* Description: This function adds food
*/
void TableInformation::addFood(){
    // Food food;
    // int quantity;
    // cout << "Quantity: ";
    // cin >> quantity;
    // TypeFood FOOD;
    // FOOD.food = food;
    // FOOD.quantity = quantity;
    // Database_Food.push_back(FOOD);
}

/*
* Function: editFood
* Description: This function edits food
*/
void TableInformation::editFood(){
    int quantity;
    int id;
    cout << "Enter ID:  ";
    cin >> id;
    for (auto item : Database_Food)
    {
        if (item.food.getId() == id)
        {
            cout << "Enter quantity: ";
            cin >>quantity;
            item.quantity = quantity;
        }
    }
}


/*
* Function: deleteFood
* Description: This function deletes food
*/
void TableInformation::deleteFood()
{
    int id;
    cout << "Enter ID: ";
    cin >> id;
    auto position = Database_Food.begin();
    for (auto item : Database_Food)
    {
        if (item.food.getId() == id)
        {
            Database_Food.erase(position);
        }
        position++;
    }
}

/*
* Function: pay
* Description: This function pay total price of food
*/
void TableInformation::pay(){
    float totalPrice = 0;
    cout << "Total Price: " << endl;
    for (auto item : Database_Food)
    {

        totalPrice += (item.food.getPrice()) * (item.quantity);
    }
    
}
