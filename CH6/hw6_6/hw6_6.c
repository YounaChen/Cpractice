#include<stdio.h>
#include<stdlib.h>

int main(void){
    int height, weight;

    printf("input height:");
    scanf(" %d", &height);
    printf("input weight:");
    scanf(" %d",&weight);

    if (weight>90 && height <180)
        printf("�魫�L��\n");
    else
        printf("���|�L��\n");

    system("pause");
    return 0;
}

