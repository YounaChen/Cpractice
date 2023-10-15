
#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
void show(int a[]);
void bubble(int a[]);

int main(){

    int data[SIZE]={26,5,81,7,63};

    printf("排序前...\n");
    show(data);
    bubble(data);
    printf("排序後...\n");
    show(data);


    system("pause");
    return 0;
}

void show(int a[]){
    for(int i=0;i<SIZE;i++){
        printf(" %d", a[i]);
    }
}


void bubble(int a[]){
    int i,j,temp;
    for(i=1;i<SIZE;i++){
        for(j=0;j<(SIZE-i);j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}