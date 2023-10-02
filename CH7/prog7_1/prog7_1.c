#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i,sum=0;

    for(i=1;i<=10;i++){
        sum = sum + i;
    }

    printf("1+2+3+...+10=%d\n", sum);
    system("pause");
    return 0;

}
