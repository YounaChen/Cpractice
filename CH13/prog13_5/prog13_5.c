#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main(void){
    #ifdef SIZE
        #if SIZE >20
            char str[SIZE]="Hello C language.";
        #else
            char *str="SIZE too small";
        #endif
    #else
        char *str="SIZE not defined";
    #endif

    printf("%s\n", str);
    system("pause");
    return 0;
}