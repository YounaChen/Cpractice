#include<stdio.h>
#include<stdlib.h>


int main(void){
    int arr[5]={2,3,1,7,9};
    int num=0;
    
    printf("int佔了%d個位元組\n", sizeof(num));
    printf("陣列arr佔了%d個位元組\n", sizeof(arr));
    
    system("pause");
    return 0;
}