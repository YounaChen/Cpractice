#include <stdio.h>
#include<stdlib.h>
int cnt;
void count(void);

int main(void){


    printf("�п�Jcnt�����: ");
    scanf(" %d", &cnt);

    count();
    count();

    cnt++;
    printf("cnt=%d\n", cnt);

    system("pause");
    return 0;
}


