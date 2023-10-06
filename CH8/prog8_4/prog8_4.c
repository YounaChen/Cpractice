#include<stdio.h>
#include<stdlib.h>

void display(char,int);

int main(void){
    int n;
    int ch;
    printf("請輸入欲列印的字元:");
    scanf(" %c", &ch);
    printf("請輸入要印出幾個字元:");
    scanf(" %d", &n);
    display(ch,n);
    system("pause");
    return 0;

}

void display(char c, int times){
    int i;
    for(i=1;i<=times;i++){
        printf("%c", c);
    }
    printf("\n");

    return;
}
