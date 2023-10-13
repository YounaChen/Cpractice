#include<stdlib.h>
#include<stdio.h>

void kitty(int);

int main(void){
    int k;

    printf("Input an integer k:");
    scanf(" %d", &k);
    kitty(k);
    system("pause");
    return 0;
}


void kitty(int k){

    for(int i=1;i<=k;i++){
        printf("Hello Kitty\n");

    }

}
