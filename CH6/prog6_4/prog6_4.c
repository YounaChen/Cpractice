#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    printf("�п�J�@�Ӿ��:");
    scanf(" %d", &num);

    if(num%2!=0){
        printf("%d����Q2�㰣,", num);
        printf("�ҥH%d�O�_��\n");
    }
    else{
        printf("%d�i�H�Q2�㰣,", num);
        printf("�ҥH%d�O����\n", num);
    }

    system("pause");
    return 0;
}
