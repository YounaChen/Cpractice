#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num1,num2;

    printf("Input num1:");
    scanf(" %d", &num1);
    printf("Input num2:");
     scanf(" %d", &num2);
    printf("num1=%d   num2=%d\n", num1, num2);
    printf("num1(%d)*num2(%d)=%d\n", num1, num2, num1*num2);
    system("pause");

    return 0;
}
