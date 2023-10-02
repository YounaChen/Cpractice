#include<stdio.h>
#include<stdlib.h>

int main(void){
    char ch;
    printf("input 1 char :");
    scanf(" %c", &ch);

    switch (ch){
    case 'a':
    case 'A':
        printf("your input is A\n");
        break;
    case 'b':
    case 'B':
        printf("your input is B\n");
        break;
    default:
        printf("your input is  not a or b.\n");

    }

    system("pause");
    return 0;
}
