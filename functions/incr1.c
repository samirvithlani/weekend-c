#include<stdio.h>

void main(){


    int a =10,ans=0;
    ///    12 +12 *  10/11
    ans = ++a + ++a * (a++ / a);


    printf("\n ans = %d",ans);


}
