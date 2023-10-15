#include<stdlib.h>
#include<stdio.h>
#define SIZE 5

void show(int a[]);
void bubble2(int a[]);

int main(){
    int data[SIZE]={26,5,81,7,63};
    printf("Before process...\n");
    show(data);
    bubble2(data);
    printf("After process...\n");
    show(data);
    system("pause");
    return 0;
}

void show(int a[]){
    for(int i=0;i<SIZE;i++){
        printf(" %d", a[i]);
    }
    printf("\n");
}

void bubble2(int a[]){
    int temp;
    int flag=0;

    for(int i=1;(i<SIZE)&&(!flag);i++){
        
        flag=1;
        for(int j=0;j<(SIZE-i);j++){
            
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
            
            
        }
        
    }
}