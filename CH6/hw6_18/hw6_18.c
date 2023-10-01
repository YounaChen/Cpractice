#include<stdio.h>
#include<stdlib.h>

int main(void){
    int w,h;
    printf("input weight and height:");
    scanf(" %d %d", &w, &h);

    w>90 && h<180 ? (printf("體重過重\n")):(printf("不會過重\n"));

    system("pause");
    return 0;
}
