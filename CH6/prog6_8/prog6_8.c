#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("Please input an integer:");
    scanf(" %d", &num);

    if(num>=0){
        if(num<=10){
            printf("數字介於0-10之間\n");
        }
    }
    else{
        printf("數字小於0\n");
    }

    system("pause");
    return 0;
}
