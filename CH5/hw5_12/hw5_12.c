#include<stdio.h>
#include<stdlib.h>

int main(void){

    float celsius;
    float fahrenheit;
    printf("Input fahrenheit�ؤ�ū�:");
    scanf(" %f", &fahrenheit);
    celsius = (float)5/9*(fahrenheit-32);
    printf("���ū�: %f\n", celsius);

    system("pause");
    return 0;
}
