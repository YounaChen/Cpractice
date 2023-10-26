#include<stdio.h>
#include<stdlib.h>


int main(void){
    char key;
    enum color{
        red=114,
        green=103,
        blue=98
    }shirt;

    do{
        printf("½Ð¿é¤Jr,g,b: ");
        scanf(" %c", &key);
        fflush(stdin);
    }while((key!=red)&&(key!=green)&&(key!=blue));

    shirt=key;

    switch(shirt){
        case red:
            printf("you chose red\n");
            break;
        case green:
            printf("you chose green\n");
            break;
        case blue:
            printf("you chose blue\n");
            break;
    }

    system("pause");
    return 0;

}