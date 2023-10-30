#include<stdio.h>
#include<stdlib.h>
# define STR "HELLO C LANGUAGE.\n"

int main(void){
    #ifdef STR
        printf(STR);
    #else
        printf("STR not define\n");
    #endif
    return 0;
}