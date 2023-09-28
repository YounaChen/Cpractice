#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i=0, sum=0;
    start: /* start ╪пер */
         i++;
         sum+=1;
         printf("%d",i);
         if(i<10){
            printf("+");
            goto start;
         }
         printf("=%d\n", sum);

    system("pause");
    return 0;
}
