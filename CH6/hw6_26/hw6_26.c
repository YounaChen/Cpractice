#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num = 0;

    start:
        printf("input a number(1-4):");
        scanf(" %d", &num);
        if(num>4||num<1){
            goto start;
        }


    switch(num){
        case 1:
            printf("春天\n");
            break;
        case 2:
            printf("夏天\n");
            break;
        case 3:
            printf("秋天\n");
            break;
        case 4:
            printf("冬天\n");
            break;
        default:
            printf("輸入錯誤\n");


    }
    system("pause");
    return 0;
}

