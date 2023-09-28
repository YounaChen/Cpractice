#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num1, num2, larger;
    printf("Please input 2 integer:");
    scanf(" %d %d", &num1, &num2);

    num1>num2?(larger=num1):(larger=num2);
    printf("%d¼Æ­È¸û¤j\n", larger);

    system("pause");
    return 0;
}
