#include<stdio.h>
#include<stdlib.h>



int main(void){

    /*Armstrong*/
    int sum=0;
    int temp,n1,n2,n3;
    printf("所有的Armstrong數:\n");
    int i;
    for(i=100;i<1000;i++){
        n3=i%10;
        temp=i/10;
        n2=temp%10;
        n1=temp/10;
        sum=pow(n1,3)+pow(n2,3)+pow(n3,3);
        if(i==sum){
            printf("%d ", i);
        }
    }

    printf("\n");

    system("pause");
    return 0;

}
