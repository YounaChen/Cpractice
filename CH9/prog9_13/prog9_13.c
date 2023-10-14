#include<stdio.h>
#include<stdlib.h>

void func(int);

int main(){

    int a=13;
    printf("於main()裡，a=%d ,a的位址=%p\n", a, &a);
    func(a);

    system("pause");
    return 0;
}

void func(int a){
    printf("於func()裡，a=%d, a的位址=%p\n", a, &a);
}
