#include<stdio.h>

//unery operator
//unery operator is used to perform unary operation on a variable.
//binary operator is used to perform binary operation on two variables.

//Arithmatic operator :- +,-,*,/,%
//assignment operator :- =,+=,-=,*=,/=,%=
//logical operator :- &&,||,!
//relational operator :- <,>,<=,>=,==,!=
//bitwise operator :- &,|,^,~
//shift operator :- <<,>>

void main(){

    int a=10,b=20,c=0;
    //a = c; 10 c= 10
    //b =a ; 20 a = 20
    //c =b ; c= 10 b =10

        //a= c; // a =0;
        //b =a; // b = 0
        //c =b; //

        c = a; // 10 c = 10
        a = b; // 20 a =20
        b = c; // b = 10

    printf("\n value of a =%d",a);
    printf("\n value of b =%d",b);

    

}