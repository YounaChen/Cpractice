#include<stdio.h>
#include<stdlib.h>

int main(void){

    float bottom;
    float height;
    float area;

    printf("請輸入平行四邊形的底:");
    scanf(" %f", &bottom);
    printf("請輸入平行四邊形的高:");
    scanf(" %f", &height);
    area = bottom*height;
    printf("area=%f\n", area);

    system("pause");
    return 0;
}
