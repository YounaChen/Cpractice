#include<stdio.h>
#include<stdlib.h>


int main(void){

    struct status{
        unsigned sex:1;
        unsigned marriage:1;
        unsigned age:7;
    };

    struct status tom={0,1,21};

    if(tom.sex==0){
        printf("sex: girl, ");
    }
    else{
        printf("sex: boy, ");
    }

    if(tom.marriage==0){
        printf("non married, ");
    }
    else{
        printf("married, ");
    }

    printf("%d years old\n", tom.age);
    printf("sizeof(tom)=%d\n", sizeof(tom));

    system("pause");
    return 0;
}