#include<stdio.h>
#include<stdlib.h>

int main(void){
    int year = 0;
    printf("輸入4位數的數字:");
    scanf(" %d", &year);

    if(year%4000==0 ){
        printf("不是閏年\n");
    }
    else if(year%400==0 ){
        printf("是閏年\n");
    }
    else if(year%4==0 && year%100==0){
        printf("不是閏年\n");
    }
    else if(year%4==0 && year%100!=0){
        printf("是閏年\n");
    }
    else{
        printf("不是閏年\n");
    }


    system("pause");
    return 0;
}
