#include <stdio.h>
#include <stdint.h>

struct dataType{
    uint16_t arr1[7];
    uint64_t arr2[5];
    uint8_t arr3[3];
    uint32_t arr4[5];
};

typedef union{
    uint64_t a[5];
    uint8_t b[2];
    uint32_t c[4];
}typeData;

int main(){
    printf("Size of struct = %lu\n", sizeof(struct dataType));

    typeData data;
    printf("Size of union = %d\n", sizeof(data));
}