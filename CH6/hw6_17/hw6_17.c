#include<stdio.h>
#include<stdlib.h>

int main(void){

    int weight;
    printf("please input weight:");
    scanf(" %d", &weight);

    weight>90 ? (printf("體重過重\n")):(printf("不會過重\n"));


    system("pause");
    return 0;
}

