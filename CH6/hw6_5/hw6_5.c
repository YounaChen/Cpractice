#include<stdio.h>
#include<stdlib.h>

int main(void){
    int weight;


    printf("input weight:");
    scanf(" %d",&weight);

    if(weight>90)
        printf("�魫�L��\n");
    else
        printf("���|�L��\n");

    system("pause");
    return 0;
}
