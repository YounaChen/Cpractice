#include<stdio.h>
#include<stdlib.h>

int main(void){
    int work_hour=0;
    float salary=0;
    printf("input ?hours work time:");
    scanf(" %d", &work_hour);

    if(work_hour<=60){
        salary = salary + work_hour*75;
    }
    else if(work_hour>=61 && work_hour<=75){
        salary = 60*75 + (work_hour-60)*75*1.25;
    }
    else{
        salary = 60*75 + 15*75*1.25 + (work_hour-75)*75*1.75;
    }

    printf("salary=%f dollars\n", salary);

    system("pause");
    return 0;
}

