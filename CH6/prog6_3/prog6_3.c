#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("�п�J�@�Ӿ��:");
    scanf(" %d", &num);

    if(num>0){
        printf("�A��J����Ƥj��0\n");
    }
    else{
        printf("�A��J����Ƥp��ε���\n");
    }

    system("pause");
    return 0;
}
