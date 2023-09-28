#include<stdio.h>
#include<stdlib.h>

int main(void){

    int score;

    printf("input your score:");
    scanf(" %d", &score);

    if(score>=80){
        printf("Grade:A\n");
    }
    else if(score>=70){
        printf("Grade:B\n");
    }
    else if(score>=60){
        printf("Grade:C\n");
    }
    else{
        printf("Failed!!!\n");
    }


    system("pause");
    return 0;
}
