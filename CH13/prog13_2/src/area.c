#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416

void show(double r);


double area(double r){
    show(r);
    return (PI*pow(r,2.0));
}

