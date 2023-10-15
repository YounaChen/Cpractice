#include<stdio.h>
#include<stdlib.h>


int main(void){
    int arr[5];
    int num=1;
    for(int i=0;i<5;i++){
        arr[i]=num;
        num++;
    }

    printf("°}¦Carr:\n");
    for(int i=0;i<5;i++){
        printf("arr[%d]=%d\n", i,arr[i]);
    }
    system("pause");
    return 0;
}