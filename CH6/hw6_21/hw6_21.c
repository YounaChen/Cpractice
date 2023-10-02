#include<stdio.h>
#include<stdlib.h>

int main(void){
    char ch;
    printf("input 1 char :");
    scanf(" %c", &ch);

    switch (ch){
    case 'a':
        printf("your input is a\n");
        break;
    case 'b':
        printf("your input is b\n");
        break;
    default:
        printf("your input is  not a or b.\n");

    }

    system("pause");
    return 0;
}
