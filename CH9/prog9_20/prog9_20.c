#include<stdlib.h>
#include<stdio.h>

int main(){

    char ch='a';
    char str1[]="a";
    char str2[]="Sweet home";

    printf("字元ch佔了%d個位元組\n", sizeof(ch));
    printf("字串str1佔了%d個位元組\n", sizeof(str1));
    printf("字串str2佔了%d個位元組\n", sizeof(str2));

    system("pause");
    return 0;
}
