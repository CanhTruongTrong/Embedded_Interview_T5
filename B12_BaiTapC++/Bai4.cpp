/*
    Tạo một lớp động vật với các thuộc tính tên, tuổi và trọng lượng, và các phương thức để tính chỉ số BMI, so sánh tuổi và trọng lượng của các động vật khác nhau.
*/
#include <iostream>
#include <cmath>

using namespace std;

class Animal{
    private:
        string name;
        int age;
        float weight;
        float height;
    public:
        Animal(string n, int a, float w, float h);
        string getName();
        int getAge();
        float getWeight();
        float getHeight();
        float calculateBMI();
        void compareAge(Animal otherAnimal);
        void compareWeight(Animal otherAnimal);
};

Animal::Animal(string n, int a, float w, float h){
    name = n;
    age = a;
    weight = w;
    height = h;
}

string Animal::getName(){
    return name;
}

int Animal::getAge(){
    return age;
}

float Animal::getWeight(){
    return weight;
}

float Animal::getHeight(){
    return height;
}

float Animal::calculateBMI(){
    return weight / pow(height, 2);
}

void Animal::compareAge(Animal otherAnimal){
    if(age == otherAnimal.getAge()){
        cout << name << " has the same age as " << otherAnimal.getName() << endl;
    }else if(age < otherAnimal.getAge()){
        cout << name << " is younger than " << otherAnimal.getName() << endl;
    }else{
        cout << name << " is older than " << otherAnimal.getName() << endl;
    }
}

void Animal::compareWeight(Animal otherAnimal){
    if(weight == otherAnimal.getWeight()){
        cout << name << " has the same weight as " << otherAnimal.getName() << endl;
    }else if(weight < otherAnimal.getWeight()){
        cout << name << " weighs less than " << otherAnimal.getName() <<endl;
    }else{
        cout << name <<" weighs more than " << otherAnimal.getName() <<endl;
    }
}

int main(){
    Animal animal1("Dog", 4, 15, 0.4);
    Animal animal2("Cat", 3, 10, 0.3);

    cout<<animal1.getName()<<"'s BMI: "<<animal1.calculateBMI()<<endl;
    cout<<animal2.getName()<<"'s BMI: "<<animal2.calculateBMI()<<endl;

    animal1.compareAge(animal2);

    animal1.compareWeight(animal2);

    return 0;
}