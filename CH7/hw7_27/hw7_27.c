
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i,j,k,num=5;

    for(i=1;i<=num;i++){
        for(j=1;j<=(num-i);j++){
            printf(" ");

        }


        for(k=1;k<=i;k++){
            printf("%d", k);
        }


        printf("\n");

    }

    system("pause");
    return 0;

}
