#include<stdio.h>
#include<stdlib.h>

#define BEGIN {
#define END }
int main(void)
BEGIN
    int i,j;
    for(i=1;i<=5;i++)
    BEGIN
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");

    END

    system("pause");
    return 0;

END



