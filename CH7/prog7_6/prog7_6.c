#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n, i=1, sum=0;
    do{
        printf("請輸入n值(n>0):");
        scanf(" %d", &n);
    }while(n<=0);

    do{
        sum+=i++; /*計算完sum=sum+i之後，i的值再加1*/
    }while(i<=n);

    printf("1+2+3+...+%d=%d\n", n, sum);

    system("pause");
    return 0;

}
