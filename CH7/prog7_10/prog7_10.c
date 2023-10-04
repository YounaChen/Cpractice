#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i,j;
    i=1;
    while(i<=9){
        j=1;
        while(j<=9){
            printf("%d*%d=%2d ", i,j,i*j);
            j++;
        }
        i++;
        printf("\n");
    }

    system("pause");
    return 0;

}
