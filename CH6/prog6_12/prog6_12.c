#include<stdio.h>
#include<stdlib.h>

int main(void){
    char grade;
    printf("Please input grade:");
    scanf(" %c", &grade);

    switch(grade){
        case 'a':
        case 'A':
            printf("Excellent!\n");

        case 'b':
        case 'B':
            printf("Good!\n");

        case 'c':
        case 'C':
            printf("Be study hard!\n");

        default:
            printf("Falled!!\n");

    }

    system("pause");
    return 0;
}
