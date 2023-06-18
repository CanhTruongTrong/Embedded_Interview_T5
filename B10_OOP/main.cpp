#include <iostream>

class ToanHoc{
    public:
        void tong(int a, int b);
        void tong(int a, int b, int c);
        int tong(int a, double b);
};

void ToanHoc::tong(int a, int b){
    printf("Tong a va b: %d\n", a+b);
}

void ToanHoc::tong(int a, int b, int c){
    printf("Tong a, b va c: %d\n", a+b+c);
}

int ToanHoc::tong(int a, double b){
    return a + (int)b;
}

template<typename var>
var tong(var a, var b){
    return var(a+b);
}

namespace functionA{
    int A = 10;
}

namespace functionB{
    int A = 20;
}

int main(){
    ToanHoc th;

    th.tong(4, 5);
    th.tong(4, 5, 6);
    printf("Tong a va b: %d\n", th.tong(7, 10.5));
    printf("Tong a va b: %d\n", tong(7, 10));

    printf("A = %d\n", functionA::A);
    printf("A = %d\n", functionB::A);
}