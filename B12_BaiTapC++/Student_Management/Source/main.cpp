/*
    * File: main.cpp
    * Author: Truong Trong Canh
    * Date: 27/06/2023
    * Description: This is a sample file for student management
*/
#include "menu.hpp"

int main(){
    
    Menu mn;
    int key;

    do
    {
        cout << "--------------------Student Management--------------------------" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Update student by ID" << endl;
        cout << "3. Delete student by ID" << endl;
        cout << "4. Search student by name" << endl;
        cout << "5. Sort student by GPA" << endl;
        cout << "6. Sort student by name" << endl;
        cout << "7. Display list of students" << endl;
        cout << "0. Exit" << endl;
        cout << "------------------------------------------------------------------" << endl;
        cout << "You choose: " << endl;
        cin >> key;

        switch (key)
        {
        case 1:
            mn.addStudent();
            break;
        case 2:
            mn.updateStudent();
            break;
        case 3:
            mn.deleteStudent();
            break;
        case 4:
            mn.searchStudentByName();
            break;
        case 5:
            mn.sortStudentByGPA();
            break;
        case 6:
            mn.sortStudentByName();
            break;
        case 7:
            mn.displayListStudent();
            break;
        case 0:
            return 0;
            break;
        }
    } while (key != 0);
    
    return 0;
}