#include "student.hpp"

Student::Student(string n, string g, int a, double mS, double pS, double cS){
    static int id = 100;
    Id = id;
    id++;
    name = n;
    gender = g;
    age = a;
    mathScore = mS;
    phyScore = pS;
    chemScore = cS;
}

/*
* Function: getId
* Description: This function gets Id of student
* Input:
    None
* Output:
    ID of student
*/
int Student::getId(){
    return Id;
}

/*
* Function: setName
* Description: This function sets name of student
* Input: 
    name of student
* Output:
    None
*/
void Student::setName(string n){
    name = n;
}

/*
* Function: getName
* Description: This function gets name of student
* Input:
    None
* Output:
    name of student
*/
string Student::getName(){
    return name;
}

/*
* Function: setGender
* Description: This function sets gender of student
* Input:
    gender of student
* Output:
    None
*/
void Student::setGender(string g){
    gender = g;
}

/*
* Function: getGender
* Description: This function gets gender of student
* Input:
    None
* Output:
    Gender of student
*/
string Student::getGender(){
    return gender;
}

/*
* Function: setAge
* Description: This function sets age of student
* Input:
    Age of student
* Output:
    None
*/
void Student::setAge(int a){
    age = a;
}

/*
* Function: getAge
* Description: This function gets age of student
* Input:
    None
* Output:
    Age of student
*/
int Student::getAge(){
    return age;
}

/*
* Function: setMathScore
* Description: This function sets mathScore of student
* Input:
    Math score of student
* Output:
    None
*/
void Student::setMathScore(double mS){
    mathScore = mS;
}

/*
* Function: getMathScore
* Description: This function gets mathScore of student
* Input:
    None
* Output:
    Math score of student
*/
double Student::getMathScore(){
    return mathScore;
}

/*
* Function: setPhyScore
* Description: This function sets phyScore of student
* Input:
    Physical score of student
* Output:
    None
*/
void Student::setPhyScore(double pS){
    phyScore = pS;
}

/*
* Function: getPhyScore
* Description: This function gets phyScore of student
* Input:
    None
* Output:
    Physical score of student
*/
double Student::getPhyScore(){
    return phyScore;
}

/*
* Function: setChemScore
* Description: This function sets chemScore of student
* Input:
    Chemistry score of student
* Output:
    None
*/
void Student::setChemScore(double cS){
    chemScore = cS;
}

/*
* Function: getChemScore
* Description: This function gets chemScore of student
* Input:
    None
* Output:
    Chemistry score of student
*/
double Student::getChemScore(){
    return chemScore;
}

/*
* Function: getAvg
* Description: This function gets average score of student
* Input:
    None
* Output:
    Average score of student
*/
double Student::getAvg(){
    return (mathScore + phyScore + chemScore) / 3;
}