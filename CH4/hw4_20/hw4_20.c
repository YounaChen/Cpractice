#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){

    char ch;

    printf("�п�J�@�Ӧr��: ");
    ch = getche(); /*���X�Ӫ��r�|��ܦb�ù��W*/
    printf(" �A��J���r���O:");
    putchar(ch);
    putchar('\n');


    printf("�п�J�@�Ӧr��: ");
    ch = getch(); /*���X�Ӫ��r���|��ܦb�ù��W*/
    printf(" �A��J���r���O:");
    putchar(ch);
    putchar('\n');

    system("pause");

    return 0;
}
