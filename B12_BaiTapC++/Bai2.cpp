/*
    Tạo một lớp hình chữ nhật với các thuộc tính chiều dài, chiều rộng và các phương thức để tính chu vi, diện tích, đường chéo và kiểm tra xem nó có phải là hình vuông hay không.
*/
#include <iostream>
#include <cmath>

using namespace std;

class Rectangle{
    private:
        float length;
        float width;
    public:
        Rectangle(float l, float w);
        float calculatePerimeter();     // tính chu vi
        float calculateArea();          // tính diện tích
        float calculateDiagonal();      // tính đường chéo
        bool isSquare();                // kiểm tra hình vuông                
};

Rectangle::Rectangle(float l, float w){
    length = l;
    width = w;
}

float Rectangle::calculatePerimeter(){
    return 2 * (length + width);
}

float Rectangle::calculateArea(){
    return length * width;
}

float Rectangle::calculateDiagonal(){
    return sqrt(pow(length, 2) + pow(width, 2));
}

bool Rectangle::isSquare(){
    if(length == width){
        return true;
    }else{
        return false;
    }
}

int main(){

    Rectangle rec(5, 6);

    cout<<"Rectangle's Perimeter: "<<rec.calculatePerimeter()<<endl;    
    cout<<"Rectangle's Area: "<<rec.calculateArea()<<endl;
    cout<<"Rectangle's Diagonal: "<<rec.calculateDiagonal()<<endl;

    bool isSquare = rec.isSquare();
    if(isSquare){
        cout << "Rectangle is square" <<endl;
    }else{
        cout << "Rectangle is not square" <<endl;
    }

    return 0;
}