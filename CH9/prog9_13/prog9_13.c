#include<stdio.h>
#include<stdlib.h>

void func(int);

int main(){

    int a=13;
    printf("��main()�̡Aa=%d ,a����}=%p\n", a, &a);
    func(a);

    system("pause");
    return 0;
}

void func(int a){
    printf("��func()�̡Aa=%d, a����}=%p\n", a, &a);
}
