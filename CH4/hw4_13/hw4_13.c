#include<stdio.h>
#include<stdlib.h>

int main(void){

    char str[100];

    printf("Please input a string(10words, not include space):");
    scanf(" %s", str);

    /*(a)���޸��N�r��]��*/
    printf("\"%s\"\n", str);
    /*(b)�ϱ׽u\�N�r��]��A�L�X�ɪ���e��20*/
    printf("\\%20s\\\n", str);
    /*(c)�ϱ׽u\�N�r��]��A�L�X�ɪ���e��20�A�a���L�X*/
    printf("\\%-20s\\\n", str);


    return 0;
}

