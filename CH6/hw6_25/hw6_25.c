#include<stdio.h>
#include<stdlib.h>

int main(void){
    int year = 1899;
    printf("西元1900~2000之間所有的閏年:\n");

    start:
        year++;
        if(year<=2000){
            if((year%400==0)||(year%4==0 && year%100!=0)){
                printf("西元%d年\n", year);
            }
            goto start;
        }


    system("pause");
    return 0;
}

