#include<stdio.h>
#include<stdlib.h>

int main(void){
    int score;
    printf("please input score:");
    scanf(" %d", &score);

    if(score<60){
        if(score>=50){
            printf("請參加補考\n");
        }
        else{
            printf("必須重修\n");
        }
    }
    else{
        printf("本科及格!");
    }

    system("pause");
    return 0;
}

