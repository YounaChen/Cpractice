#include<stdio.h>
#include<stdlib.h>

int main(void){
    char ch;

    printf("input a charater:");
    scanf(" %c", &ch);

    if( ch>='0' && ch<='9')
        printf("���r���O�Ʀr\n");
    if( ch>='a' && ch<='z')
        printf("���r���O�^��r��\n");
    if( ch>='A' && ch<='Z')
        printf("���r���O�^��r��\n");

    system("pause");
    return 0;
}
