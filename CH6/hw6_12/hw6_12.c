#include<stdio.h>
#include<stdlib.h>

int main(void){
    int score=0;
    printf("input student's score:");
    scanf(" %d", &score);

    if(score>=80 && score<=100){
        printf("A級\n");
    }
    else if( score>=60 && score<=79 ){
        printf("B級\n");
    }
    else if( score>=0 && score<=59 ){
        printf("C級\n");
    }
    else{
        printf("error score!!!");
    }

    system("pause");
    return 0;
}

