
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int score;
    int gradeA=0, gradeB=0, gradeC=0;

    int i=1;
    while(i<=10){
        printf("input (%d/10) student score:", i);
        scanf(" %d", &score);
        if (score>=0 && score<=59){
            gradeC++;
        }
        else if(score>=60 && score<=75){
            gradeB++;
        }
        else if(score>=76 && score<=100){
            gradeA++;
        }
        i++;
    }

    printf("A:%d人\n", gradeA);
    printf("B:%d人\n", gradeB);
    printf("C:%d人\n", gradeC);


    system("pause");
    return 0;
}
