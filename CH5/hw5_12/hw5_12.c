#include<stdio.h>
#include<stdlib.h>

int main(void){

    float celsius;
    float fahrenheit;
    printf("Input fahrenheitµØ¤ó·Å«×:");
    scanf(" %f", &fahrenheit);
    celsius = (float)5/9*(fahrenheit-32);
    printf("Äá¤ó·Å«×: %f\n", celsius);

    system("pause");
    return 0;
}
