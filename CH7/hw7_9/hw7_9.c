
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num=50;
    int sum=0,i;
    for(i=1;i<=50;i++){
        if(i%2==0){
            sum=sum-pow(i,2);
        }
        else{
            sum=sum+pow(i,2);
        }
    }

    printf("1^2 - 2^2 + 3^2 - 4^2 + ... + 47^2 - 48^2 + 49^2 - 50^2 = %d\n", sum);

    system("pause");
    return 0;

}
