#include<stdlib.h>
#include<stdio.h>

void toUpper(char s[]);

int main(){
    char str[15];
    
    printf("�п�J�@�Ӧr��: ");
    gets(str);
    toUpper(str);
    printf("�ഫ���j�g��: %s\n", str);

    system("pause");
    return 0;
}

void toUpper(char s[]){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>=97 && s[i]<=122){  /*�p�G�O�p�g�r��*/
            s[i]=s[i]-32; /*��p�g�r����ASCII�X��32�A�ܦ��j�g*/
        } 
        i++;
    }


}
