#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num;

    printf("輸入十六進位的數字:");
    scanf(" %x", &num);


    printf("轉成八進位:%o\n", num);
    printf("轉成十進位:%d\n", num);



    return 0;
}
