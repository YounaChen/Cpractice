
#include<stdio.h>
#include<stdlib.h>

#define SQUARE n*n


int main(void){
    int n;
    printf("Input an integer:");
    scanf("%d", &n);
    printf("%d*%d=%d\n", n, n, SQUARE);

    system("pause");
    return 0;

}

