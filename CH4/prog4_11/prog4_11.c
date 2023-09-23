#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num1,num2;
    printf("請輸入2個整數,請用逗號隔開數值: ");
    scanf("%d,%d", &num1, &num2);
    printf("%d+%d=%d\n", num1, num2, num1+num2);


    system("pause");
    return 0;
}
