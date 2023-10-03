#include<stdio.h>
#include<stdlib.h>

int main(void){

    int sum=0;
    printf("1-1000的完美數有:");

    for(int i=1;i<=1000;i++){
        sum=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum=sum+j;
            }
        }
        if(sum==i){
            printf("%d ",i);
        }
    }


    printf("\n");

    system("pause");
    return 0;

}
