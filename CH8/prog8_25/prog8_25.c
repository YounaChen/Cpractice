#include<stdio.h>
#include<stdlib.h>

#define SQUARE(X) X*X

int main(void){
    int n;
    printf("Input an integer:");
    scanf(" %d", &n);

    printf("%d*%d=%d\n", n, n, SQUARE(n));

    system("pause");
    return 0;

}



