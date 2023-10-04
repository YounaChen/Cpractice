#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num,i;
    int count=0;

    for(i=1;i>0;i++){
        if((i%3==1) && (i%5==3) && (i%7==2)){
            printf("最少有%d隻\n", i);
            break;
        }
    }


    system("pause");
    return 0;

}

