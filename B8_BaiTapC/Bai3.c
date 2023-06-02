/*
    So sánh 2 chuỗi. Đếm số lần xuất hiện của từ trong chuỗi.
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isEqual(const char arr1[], const char arr2[]){
    if(strlen(arr1) != strlen(arr2)){
        return false;
    }else{
        for(int i=0; i<strlen(arr1); i++){
            if(arr1[i] != arr2[i]){
                return false;
                break;
            }
        }
    }
    return true;
}

void spilitArray(){

}

int main(){
    char arr1[100], arr2[100];

    printf("Nhap chuoi 1: ");
    gets(arr1);
    printf("Nhap chuoi 2: ");
    gets(arr2);

    if(isEqual(arr1, arr2) == true){
        printf("\n2 chuoi giong nhau");
    }else{
        printf("\n2 chuoi khac nhau");
    }
}