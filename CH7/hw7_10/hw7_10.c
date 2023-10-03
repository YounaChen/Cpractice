#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    double sum=0;
    int i;
    printf("請輸入一個整數:");
    scanf(" %d", &num);

    for(i=1;i<=num;i++){
        sum=sum+(1/(float)i);
    }

    printf("1 + 1/2 + 1/3 + 1/4 + ... + 1/n=%f \n", sum);

    system("pause");
    return 0;

}
