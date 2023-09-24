#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){

    char ch;

    printf("請輸入一個字元: ");
    ch = getche(); /*打出來的字會顯示在螢幕上*/
    printf(" 你輸入的字元是: %c\n", ch);


    printf("請輸入一個字元: ");
    ch = getch(); /*打出來的字不會顯示在螢幕上*/
    printf(" 你輸入的字元是: %c\n", ch);


    system("pause");

    return 0;
}

