#include<stdio.h>
#include<stdlib.h>

int main(void){
    if(5>2)
        printf("5>2成立\n");

    if(1)
        printf("此行一定會被執行\n");

    if(3>8)
        printf("3==8成立\n");

    system("pause");
    return 0;
}

