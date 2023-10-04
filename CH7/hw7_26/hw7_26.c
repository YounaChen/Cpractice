#include<stdio.h>
#include<stdlib.h>

int main(void){

    int layer=5;

    for(int i=1;i<=layer;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    system("pause");
    return 0;

}
