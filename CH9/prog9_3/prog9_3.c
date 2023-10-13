#include<stdlib.h>
#include<stdio.h>

int main(void){
    double data[4];
    printf("陣列元素所占的位元組:%d\n", sizeof(data[0]));
    printf("整個陣列所佔的位元組:%d\n", sizeof(data));
    printf("陣列元素的個數:%d\n", sizeof(data)/sizeof(double));

    system("pause");
    return 0;
}
