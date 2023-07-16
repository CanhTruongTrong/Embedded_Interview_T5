#ifndef MENU_HPP
#define MENU_HPP
#include <iostream>
#include <list>
#include "student.hpp"

using namespace std;

/*--------------------------------Class Menu-------------------------------*/
class Menu{
    private:
        list <Student> dataStudent;
    public:
        void addStudent();
        void updateStudent();
        void deleteStudent();
        void searchStudentByName();
        void sortStudentByGPA();
        void sortStudentByName();
        void displayListStudent();
};

#endif