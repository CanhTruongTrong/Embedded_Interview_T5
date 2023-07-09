/*
* File: main.cpp
* Author: Truong Trong Canh
* Date: 06/07/2023
* Description: This is a sample file for ordering food
*/

#include <iostream>
#include <stdint.h>
#include <string>
#include <list>

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
        // delete food
        break;
    case 4:
        listFood();
        break;
    case 5:
        // set up table
        break;
    case 0:
        // back Manager()
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



/*--------------------------Class Staff----------------------------------*/
class Staff{
    private:
        list <Food> Database_Food;
        typedef struct{
            int numTable;
            bool status;
        }TypeTable;
    public:
        Staff(list <Food> database, int nT);
};

int main(){
    
    cout << "--------------" << endl;
    cout << " 1. Manager" << endl;
    cout << " 2. Staff" << endl;

    int input;
    
    do
    {
        cout << "You choose: " << endl;
        cin >> input;
    } while (input < 1 || input > 2);


    switch (input)
    {
    case 1:
        // Manager
        break;
    case 2:
        // Staff
        break;
    }

    return 0;
}