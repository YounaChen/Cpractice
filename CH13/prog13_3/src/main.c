#include <stdio.h>
#include<stdlib.h>
int cnt;
void count(void);

int main(void){


    printf("½Ð¿é¤Jcntªºªì­È: ");
    scanf(" %d", &cnt);

    count();
    count();

    cnt++;
    printf("cnt=%d\n", cnt);

    system("pause");
    return 0;
}


