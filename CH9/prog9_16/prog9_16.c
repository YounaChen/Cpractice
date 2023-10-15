#include<stdio.h>
#include<stdlib.h>

#define SIZE 4

void show(int arr[]);
void add2(int arr[]);

int main(){

    int A[SIZE]={5,3,6,1};
    printf("呼叫add2()前，陣列的內容為: ");
    show(A);
    add2(A);
    printf("呼叫add2()後，陣列的內容為: ");
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
