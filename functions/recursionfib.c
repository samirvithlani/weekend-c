#include<stdio.h>
#include<math.h>
//pow


int sumofdigit(int no){
    int x=0;
    int p;
    if(no!=0){

            printf("\n no = %d",no);
     //       x = no % 10 +sumofdigit(no/10);
            printf(" x = %d",x);
                //27 + 15
                //27 + 127 +1
                //125 +27 + 7 = 153

        return (pow(no%10, 3 )+sumofdigit(no/10));
    }
    else{
        return 0;
    }

}
void main(){

    int x = sumofdigit(153);
    printf("\n sum = %d",x);

}
