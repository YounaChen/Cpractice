#include<stdio.h>
#include<stdlib.h>

int main(void){

    int sum=0;
    int i=1,num=10;

    while(i<=num){
        printf("%d的平方=%d\n", i,i*i);
        sum+=pow(i,2);
        i++;
    }

    printf("1~10所有平方和的總和=%d\n", sum);

    system("pause");
    return 0;

}
