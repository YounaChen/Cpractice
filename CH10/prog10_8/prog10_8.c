#include<stdio.h>
#include<stdlib.h>
void add10(int *);

int main(void){
    int a=5;

    printf("呼叫add()之前，a=%d\n", a);
    add10(&a);
    printf("呼叫add()之後，a=%d\n", a);

    system("pause");
}

void add10(int *pl){
    *pl=*pl+10;
}