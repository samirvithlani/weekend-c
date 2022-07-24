#include<stdio.h>

void main(){

    //153  --> 1 125 27 -> 153
    //407 --> 4 * 4* 4 64  7 * 7*7  407
    int no,rem=0,ans=0,tempno=0;
    printf("\n enter no");
    scanf("%d",&no);
    tempno =no;

    while(no>0){

        //   153  10  => 3
        //15 % 10     => 5
        //1 % 10 1
        rem = no % 10;
        // 0 = (3 *3* 3)+0 ans = 27
        //27 = (5*5*5)+27 125 +27 152
        //152 =(1*1*1)+152 = 153
        ans = (rem*rem*rem)+ans;
        no = no / 10;
        //153 = 153 /10 15
        //15 = 15 / 10 1
           //


    }
    printf("\n ans = %d",ans);

    if(ans == tempno){
        printf("\n no is armstrong...");
    }
    else{
        printf("\n no is not armstrong...");
    }


}
