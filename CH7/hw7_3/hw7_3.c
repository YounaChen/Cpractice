#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num, i;
    int sum=0;
    printf("輸入1個奇數:", num);
    scanf(" %d", &num);

    for(i=1;i<=num;i+=2){
        sum = sum + i;
    }


    printf("1+3+...+%d=%d\n", num,sum);
    system("pause");
    return 0;

}
