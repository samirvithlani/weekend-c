#include<stdio.h>
//lcm
//hcf
//fibonaci series -> 0 1  1  2 3 5  8 13

void main(){

    int base,pow,ans=1;
    printf("\n enter base");
    scanf("%d",&base);
    printf("\n enter pow");
    scanf("%d",&pow);

    for(int i=1;i<=pow;i++){
        //1  = 2 * 1 ans = 2
        // 2  = 2  * 2 = 4
        // 4 = 4 * 2 8

        ans = base * ans;
    }

    printf("\n power = %d",ans);

}
