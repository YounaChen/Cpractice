#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, b;
    char oper;

    printf("�п�J�B�⦡(�Ҧp:3+2): ");
    scanf(" %d %c %d", &a, &oper, &b);

    switch(oper){
        case '+':
            printf("%d+%d=%d\n", a, b, a+b );
            break;
        case '-':
            printf("%d-%d=%d\n", a, b, a-b );
            break;
        case '*':
            printf("%d*%d=%d\n", a, b, a*b );
            break;
        case '/':
            printf("%d/%d=%.3f\n", a, b, (float)a/b );
            break;
        default:
            printf("�L�k��{���B�⦡!!\n");


    }

    system("pause");
    return 0;
}
