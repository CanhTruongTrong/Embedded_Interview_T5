/*
    Cho 1 mảng ngẫu nhiên:
    1. Sắp xếp theo thứ tự tăng dần.
    2. Hiển thị số lần xuất hiện của mỗi phần tử trong mảng.
        VD: a[0] xuất hiện 1 lần
            a[1] xuất hiện 3 lần
*/
#include <stdio.h>
#include <stdint.h>

// sắp xếp tăng dần
void sortList(uint8_t n, uint8_t arr[]){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    // in ra
    printf("Mang tang dan: ");
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

// đếm số lần xuất hiện
void countElement(uint8_t n, uint8_t arr[]){
    int count = 1;

    for(int i=0; i<n-1; i++){
        if(arr[i] == arr[i+1]){
            count++;
        }else{
            printf("\n%d xuat hien %d lan", arr[i], count);
            count = 1;
        }
    }
    printf("\n%d xuat hien %d lan", arr[n-1], count);
}

int main(){
    uint8_t n, arr[100];
    
    // nhập số lượng phần tử
    printf("Nhap so luong phan tu:  ");
    scanf("%d", &n);

    // nhập giá trị mỗi phần tử
    for(int i=0; i<n; i++){
        printf("array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    sortList(n, arr);
    countElement(n, arr);

}