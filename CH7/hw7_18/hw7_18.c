#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n=0, sum=0;
    int i=0;

    do{
        printf("請輸入1個正偶數:");
        scanf(" %d",&n);
    }while(n<2 || n%2!=0);

    do{
        sum+=i;
        i+=2;
    }while(i<=n);


    printf("2+4+6+...+%d=%d\n", n,  sum);

    system("pause");
    return 0;

}
