#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a=3, b=3;

    printf("a=%d", a);
    printf(", a++的傳回值為%d", a++);
    printf(", a=%d\n", a);


    printf("b=%d", b);
    printf(", ++b的傳回值為%d", ++b);
    printf(", b=%d\n", b);

    system("pause");
    return 0;
}

