#include<stdio.h>

///100,200
void swapping(int *a,int *b){

    ///100
    printf("\n inside swap value of a = %d",*a);
    ///200
    printf("\n inside swap value of b = %d",*b);
    int c;
    /// c = 100
    c = *a;
    /// a = 200
    *a = *b;
    /// b = 100
    *b = c;

    ///200
    printf("\n inside swap value of a after swap = %d",*a);
    /// 100
    printf("\n inside swap value of b after swap = %d",*b);


}

void main(){

    //local variable of main
    int a=100,b=200;

    //100
    printf("\n inside main value of a = %d",a);
    //200
    printf("\n inside main value of b = %d",b);

    ///100,200
    swapping(&a,&b);

    ///100
    printf("\n inside main value of a after swap = %d",a);
    ///200
    printf("\n inside main value of b after swap = %d",b);



}
