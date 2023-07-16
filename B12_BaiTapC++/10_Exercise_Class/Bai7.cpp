/*
Tạo một lớp ngày tháng năm với các thuộc tính ngày, tháng và năm, và các phương thức để tính tuổi của người và kiểm tra xem một ngày nhất định có phải là ngày nghỉ lễ hay không.
*/

#include <iostream>

using namespace std;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(int d, int m, int y);
        int calculateAge();
};

Date::Date(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

int Date::calculateAge(){
    // Giả sử năm hiện tại là 22/6/2023
    int currentDay = 22;
    int currentMonth = 6;
    int currentYear = 2023;

    int age = currentYear - year;
    // Kiểm tra đã tới sinh nhật chưa
    if(currentMonth < month || (currentMonth == month && currentDay < day)){
        age--;
    }
    return age;
}

int main(){
    Date date(21, 4, 2000);

    cout <<"Your age is " << date.calculateAge() <<endl;

    return 0;
}