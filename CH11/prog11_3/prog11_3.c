#include<stdio.h>
#include<stdlib.h>

int main(void){
    struct data{
        char name[10];
        int math;
    };
    struct data student={"Mary Wang",74};

    printf("學生姓名: %s\n", student.name);
    printf("數學成績: %d\n", student.math);


    system("pause");
    return 0;

}