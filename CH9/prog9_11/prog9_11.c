#include<stdlib.h>
#include<stdio.h>

int main(void){

    int A[2][4][3]={{{21,32,65},
                    {78,94,76},
                    {79,44,65},
                    {89,54,73}},

                    {{32,56,89},
                    {78,94,76},
                    {79,44,65},
                    {89,54,73}}};

    int max= A[0][0][0];

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<=3;k++){
                if(max<A[i][j][k]){
                    max = A[i][j][k];
                }

            }
        }
    }

    printf("max=%d\n", max);

    system("pause");
    return 0;
}
