#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num;
    int ans;

    printf("input an integer:");
    scanf(" %d", &num);
    ans = num;
    if(num<0)
        ans = -num;

    printf("%d������ȬO%d\n", num, ans);

    system("pause");
    return 0;
}

