#include<stdio.h>
#include<stdlib.h>

int main(void){
    int pay, give_money, return_money;
    int c1000, c500, c100, c50, c10, c5, c1;
    printf("輸入應付款的金額:");
    scanf(" %d", &pay);
    printf("輸入實際交給店員的金額:");
    scanf(" %d", &give_money);

    if(give_money<pay){
        printf("金額不足\n");
    }
    else{
        return_money = give_money - pay;
        c1000 = return_money/1000;
        return_money = return_money - 1000*c1000;

        c500 = return_money/500;
        return_money = return_money - 500*c500;

        c100 = return_money/100;
        return_money = return_money - 100*c100;

        c50 = return_money/50;
        return_money = return_money - 50*c50;

        c10 = return_money/10;
        return_money = return_money - 10*c10;

        c5 = return_money/5;
        return_money = return_money - 5*c5;

        c1 = return_money/1;
        return_money = return_money - 1*c1;

        printf("要找回的錢:\n");
        printf("1000:%d張 ,500:%d張 ,100:%d張 ,50:%d張 ,10:%d張 ,5:%d張 ,1:%d張\n", c1000, c500, c100, c50, c10, c5, c1);
    }


    system("pause");
    return 0;
}
