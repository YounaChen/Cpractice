#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num,i;
    int count=0;

    printf("input a number:");
    scanf(" %d", &num);


    for(i=num-1;i>=2;i--){
        count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("小於%d的最大值數是%d\n", num,i);
            break;
        }

    }


    system("pause");
    return 0;

}


