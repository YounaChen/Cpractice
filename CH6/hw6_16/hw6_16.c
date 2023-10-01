#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void){
    double a=3, b=-8, c=-3;
    double judge, x1, x2;

    judge = pow(b,2) - 4*a*c;

    if(judge>0){
        x1 = (-b+sqrt(judge))/(2*a);
        x2 = (-b-sqrt(judge))/(2*a);
        printf("有2個相異實根 %f %f\n", x1, x2);
    }
    else if(judge==0){
        x1 = -(b/2*a);
        printf("有2個相等實根 %f\n", x1);
    }
    else{ /* judge<0 */
        printf("沒有實根\n");
    }

    return 0;
}
