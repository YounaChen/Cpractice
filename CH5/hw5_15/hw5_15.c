#include<stdio.h>
#include<stdlib.h>

int main(void){

    float bottom;
    float height;
    float area;

    printf("�п�J����|��Ϊ���:");
    scanf(" %f", &bottom);
    printf("�п�J����|��Ϊ���:");
    scanf(" %f", &height);
    area = bottom*height;
    printf("area=%f\n", area);

    system("pause");
    return 0;
}
