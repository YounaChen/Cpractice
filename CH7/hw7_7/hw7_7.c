#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i;
    printf("1~100之間可以被6整除的數有:\n");
    for(i=1;i<=100;i++){
        if(i%6==0){
            printf("%d\n",i);
        }

    }

    system("pause");
    return 0;

}
