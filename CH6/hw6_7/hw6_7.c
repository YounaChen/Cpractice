#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num1=5;
    int num2=5;
    int num3=5;

    if(num1+num2>num3 && num2+num3>num1 && num1+num3>num2)
        printf("%d %d %d�i�H�c���T���Ϊ��T�����\n", num1, num2, num3);
    else
        printf("%d %d %d���i�H�c���T���Ϊ��T�����\n", num1, num2, num3);


    system("pause");
    return 0;
}
