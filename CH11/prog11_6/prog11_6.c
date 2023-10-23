#include<stdio.h>
#include<stdlib.h>

int main(void){
    struct data{
        char name[10];
        int math;
    }student[10];

    char stu[10];

    printf("sizeof(student[3])=%d\n", sizeof(student[3]));
    printf("sizeof(student)=%d\n", sizeof(student));
    printf("sizeof(stu[3])=%d\n", sizeof(stu[3]));
    printf("sizeof(stu)=%d\n", sizeof(stu));


    system("pause");
    return 0;

}