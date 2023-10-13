#include<stdlib.h>
#include<stdio.h>

int main(void){

    int A[5]={74,48,30,17,62};
    int i,min,max;
    min=max=A[0];

    for(i=0;i<5;i++){
        if(A[i]>max)
            max=A[i];
        if(A[i]<min)
            min=A[i];
    }

    printf("陣列裡元素最大的值為:%d\n", max);
    printf("陣列裡元素最小的值為:%d\n", min);

    system("pause");
    return 0;
}
