#include<stdio.h>
#include<stdlib.h>

int main(void){

    char ch;
    while(ch!=17){
        ch=getch();
        printf("ASCII of ch=%d\n", ch);
    }
    printf("您已按了CTRL+q...\n");

    system("pause");
    return 0;

}

