#include<stdio.h>
#include<stdlib.h>

int main(void){

    int num1=32, num2=1024;
    float num3=12.3478f;

    printf("num1=%6d����\n", num1); /* �H %6d �榡�L�X num1 */
    printf("num2=%-6d����\n", num2); /* �H %-6d �榡�L�X num2 */
    printf("num3=%6.2f����\n", num3); /* �H %6.2f �榡�L�X num3 */

    system("pause");
    return 0;
}

