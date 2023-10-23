#include<stdio.h>
#include<stdlib.h>

int main(void){
    struct data{
        char name[10];
        int math;
        int eng;
    }student, *ptr;

    ptr=&student;

    printf("student name: ");
    gets(ptr->name);
    printf("math score: ");
    scanf(" %d", &ptr->math);
    printf("english score: ");
    scanf(" %d", &ptr->eng);

    printf("math score=%d\n", ptr->math);
    printf("english score=%d\n", ptr->eng);
    printf("avg score=%.2f\n", (ptr->math+ptr->eng)/2.0);


    system("pause");
    return 0;

}