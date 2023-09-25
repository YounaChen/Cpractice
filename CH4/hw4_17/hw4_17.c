#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char ch1,ch2;

    printf("Input first char:");
    scanf("%c", &ch1);
    fflush(stdin);
    printf("Input second char:");
    scanf("%c", &ch2);

    printf("ch1=%c, ch2=%c\n", ch1, ch2);


    system("pause");
    return 0;
}

