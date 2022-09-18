#include<stdio.h>

int main(){


    int res1=0,res2=0,a=10,b=20,c=15,d=25,res3=0;

    int x=10;

          //11 * 21 / 16 * 22 + 22 * 24
    res1 = ++a * ++b / ++c * ++b + b++ * ++b; //845,80,830,845
    res2 = ++b + ++d + ++c + c++ * ++c + ++d + d++ / a; //420,120,420,133
          //
    res3 = d++ + c++ * ++a / ++b * b++; //256,59,268,257





    printf("\n value of a = %d",a);
    printf("\n value of b = %d",b);
    printf("\n value of c = %d",c);
    printf("\n value of d = %d",d);

    printf("\n value of res1 = %d",res1);
    printf("\n value of res2 = %d",res2);
    printf("\n value of res3 = %d",res3);

}

