#include<stdio.h>
#include<stdlib.h>

int main(void){

    char firstname[100];
    char lastname[100];

    printf("Please input firstname:");
    scanf(" %s", firstname);

    printf("Please input lastname:");
    scanf(" %s", lastname);

    printf("Name: %s %s\n", lastname, firstname);

    return 0;
}
