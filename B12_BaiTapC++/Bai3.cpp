/*
    Tạo một lớp hình tròn với bán kính và các phương thức để tính chu vi và diện tích của hình tròn.
*/
#include <iostream>
#include <cmath>

using namespace std;

class Circle{
    private:
        float radius;
        const float PI = 3.141592;
    public:
        Circle(float r);
        float calculatePerimeter(); 
        float claculateArea();
};

Circle::Circle(float r){
    radius = r;
}

float Circle::calculatePerimeter(){
    return 2 * PI * radius;
}

float Circle::claculateArea(){
    return PI * pow(radius, 2);
}

int main(){

    Circle c(5);
    cout<<"Circle's Perimeter: "<<c.calculatePerimeter()<<endl;
    cout<<"Circle's Area: "<<c.claculateArea()<<endl;

    return 0;
}