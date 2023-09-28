#include<stdio.h>
#include<stdlib.h>

int main(void){
    int weight;


    printf("input weight:");
    scanf(" %d",&weight);

    if(weight>90)
        printf("體重過重\n");
    else
        printf("不會過重\n");

    system("pause");
    return 0;
}
