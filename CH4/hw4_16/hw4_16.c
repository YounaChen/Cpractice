#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char str1[25];
    char str2[25];
    char str3[25];

    printf("Input a string:");
    scanf(" %s", str1);
    scanf(" %s", str2);
    scanf(" %s", str3);

    printf("The string is %s %s %s\n", str1, str2, str3);


    system("pause");
    return 0;
}

