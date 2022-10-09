#include<stdio.h>

void main(){

    //stack -> address
    int a=10,b=20;
    int *p1;
    printf("\n value of a = %d",a);
    ///printf("\n address of = %u",&a);

    //access address of a and stored into pointer p1 variable..
    //if you want to store address of any variable pointer is required...
    p1 = &a;

    *p1 = 100;

    printf("\n after man value of a = %d",a);








}
