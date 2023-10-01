#include<stdio.h>
#include<stdlib.h>

int main(void){
    float x;
    float y;

    printf("input (x,y)座標\n");
    printf("x:");
    scanf(" %f", &x);
    printf("y:");
    scanf(" %f", &y);

    if (x==0 && y==0){
        printf("原點\n");
    }
    else if (x==0){
        printf("y軸\n");
    }
    else if (y==0){
        printf("x軸\n");
    }
    else if(x>0 && y>0){
        printf("第一象限\n");
    }
    else if(x<0 && y>0){
        printf("第二象限\n");
    }
    else if(x<0 && y<0){
        printf("第三象限\n");
    }
    else if(x>0 && y<0){
        printf("第四象限\n");
    }

    system("pause");
    return 0;
}

