#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc==2){
        int count = atoi(argv[1]);

        for(int i=0;i<count;i++){
            printf("Hello Kitty\n");
        }
    }
    
    


    system("pause");
    return 0;
}