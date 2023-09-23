
#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num;
    printf("請輸入16進位的整數: ");
    scanf("%x", &num);
    printf("%x的十進位為%d\n", num, num);


    system("pause");
    return 0;
}
