#include<stdio.h>
#include<stdlib.h>

int power(int,int);

int main(void){

    printf("power(2,3)=%d\n", power(2,3));

    system("pause");
    return 0;

}

int power(int b, int n){
    if(n==0)
        return 1;
    else
        return (b*power(b,n-1));

}
