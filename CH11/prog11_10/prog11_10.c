#include<stdio.h>
#include<stdlib.h>

struct data{
    char name[10];
    int math;
};

void display(struct data);

int main(void){
    struct data s1={"Jenny",74};
    display(s1);


    system("pause");
    return 0;

}

void display(struct data st){
    printf("student name: %s\n", st.name);
    printf("math score: %d\n", st.math);
}