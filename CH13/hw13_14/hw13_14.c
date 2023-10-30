#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc==2){
        char c=argv[1][0];
        printf("argv:%c   ASCII:%d\n",c, c);
    }
    system("pause");
    return 0;
}