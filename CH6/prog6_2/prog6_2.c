#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("�п�J�@�Ӿ��:");
    scanf(" %d", &num);

    if(num>0){
        printf("�A��J����Ƥj��0\n");
    }

    if(num<=0){
        printf("�A��J����Ƥp��ε���0\n");
    }

    printf("�{������\n");

    system("pause");
    return 0;
}
