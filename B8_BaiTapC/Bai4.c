/*
    * File: Bai4.c
    * Author: Canh Truong Trong
    * Date: 6/6/2023
    * Description: Calculate Taxi cost:
    *               + <= 1km -> 14 000 vnd
    *               + <= 30km -> 10 000 vnd
    *               + > 30km -> 8000 vnd
*/
#include <stdio.h>
#include <stdint.h>

int main(){
    float totalKm;
    float cost = 0;

    printf("Nhap so km: ");
    scanf("%f", &totalKm);

    if(totalKm <= 1){
        cost = totalKm*14000;
    }else if(totalKm <= 30){
        cost = 1*14000 + (totalKm - 1)*10000;
    }else{
        cost = 1*14000 + 29*10000 + (totalKm - 30)*8000;
    }

    printf("\nSo tien phai tra: %.0f VND", cost);
}