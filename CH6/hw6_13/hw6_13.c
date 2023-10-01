#include<stdio.h>
#include<stdlib.h>

int main(void){
    int month;

    printf("輸入1個月份(數字):");
    scanf(" %d", &month);

    if(month>=3 && month <=5){
        printf("%d月是春季\n", month);
    }
    else if(month>=6 && month <=8){
        printf("%d月是夏季\n", month);
    }
    else if(month>=9 && month <=11){
        printf("%d月是秋季\n", month);
    }
    else if(month==12 || month ==1 || month ==2){
        printf("%d月是冬季\n", month);
    }
    else{
        printf("error number!!!\n");
    }


    system("pause");
    return 0;
}
