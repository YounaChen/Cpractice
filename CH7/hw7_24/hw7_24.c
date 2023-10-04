#include<stdio.h>
#include<stdlib.h>

int main(void){

    int input=0;
    int num=0;
    int i=1;

    while(input!=3 ){
        printf("請輸入1個範圍1~50的數字:");
        scanf(" %d", &num);
        if(num>=1 && num<50){
            input++;
            i=1;
            while(i<=num){
                printf("*");
                i++;
            }
            printf("\n");
        }


    }

    system("pause");
    return 0;

}
