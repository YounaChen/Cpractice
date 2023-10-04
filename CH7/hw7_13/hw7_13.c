#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num,i=2;
    int sum=0;

    do{
        printf("輸入1個偶數正整數:");
        scanf(" %d", &num);
    }while(num<2 || num%2!=0);

    while(i<=num){
        sum+=i;
        i+=2;
    }

    printf("2+4+6+...+%d=%d\n", num, sum);

    system("pause");
    return 0;

}
