#include<stdio.h>

int a;
int* sum(){

    //local scope
    a = 100;
    return (&a);
}

void main(){


    int *p;
    p = sum();
    printf("\n value of p =%d",*p);


}
