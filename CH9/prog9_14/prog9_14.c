#include<stdio.h>
#include<stdlib.h>

#define SIZE 3
void func(int arr[]);

int main(){

    int i, A[SIZE]={20,8,13};
    printf("�bmain()�̡A�}�CA��������}��\n");
    for(i=0;i<SIZE;i++){
        printf("A[%d]=%2d,��}��%p\n", i, A[i], &A[i]);
    }
    func(A);

    system("pause");
    return 0;
}

void func(int arr[]){
    int i;
    printf("\n�bfunc()�̡A�}�Carr��������}��\n");
    for(i=0;i<SIZE;i++){
        printf("arr[%d]=%2d,��}��%p\n", i, arr[i], &arr[i]);
    }
    
}

