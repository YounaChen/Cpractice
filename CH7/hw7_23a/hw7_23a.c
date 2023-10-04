#include<stdio.h>
#include<stdlib.h>

int main(void){

    int sum=0;
    int i=1;


    for(i=1;sum<1000;i++){
        sum+=i;
    }

    printf("n=%d\n", i-1);

    system("pause");
    return 0;

}
