#include<stdio.h>
#include<stdlib.h>

int main(void){
    struct data{
        char name[10];
        int math;
    };
    struct data student={"Mary Wang",74};

    printf("�ǥͩm�W: %s\n", student.name);
    printf("�ƾǦ��Z: %d\n", student.math);


    system("pause");
    return 0;

}