#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;

    printf("input an integer:");
    scanf(" %d", &num);

    if(num%2==0)
        printf("%d�O����\n", num);

    if(num%2!=0)
        printf("%d�O�_��\n", num);



    system("pause");
    return 0;
}
