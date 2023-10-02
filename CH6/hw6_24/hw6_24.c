#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i=0;
    int sum=0;

    start:
        i++;
        if(i<=100){
            if(i%2!=0){
                sum = sum + i;
            }

            goto start;
        }



    printf("1~100的奇數sum=%d\n", sum);


    system("pause");
    return 0;
}

