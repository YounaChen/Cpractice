#include<stdio.h>
#include<stdlib.h>
void address(int *);

int main(void){
    int a=12;
    int *ptr=&a;

    address(&a);
    address(ptr);

    
    system("pause");
    return 0;
}

void address(int *pl){
    printf("���}%p���A�x�s���ܼƤ��e��%d\n", pl, *pl);
}