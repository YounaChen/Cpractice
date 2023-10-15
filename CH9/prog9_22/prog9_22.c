#include<stdlib.h>
#include<stdio.h>

void toUpper(char s[]);

int main(){
    char str[15];
    
    printf("請輸入一個字串: ");
    gets(str);
    toUpper(str);
    printf("轉換成大寫後: %s\n", str);

    system("pause");
    return 0;
}

void toUpper(char s[]){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>=97 && s[i]<=122){  /*如果是小寫字母*/
            s[i]=s[i]-32; /*把小寫字母的ASCII碼減32，變成大寫*/
        } 
        i++;
    }


}
