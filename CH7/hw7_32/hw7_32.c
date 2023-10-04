#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num,i;
    int count=0;

    printf("input a number:");
    scanf(" %d", &num);


    for(i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }

    if(count==2){
        printf("%d是質數\n", num);
    }
    else{
        printf("%d不是質數\n", num);
    }


    system("pause");
    return 0;

}


