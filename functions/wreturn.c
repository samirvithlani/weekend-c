#include<stdio.h>

int sum(int a,int b){


    int c = a + b;
    return c;
}

float div(float a,float b){

    ///float c = a / b;
    return a / b;
}


void main(){


    int x = sum(10,20);
    printf("\n x = %d",x);
    float ans = div(1.25,5.25);
    printf("\n ans = %f",ans);
}
