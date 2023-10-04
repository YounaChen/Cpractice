#include<stdio.h>
#include<stdlib.h>

int main(void){

    int sum=0;
    int i=1;


    while(sum<1000){
        sum+=i;
        i++;
    }

    printf("n=%d\n", i-1);

    system("pause");
    return 0;

}
