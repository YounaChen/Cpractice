#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    struct data{
        char name[10];
        int math;
    }student;

    printf("Input your name: ");
    gets(student.name);
    printf("Input your score: ");
    scanf(" %d", &student.math);

    printf("name: %s\n", student.name);
    printf("score: %d\n", student.math);

    system("pause");
    return 0;

}