#include<stdlib.h>
#include<stdio.h>

#define ROW 4
#define COL 3
void search(int a[][COL], int b[]);

int main(){
    int a[ROW][COL]={ {26,5,7},
                    {10,3,47},
                    {6,76,8},
                    {40,4,32}};
    int i,j,b[2];
    printf("二維陣列內的元素:\n");

    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            printf("%02d ", a[i][j]);
        }
        printf("\n");
    }

    search(a,b);

    printf("陣列的最大值=%02d\n", b[0]);
    printf("陣列的最小值=%02d\n", b[1]);

    system("pause");
    return 0;
}



void search(int arr[][COL], int p[]){
    
    p[0]=p[1]=arr[0][0];

    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            if(arr[i][j]>p[0]){
                p[0]=arr[i][j];
            }
            if(arr[i][j]<p[1]){
                p[1]=arr[i][j];
            }
        }
    }
}