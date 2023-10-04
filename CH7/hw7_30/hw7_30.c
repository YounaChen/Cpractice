#include<stdio.h>
#include<stdlib.h>

int main(void){

    int input;
    int cnt=0;
    int passwd=6128;
    int i;

    for(i=1;i>0;i++){
        printf("請輸入密碼(4numbers):");
        scanf("%d", &input);
        cnt++;

        if(input==passwd){
            printf("密碼輸入正確，歡迎使用本系統!!!\n");
            break;
        }


        if(cnt==3){
            printf("密碼輸入超過3次!!!\n");
            break;
        }


    }

    system("pause");
    return 0;

}
