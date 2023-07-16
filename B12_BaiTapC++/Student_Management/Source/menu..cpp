#include "menu.hpp"

/*
* Function: addStudent
* Description: This function adds student into dataStudent
*/
void Menu::addStudent(){
    string name;
    string gender;
    int age;
    double mathScore;
    double phyScore;
    double chemScore;

    cout << "Enter name: " << endl;
    cin >> name;

    cout << "Enter gender: " << endl;
    cin >> gender;

    do
    {
        cout << "Enter age: " << endl;
        cin >> age;
    } while (age < 0 || age > 100);

    do
    {
        cout << "Enter mathScore: " << endl;
        cin >> mathScore;
    } while (mathScore < 0 || mathScore > 10);

    do
    {
        cout << "Enter phyScore: " << endl;
        cin >> phyScore;
    } while (phyScore < 0 || phyScore > 10);

    do
    {
        cout << "Enter chemScore: " << endl;
        cin >> chemScore;
    } while (chemScore < 0 || chemScore > 10);

    Student newStudent(name, gender, age, mathScore, phyScore, chemScore);
    dataStudent.push_back(newStudent);
    cout << "Add student successfullly" << endl;
    cout << endl;
}

/*
* Function: displayListStudent
* Description: This function shows list of students
* Input:
    None
* Output:
    None
*/
void Menu::displayListStudent(){
    cout << endl;
    cout << "ID | Name | Gender | Age | Math | Physic | Chemistry | Average" << endl;

    for(auto item : dataStudent){
        cout << "" << item.getId() << "  " << item.getName() << "    " << item.getGender() << "     " << item.getAge() << "     " << item.getMathScore() << "       " << item.getPhyScore() << "         " << item.getChemScore() << "         " << item.getAvg() << endl;
    }
}

/*
* Function: updateStudent
* Description: This function update new information for student
* Input:
    None
* Output:
    None
*/
void Menu::updateStudent(){
    displayListStudent();
    int id;
    cout << "Enter id: " << endl;
    cin >> id;

    for(auto it = dataStudent.begin(); it != dataStudent.end(); ++it){
        if((*it).getId() == id){
            string name;
            string gender;
            int age;
            double mathScore;
            double phyScore;
            double chemScore;

            cout << "Enter new name: " << endl;
            cin >> name;
            (*it).setName(name);

            cout << "Enter new gender: " << endl;
            cin >> gender;
            (*it).setGender(gender);

            do
            {
                cout << "Enter new age: " << endl;
                cin >> age;
            } while (age < 0 || age > 100);
            (*it).setAge(age);

            do
            {
                cout << "Enter new mathScore: " << endl;
                cin >> mathScore;
            } while (mathScore < 0 || mathScore > 10);
            (*it).setMathScore(mathScore);

            do
            {
                cout << "Enter new phyScore: " << endl;
                cin >> phyScore;
            } while (phyScore < 0 || phyScore > 10);
            (*it).setPhyScore(phyScore);

            do
            {
                cout << "Enter new chemScore: " << endl;
                cin >> chemScore;
            } while (chemScore < 0 || chemScore > 10);
            (*it).setChemScore(chemScore);
            break;
        }
    }
}

/*
* Function: deleteStudent
* Description: This function deletes student from lists
* Input:
    None
* Output:
    None
*/
void Menu::deleteStudent(){
    displayListStudent();
    int id;
    cout << "Enter id: " << endl;
    cin >> id;

    for(auto it = dataStudent.begin(); it != dataStudent.end(); ++it){
        if((*it).getId() == id){
            dataStudent.erase(it);
            cout << "Delete student successfully" << endl;
            cout << endl;
            break;
        }
    }
}

/*
* Function: searchStudentByName
* Description: This function finds student by name
    None
* Output:
    None
*/
void Menu::searchStudentByName(){
    string name;
    cout << "Enter name: " << endl;
    cin >> name;
    
    for(auto it = dataStudent.begin(); it != dataStudent.end(); ++it){
        if((*it).getName() == name){
            cout << "Find student successfully" << endl;
            cout << "ID | Name | Gender | Age | Math | Physic | Chemistry | Average" << endl;
            cout << "" << (*it).getId() << "  " << (*it).getName() << "    " << (*it).getGender() << "     " << (*it).getAge() << "     " << (*it).getMathScore() << "       " << (*it).getPhyScore() << "         " << (*it).getChemScore() << "         " << (*it).getAvg() << endl;
            return;
        }
    }
    cout << "Can not find this name" << endl;
}

/*
* Function: sortStudentByGPA
* Description: This function sort student by GPA
    None
* Output:
    None
*/
bool customSort1(Student st1, Student st2){
    return st1.getAvg() > st2.getAvg();
}

void Menu::sortStudentByGPA(){
    list <Student> sortList;
    sortList.assign(dataStudent.begin(), dataStudent.end());

    sortList.sort(customSort1);
    cout << "ID | Name | Gender | Age | Math | Physic | Chemistry | Average" << endl;

    for(auto item : sortList){
        cout << "" << item.getId() << "  " << item.getName() << "    " << item.getGender() << "     " << item.getAge() << "     " << item.getMathScore() << "       " << item.getPhyScore() << "         " << item.getChemScore() << "         " << item.getAvg() << endl;
    }
}

/*
* Function: sortStudentByName
* Description: This function sort student by name
    None
* Output:
    None
*/
bool customSort2(Student st1, Student st2){
    return st1.getName() < st2.getName();
}

void Menu::sortStudentByName(){
    list <Student> sortList;
    sortList.assign(dataStudent.begin(), dataStudent.end());

    sortList.sort(customSort2);
    cout << "ID | Name | Gender | Age | Math | Physic | Chemistry | Average" << endl;

    for(auto item : sortList){
        cout << "" << item.getId() << "  " << item.getName() << "    " << item.getGender() << "     " << item.getAge() << "     " << item.getMathScore() << "       " << item.getPhyScore() << "         " << item.getChemScore() << "         " << item.getAvg() << endl;
    }
}