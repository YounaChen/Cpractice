#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct data{
    char name[10];
    int math;
};

int maximum(struct data arr[]);

int main(void){
    int idx;
    struct data s1[MAX]={{"Mary",87},{"Flora",93},{"Jenny",74}};

    idx=maximum(s1);
    printf("%s�����Z�̰�, ", (s1+idx)->name);
    printf("���Ƭ�%d��\n, ", (s1+idx)->math);

    system("pause");
    return 0;

}

int maximum(struct data arr[]){
    int m,i,index;
    m=arr->math;

    for(i=0;i<MAX;i++){
        if((arr+i)->math>m){
            m=(arr+i)->math;
            index=i;
        }
    }
    return index;
}