#include <stdio.h>

void tong(int a, int b){
    printf("Tong cua %d va %d la %d\n", a, b, a+b);
}

void hieu(int a, int b){
    printf("Hieu cua %d va %d la %d\n", a, b, a-b);
}

void tich(int a, int b){
    printf("Tich cua %d va %d la %d\n", a, b, a*b);
}

void thuong(int a, int b){
    printf("Thuong cua %d va %d la %.2f\n", a, b, ((float)a) / b);
}

int main(){
    void (*phep_toan)(int, int) = NULL;             // con trỏ hàm

    phep_toan = &thuong;
    phep_toan(6,5);

    // con trỏ void
    int i = 5;
    char c = 'B';
    float a = 4.16;

    void *ptr = &i;

    printf("i = %d", *(int *)ptr);
}