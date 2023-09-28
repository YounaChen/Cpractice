#include<stdio.h>
#include<stdlib.h>

int main(void){

    float celsius;
    float fahrenheit;
    printf("Input CelsiusÄá¤ó·Å«×:");
    scanf(" %f", &celsius);
    fahrenheit = (float)9/5*celsius+32;
    printf("µØ¤ó·Å«×: %f\n", fahrenheit);

    system("pause");
    return 0;
}
