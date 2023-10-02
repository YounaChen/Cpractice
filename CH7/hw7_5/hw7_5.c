#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i;
    int sum = 0;
    for(i=1;i<=100;i++){
        if(i%3==0 && i%8==0){
            sum = sum + i;
        }
    }

    printf("同時可以被3和8整除的所有整數總和為:%d\n", sum);

    system("pause");
    return 0;

}
