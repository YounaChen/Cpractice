#include<stdio.h>
#include<stdlib.h>

int main(void){

    int n, i=1, fact=1;

    do{
        printf("請輸入n值(n>0):");
        scanf(" %d", &n);
    }while(n<=0);

    do{
        fact = fact*i;
        i++;
    }while(i<=n);

    printf("%d!=%d\n", n, fact);

    system("pause");
    return 0;

}
