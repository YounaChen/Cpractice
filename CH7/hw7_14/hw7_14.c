#include<stdio.h>
#include<stdlib.h>

int main(void){

    int ruler=3000;
    int count=0;

    while(ruler>5){
        ruler/=2;
        count++;

    }

    printf("需要花費%d天，繩子的長度才會短於5公尺\n", count+1);

    system("pause");
    return 0;

}
