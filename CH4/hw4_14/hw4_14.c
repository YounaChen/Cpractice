#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num;

    printf("輸入十進位的數字:");
    scanf(" %d", &num);


    printf("轉成八進位:%o\n", num);
    printf("轉成十六進位:%x\n", num);



    return 0;
}
