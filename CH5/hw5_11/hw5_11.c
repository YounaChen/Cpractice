#include<stdio.h>
#include<stdlib.h>

int main(void){

    float celsius;
    float fahrenheit;
    printf("Input Celsius���ū�:");
    scanf(" %f", &celsius);
    fahrenheit = (float)9/5*celsius+32;
    printf("�ؤ�ū�: %f\n", fahrenheit);

    system("pause");
    return 0;
}
