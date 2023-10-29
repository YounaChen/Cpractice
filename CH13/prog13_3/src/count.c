#include<stdio.h>
#include<stdlib.h>


void count(void){
    extern int cnt;
    cnt++;
    printf("cnt=%d\n", cnt);
    
}