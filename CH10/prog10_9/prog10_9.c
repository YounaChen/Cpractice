#include<stdio.h>
#include<stdlib.h>
void swap(int,int);

int main(void){
    int a=5,b=20;
    printf("�洫�e... ");
    printf("a=%d, b=%d\n", a, b);
    swap(a,b);
    printf("�洫��... ");
    printf("a=%d, b=%d\n", a, b);
    
    system("pause");
    return 0;
}

void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}