#include<stdio.h>
#include<stdlib.h>

void star(void);

int main(void){

    star();
    printf("歡迎使用c語言:\n");
    star();

    system("pause");
    return 0;

}


void star(void){

    printf("***********\n");
    return;
}
