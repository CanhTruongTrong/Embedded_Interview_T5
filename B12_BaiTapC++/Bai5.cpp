/*
    Tạo một lớp người với các thuộc tính tên, tuổi và địa chỉ, và các phương thức để in thông tin của người đó và tính tuổi của người đó.
*/
#include <iostream>

using namespace std;

class Person{
    private:
        string name;
        int age;
        string address;
    public:
        Person(string n, int a, string addr);
        void printInformation();
};

Person::Person(string n, int a, string addr){
    name = n;
    age = a;
    address = addr;
}

void Person::printInformation(){
    cout << "________Information________" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age <<endl;
    cout << "Address: " << address << endl;
}

int main(){
    Person person1("Canh", 23, "54 Street 8th");

    person1.printInformation();

    return 0;
}