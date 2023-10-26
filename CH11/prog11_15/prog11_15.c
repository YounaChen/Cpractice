#include<stdio.h>
#include<stdlib.h>

struct data{
    char name[10];
    int math;
};

typedef struct data SCORE;
void display(SCORE);

int main(void){
    SCORE s1={"Jenny", 74};
    display(s1);
    

    system("pause");
    return 0;

}

void display(SCORE st){
    printf("student name: %s\n", st.name);
    printf("student math: %d\n", st.math);
}