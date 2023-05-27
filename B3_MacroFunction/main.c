#include <stdio.h>

#define MAX 10

#define SUM(a,b) a+b

#define CREATE_FUNC(ten_ham, noi_dung)      \ 
void ten_ham(){                             \
    printf("%s", noi_dung);               \
}
// sử dụng "\" để xuống dòng khi sử dụng macro

CREATE_FUNC(test, "this is test\n");

// function
int sum(int a, int b){
    return a+b;
}

int main(){
    
    printf("Max = %d\n", MAX);

    printf("Tong a va b la %d\n",SUM(4,7));

    test();

    printf("Tong a + b = %d", sum(4,7));
}