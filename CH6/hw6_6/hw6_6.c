#include<stdio.h>
#include<stdlib.h>

int main(void){
    int height, weight;

    printf("input height:");
    scanf(" %d", &height);
    printf("input weight:");
    scanf(" %d",&weight);

    if (weight>90 && height <180)
        printf("體重過重\n");
    else
        printf("不會過重\n");

    system("pause");
    return 0;
}

