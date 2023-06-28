/*
    Tạo một lớp điểm trong hệ tọa độ 2D và viết các phương thức để tính khoảng cách giữa hai điểm, tính diện tích của tam giác được tạo bởi ba điểm.
*/
#include <iostream>
#include <cmath>

using namespace std;

class Point{
    private:
        float ordinateX;
        float ordinateY;
    public:
        Point(float x, float y);
        float getX();
        float getY();
        float calculateDistance(Point otherpoint);
        float calculateArea(Point otherpoint1, Point otherpoint2);
};

Point::Point(float x, float y){
    ordinateX = x;
    ordinateY = y;
}

float Point::getX(){
    return ordinateX;
}

float Point::getY(){
    return ordinateY;
}

float Point::calculateDistance(Point otherpoint){
    float dx = otherpoint.getX() - ordinateX;
    float dy = otherpoint.getY() - ordinateY;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

float Point::calculateArea(Point otherpoint1, Point otherpoint2){
    float d1 = calculateDistance(otherpoint1);
    float d2 = otherpoint1.calculateDistance(otherpoint2);
    float d3 = calculateDistance(otherpoint2);
    float p = (d1 + d2 + d3) / 3;
    return (p * (p - d1) * (p - d2) * (p - d3));
}

int main(){
    Point A(4.5, 6.0);
    Point B(3.0, 2.5);
    Point C(2.0, 8.5);

    cout << "Distance = " << A.calculateDistance(B) << endl;
    cout << "Area = " << A.calculateArea(B, C) << endl;

    return 0;
}