#include<stdio.h>
#include<stdlib.h>

int main(void){
    char ch;

    printf("input a charater:");
    scanf(" %c", &ch);

    if( ch>='0' && ch<='9')
        printf("此字元是數字\n");
    if( ch>='a' && ch<='z')
        printf("此字元是英文字母\n");
    if( ch>='A' && ch<='Z')
        printf("此字元是英文字母\n");

    system("pause");
    return 0;
}
