#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

void show(int arr[]);
void add2(int arr[]);

int main(){

    int A[SIZE]={5,3,6,1};
    printf("�I�sadd2()�e�A�}�C�����e��: ");
    show(A);
    add2(A);
    printf("�I�sadd2()��A�}�C�����e��: ");
    show(A);

    system("pause");
    return 0;
}

void show(int arr[]){
    for(int i=0;i<SIZE;i++){
        printf(" %d", arr[i]);
    }
    printf("\n");

}

void add2(int arr[]){
    for(int i=0;i<SIZE;i++){
        arr[i] += 2 ;
    }
    printf("\n");
}
