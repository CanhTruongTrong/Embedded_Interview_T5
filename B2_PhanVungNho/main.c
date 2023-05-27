#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void test(){
    char arr[3];

    printf("Dia chi arr: %p\n", arr);
}

void test2(){
    char *arr = (char *)malloc(sizeof(char)*3);

    printf("Dia chi arr: %p\n", arr);
    free(arr);
}

int main(){
    // uint8_t *arr = (uint8_t *)malloc(sizeof(uint8_t) * 5);

    // for(int i = 0; i<5; i++){
    //     arr[i] = i;
    // }

    // for(int i=0; i<5; i++){
    //     printf("i = %d\n", arr[i]);
    // }

    // arr = (uint8_t *)realloc(arr, sizeof(uint8_t) * 6);

    test();
    test();
    test2();
    test2();

}