#include<stdio.h>
#include<stdlib.h>

int main(void){
    char name[20];
    char *ptr="how are you?";
    printf("What's your name? ");
    gets(name);
    printf("Hi,  %s, ",name);
    puts(ptr);


    system("pause");
    return 0;

}