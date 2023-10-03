#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("輸入1個正整數:");
    scanf(" %d", &num);

    printf("因數有:");
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d, ", i);
        }
    }

    printf("\n");

    system("pause");
    return 0;

}
