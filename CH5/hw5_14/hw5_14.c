#include<stdio.h>
#include<stdlib.h>

int main(void){

    float miles;
    float kilometer;

    printf("Input ? kilometers:");
    scanf(" %f", &kilometer);
    miles = kilometer*(1/1.6);
    printf("%f kilometer= %f miles", kilometer, miles);

    system("pause");
    return 0;
}
