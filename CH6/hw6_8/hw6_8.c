#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num1=3;
    int num2=4;
    int num3=5;

    printf("有三個角:%d %d %d\n", num1, num2, num3);


    if(num1+num2>num3 && num2+num3>num1 && num1+num3>num2){
            /* 直角三角形 */
        if(num1^2+num2^2==num3^2 || num2^2+num3^2==num1^2 || num1^2+num3^2==num2^2){
            printf("%d %d %d可以構成直角三角形\n", num1, num2, num3);
        }
            /* 鈍角三角形 */
        else if(num1^2+num2^2<num3^2 || num2^2+num3^2<num1^2 || num1^2+num3^2<num2^2){
            printf("%d %d %d可以構成鈍角三角形\n", num1, num2, num3);
        }
            /* 銳角三角形 */
        else if(num1^2+num2^2>num3^2 && num2^2+num3^2>num1^2 && num1^2+num3^2>num2^2){
            printf("%d %d %d可以構成銳角三角形\n", num1, num2, num3);
        }

    }
    else
        printf("%d %d %d不可以構成三角形的三個邊長\n", num1, num2, num3);




    system("pause");
    return 0;
}

