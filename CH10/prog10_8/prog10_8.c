#include<stdio.h>
#include<stdlib.h>
void add10(int *);

int main(void){
    int a=5;

    printf("�I�sadd()���e�Aa=%d\n", a);
    add10(&a);
    printf("�I�sadd()����Aa=%d\n", a);

    system("pause");
}

void add10(int *pl){
    *pl=*pl+10;
}