#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

    float radius;
    float area;

    printf("請輸入圓球體積的半徑r:");
    scanf(" %f", &radius);

    area = radius*radius*radius*3.1415*4/3;
    printf("area=%f\n", area);

    system("pause");
    return 0;
}
