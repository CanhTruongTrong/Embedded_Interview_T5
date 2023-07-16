/*
    Tạo một lớp phân số với các thuộc tính tử số và mẫu số và các phương thức để tính toán các phép tính toán cơ bản như cộng, trừ, nhân và chia.
*/
#include <iostream>

using namespace std;

class Fraction{
    private:
        float numerator; // tử số
        float denominator; // mẫu số
    public:
        Fraction(float n, float d);
        float getNumerator();
        float getDenominator();
        float addition(Fraction otherFraction); // phép cộng
        float substraction(Fraction otherFraction); // phép trừ
        float multiplication(Fraction otherFraction); // phép nhân
        float division(Fraction otherFraction); // phép chia
};  

Fraction::Fraction(float n, float d){
    numerator = n;
    denominator = d;
}

float Fraction::getNumerator(){
    return numerator;
}

float Fraction::getDenominator(){
    return denominator;
}

float Fraction::addition(Fraction otherFraction){
    float newNumerator = numerator * otherFraction.getDenominator() + denominator * otherFraction.getNumerator();
    float newDenominator = denominator * otherFraction.getDenominator();
    return newNumerator / newDenominator;
}

float Fraction::substraction(Fraction otherFraction){
    float newNumerator = numerator * otherFraction.getDenominator() - denominator * otherFraction.getNumerator();
    float newDenominator = denominator * otherFraction.getDenominator();
    return newNumerator / newDenominator;
}

float Fraction::multiplication(Fraction otherFraction){
    float newNumerator = numerator * otherFraction.getNumerator();
    float newDenominator = denominator * otherFraction.getDenominator();
    return newNumerator / newDenominator;
}

float Fraction::division(Fraction otherFraction){
    float newNumerator = numerator * otherFraction.getDenominator();
    float newDenominator = denominator * otherFraction.getNumerator();
    return newNumerator / newDenominator;
}

int main(){
    Fraction f1(3, 2);
    Fraction f2(1, 2);

    cout << "Addition = " << f1.addition(f2) << endl;
    cout << "Substraction = " <<f1.substraction(f2) <<endl;
    cout << "Multiplication = " <<f1.multiplication(f2) <<endl;
    cout << "Division = " <<f1.division(f2) <<endl;

    return 0;
}