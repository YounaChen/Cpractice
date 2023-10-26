#include<stdio.h>
#include<stdlib.h>

int main(void){
    enum color{
        red,
        green,
        blue,
    };
    enum color shirt;

    printf("sizeof(shirt)=%d\n", sizeof(shirt));
    printf("red=%d\n", red);
    printf("green=%d\n", green);
    printf("blue=%d\n", blue);

    shirt=green;
    if(shirt==green){
        printf("you choosed green clothes.\n");
    }
    else{
        printf("you choose non-green clothes.\n");
    }


    system("pause");
    return 0;

}