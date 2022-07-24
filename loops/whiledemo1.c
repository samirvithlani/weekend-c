#include<stdio.h>

void main(){
/*
    rem = no % 10;
    //  123 % 10 = 3
    //  12 %10 =   2
    // 1 % 10 = 1
    sum = (sum* 10) +rem
    0 =   0 * 10 3
     3 = 3 * 10  32
     32 = 32 *10 +  1
     321



     132 *10 1320 +1
    no = no / 10
    123 = 123 / 10  = 12
    12/10 1
*/


    int i=1,no=123,sum=0,rem=0,ans=0,mul=1;
    while(no>0){

         // 0 =  453 % 10 3
         // 45 % 10       5
         // 4 % 10    =4
        rem = no % 10;
        //0 = 0 *10 +3 sum =3
        //3 = 3 *10 +5   35
        //35 35 *10 +4  350 +4 354
        ans = ans + rem;
        mul = mul * rem;

        sum = (sum*10)+rem;
        //453 = 453 /10 = 45
        //45 = 45 / 10  =  4
        //4 / 10  = 0
        no = no / 10;



    }
    printf("\n sum =%d",sum);
    printf("\n sum of digits = %d",ans);

    if(ans == mul){
        printf("\n this no is twin");
    }
    else{
        printf("\n no is not twin,..");
    }
}
