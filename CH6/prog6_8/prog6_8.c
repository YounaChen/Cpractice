#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("Please input an integer:");
    scanf(" %d", &num);

    if(num>=0){
        if(num<=10){
            printf("�Ʀr����0-10����\n");
        }
    }
    else{
        printf("�Ʀr�p��0\n");
    }

    system("pause");
    return 0;
}
