#include<stdio.h>

void main(){

    int a[]={10,20,30,40,50};
    int *b[5];

    //???
    //b[0] = &a;

    printf("\n add of a = %u",&a);


    for(int i=0;i<=4;i++){

        printf("\n i = %d add of i = %u",a[i],&a[i]);
    }


}
