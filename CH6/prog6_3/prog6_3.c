#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("請輸入一個整數:");
    scanf(" %d", &num);

    if(num>0){
        printf("你輸入的整數大於0\n");
    }
    else{
        printf("你輸入的整數小於或等於\n");
    }

    system("pause");
    return 0;
}
