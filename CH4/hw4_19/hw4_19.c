#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num;
    char ch;

    printf("�п�J�@�Ӿ��: ");
    scanf("%d", &num);
    fflush(stdin);

    printf("�п�J�@�Ӧr��: ");
    ch = getchar();
    printf("num=%d, ASCII of ch=%d\n", num, ch);
    system("pause");

    return 0;
}
