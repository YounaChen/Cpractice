#include<stdio.h>
#include<stdlib.h>
#define MAX 3

int main(void){
    int i,m,index;
    struct data{
        char name[10];
        int math;
    }student[MAX]={{"Mary",87},{"Flora",93},{"Jenny",74}};

    m = student->math;
    for(i=1;i<MAX;i++){
        if((student+i)->math > m){
            m=(student+i)->math;
            index=i;
        }
    }
    printf("%s�����Z�̰�, ",(student+index)->name);
    printf("���Ƭ�%d��\n",(student+index)->math);


    system("pause");
    return 0;

}