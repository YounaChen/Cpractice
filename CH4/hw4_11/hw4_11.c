#include<stdio.h>
#include<stdlib.h>

int main(void){

    int stu_id;
    int stu_age;

    printf("Please input student's id:");
    scanf(" %d", &stu_id);

    printf("Please input student's age:");
    scanf(" %d", &stu_age);

    printf("Student ID:%d  Student Name:%d\n", stu_id, stu_age);

    return 0;
}
