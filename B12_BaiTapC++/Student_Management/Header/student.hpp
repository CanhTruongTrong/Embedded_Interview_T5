#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
#include <string>

using namespace std;

/* ---------------------Class Student-------------------*/
class Student{
    private:
        int Id;
        string name;
        string gender;
        int age;
        double mathScore;
        double phyScore;
        double chemScore;
    public:
        Student(string n, string g, int a, double mS, double pS, double cS);
        int getId();
        void setName(string n);
        string getName();
        void setGender(string g);
        string getGender();
        void setAge(int a);
        int getAge();
        void setMathScore(double mS);
        double getMathScore();
        void setPhyScore(double pS);
        double getPhyScore();
        void setChemScore(double cS);
        double getChemScore();
        double getAvg();
};

#endif