#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int i;
    printf("argc ªº­È¬°%d\n", argc);
    for(i=0; i<argc; i++){
        printf("argc[%d]=%s\n", i, argv[i]);
    }
    return 0;
}