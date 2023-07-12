/*
* File: main.cpp
* Author: Truong Trong Canh
* Date: 11/07/2023
* Description: This is a sample file for ordering food
*/

#include "Manager.hpp"
#include "Staff.hpp"

int main(){
    
    int input;

    do
    {
        cout << "----------Restaurant Management--------------- " << endl;
        cout << " 1. Manager" << endl;
        cout << " 2. Staff" << endl;
        cout << " 0. Exit" << endl;
        cout << " You choose: ";
        cin >> input;

        switch (input)
        {
        case 1:
            Manager();
            break;
        case 2:
            // Staff
        default:
            break;
        }
    } while (input != 0);

    return 0;
}