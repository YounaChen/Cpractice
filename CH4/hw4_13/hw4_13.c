#include<stdio.h>
#include<stdlib.h>

int main(void){

    char str[100];

    printf("Please input a string(10words, not include space):");
    scanf(" %s", str);

    /*(a)雙引號將字串包圍*/
    printf("\"%s\"\n", str);
    /*(b)反斜線\將字串包圍，印出時的欄寬為20*/
    printf("\\%20s\\\n", str);
    /*(c)反斜線\將字串包圍，印出時的欄寬為20，靠左印出*/
    printf("\\%-20s\\\n", str);


    return 0;
}

