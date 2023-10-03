#include<stdio.h>
#include<stdlib.h>



int main(void){

    /*Armstrong數*/
    int num1, num2, num3;
    int temp,ans=0;
    printf("找出所有的Armstrong數\n");


    for(int i=100;i<=999;i++){
        num1 = i/100;
        temp = i%100;
        num2 = temp/10;
        num3 = temp%10;
        ans = pow(num1,3)+pow(num2,3)+pow(num3,3);
        if(ans==i){
            printf(" %d", i);
        }
    }

    printf("\n");

    system("pause");
    return 0;

}
