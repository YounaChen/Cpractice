#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;

    printf("input an integer:");
    scanf(" %d", &num);

    if(num>0)
        printf("輸入的整數>0\n");
    if(num<0)
        printf("輸入的整數<0\n");
    if(num==0)
        printf("輸入的整數=0\n");


    system("pause");
    return 0;
}

