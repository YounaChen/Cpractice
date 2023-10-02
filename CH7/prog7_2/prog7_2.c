#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i=1, count=0;

    for(i=1;i<=10000;i++){
        if(rand()%6+1==3){ /*取亂數當骰子*/
            count++;    /*擲到3點的時候+1*/
        }
    }

    printf("擲10000次骰子時，出現3點的次數是%d次\n", count);
    printf("機率為%.3f\n", (float)count/10000);

    system("pause");
    return 0;

}
