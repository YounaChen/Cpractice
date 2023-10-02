#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i;

    for(i=41;i<=64;i++){
        printf("ASCII(%d)=%c\n", i, i);
    }

    system("pause");
    return 0;

}
