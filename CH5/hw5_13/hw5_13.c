#include<stdio.h>
#include<stdlib.h>

int main(void){

    float miles;
    float kilometer;

    printf("Input ?miles:");
    scanf(" %f", &miles);
    kilometer = 1.6*miles;
    printf("%f miles= %f kilometers", miles, kilometer);

    system("pause");
    return 0;
}
