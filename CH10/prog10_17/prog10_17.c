#include<stdio.h>
#include<stdlib.h>
void replace(int *, int, int);

int main(void){
    int a[5]={13,32,67,14,95};
    int i, num=24;
    replace(a,4,num);

    printf("After replaceĦAarray is:");
    for(i=0;i<5;i++){
        printf("%3d", a[i]);
    }
    printf("\n");


    system("pause");
    return 0;

}

void replace(int *ptr, int n, int num){
    *(ptr+n-1)=num;
}