#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

void show_binary(int);

int main(void){

    int a;
    a=(89<<1);

    printf("89���G�i��Ȭ�: ");
    show_binary(89);
    printf("����1�Ӧ줸��: ");
    show_binary(a);
    printf("�����@�Ӧ줸�᪺�̶i��Ȭ�: %d\n", a);

    system("pause");
    return 0;
}

void show_binary(int num){
    int i, b[SIZE]={0};

    for(i=1;i<=SIZE;i++){
        b[SIZE-i]=num%2;
        num = num/2;
    }

    for(i=0;i<SIZE;i++){
        printf("%d",b[i]);
    }
    printf("\n");
}