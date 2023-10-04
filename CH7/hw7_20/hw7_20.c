#include<stdio.h>
#include<stdlib.h>

int main(void){

    int input=1;
    int num=0;
    int i=1;

    do{
        printf("請輸入1個範圍1~50的數字:");
        scanf(" %d", &num);
        if(num>=1 && num<50){
            input++;
            i=1;
            do{
                printf("*");
                i++;
            }while(i<=num);
            printf("\n");
        }


    }while(input<=3 || num>50 || num<1 );

    system("pause");
    return 0;

}

