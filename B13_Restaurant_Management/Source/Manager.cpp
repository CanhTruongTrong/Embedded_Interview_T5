/*
* File: Manager.cpp
* Author: Truong Trong Canh
* Date: 11/7/2023
* Description: This is a sample file for set information from manager
*/

#include "Manager.hpp"

Manager::Manager(){
    cout << "---------------Manager-----------------" << endl;
    cout << "1. Add food" << endl;
    cout << "2. Edit food" << endl;
    cout << "3. Delete food" << endl;
    cout << "4. List of foods" << endl;
    cout << "5. Set up table" << endl;
    cout << "0. Back" << endl;
    cout << "----------------------------------------" << endl;

    int key;
    
    do
    {
        cout << "You choose: " << endl;
        cin >> key;
    } while (key < 0 || key > 5);
    
    switch (key)
    {
    case 1:
        addFood();
        break;
    case 2:
        editFood();
        break;
    case 3:
        deleteFood();
        break;
    case 4:
        listFood();
        break;
    case 5:
        setNumTable();
        break;
    case 0:
        Manager();
        break;
    }
}

/*
* Function: getListFood
* Description: This function gets database from manager
* Input:
    None
* Output:
    return database from manager
*/
list <Food> Manager::getDatabase(){
    return this -> Database;
}

/*
* Function: getNumTable
* Description: This function gets the number of tables
* Input:
    None
* Output:
    return the number of tables
*/
int Manager::getNumTable(){
    return numTable;
}

/*
* Function: addFood
* Description: This function adds food
* Input:
    None
* Output:
    None
*/
void Manager::addFood(){
    string name;
    double price;

    cout << "Enter name: " << endl;
    cin >> name;

    cout << "Enter price: " << endl;
    cin >> price;

    Food newFood(name, price);
    Database.push_back(newFood);
    cout << "Add food successfully" << endl;
    cout << "---------------------" << endl;

    int key_1;

    cout << "1. Keep adding food" << endl;
    cout << "0. Back" << endl;

    do
    {
        cout << "You choose: " << endl;
        cin >> key_1;
    } while (key_1 < 0 || key_1 > 1);

    switch (key_1)
    {
    case 1:
        addFood();
        break;
    case 0:
        listFood();
        Manager();
        break;
    }
    
}

void Manager::listFood(){
    int index = 1;

    cout << "-----------------------" << endl;
    cout << " Index |ID   | Name     | Price  " << endl;
    
    for(auto item : Database){
        cout << "  " << index << "     " << item.getId() << "    " << item.getName() << "       " << item.getPrice() << endl;
        index++;
    }
}

/*
* Function: editFood
* Description: This function edits food
* Input:
    None
* Output:
    None
*/
void Manager::editFood(){
    listFood();

    int id;
    cout << "Enter Id: " << endl;
    cin >> id;

    cout << "1. Edit name" << endl;
    cout << "2. Edit price" << endl;
    cout << "0. Back" << endl;

    int key_2;

    do
    {
        cout << "You choose: " << endl;
        cin >> key_2;
    } while (key_2 < 0 || key_2 > 2);

    switch (key_2)
    {
    case 1:
        for(auto item : Database){
            if(item.getId() == id){
                string newName;

                cout << "Enter new name: " << endl;
                cin >> newName;
                item.setName(newName);
                cout << "Edit name successfully" << endl;
                cout << "----------------------" << endl;
                return;
            }
        }
        cout << "Can not find this id" << endl;
        cout << "----------------------" << endl;
        break;
    case 2:
        for(auto item : Database){
            if(item.getId() == id){
                double newPrice;

                cout << "Enter new price: " << endl;
                cin >> newPrice;
                item.setPrice(newPrice);
                cout << "Edit price successfully" << endl;
                cout << "----------------------" << endl;
                return;
            }
        }
        cout << "Can not find this id" << endl;
        cout << "----------------------" << endl;
        break;
    case 0:
        listFood();
        Manager();
        break;
    }
}

/*
* Function: deleteFood
* Description: This function deletes food
* Input:
    None
* Output:
    None
*/
void Manager::deleteFood(){
    listFood();

    int id;
    cout << "Enter Id: " << endl;
    cin >> id;

    auto position = Database.begin();
    for(auto item : Database){
        if(item.getId() == id){
            Database.erase(position);
            cout << "Delete food successfully" << endl;
            cout << endl;
            return;
        }
        position++;
    }
    cout << "Can not find this id" << endl;
    cout << endl;
}

/*
* Function: setNumTable
* Description: This function sets up number of table
* Input:
    None
* Output:
    None
*/
void Manager::setNumTable(){
    int numTable;

    cout << "1. The number of tables: " << endl;
    cout << "0. Back: " << endl;

    int key_3;

    do
    {
        cout << "You choose: " << endl;
        cin >> key_3;
    } while (key_3 < 0 || key_3 > 1);
    
    switch (key_3)
    {
    case 1:
        cout << "Enter number of table: " << endl;
        cin >> numTable;
        break;
    
    case 0:
        Manager();
        break;
    }
}