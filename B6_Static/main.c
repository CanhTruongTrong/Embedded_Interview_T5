#include <stdio.h>

void test(){
    static int a = 10;

    printf("a = %d\n", a);
    a++;
}

int main(){
    test();
    test();
    test();
}