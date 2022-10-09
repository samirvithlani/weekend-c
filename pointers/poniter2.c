#include<stdio.h>


void main(){

    int var;
    int *ptr;
    int **pptr;

    var = 5000;
    //address of var copy ptr
    ptr = &var;
    //pointer address copied to pptr
    pptr = &ptr;

    printf("\n value of var =%d",var);
    printf("\n value of ptr = %d",*ptr);
    printf("\n value of pptr = %d",pptr);



}
