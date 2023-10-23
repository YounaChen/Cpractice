#include<stdio.h>
#include<stdlib.h>

int main(void){
    struct date{
        int month;
        int day;
    };
    struct data{
        char name[10];
        int math;
        struct date birthday;
    } s1={"Mary Wang",74,{10,2}} ;

    printf("student name: %s\n", s1.name);
    printf("birthday: %d / %d \n", s1.birthday.month, s1.birthday.day);
    printf("math score: %d\n", s1.math);

    system("pause");
    return 0;

}