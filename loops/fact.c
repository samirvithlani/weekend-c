#include<stdio.h>

void main(){

    int no,ans=1,i;
    printf("\n enter no");
    scanf("%d",&no);

    // 5 = 120 5 * 4 3 * 2 *1
    // 1 2 3 4 5  =120
    //

    for(i=1;i<=no;i++){

        //1 =   1 * 1
        //2 =   1 * 2
        // 6 = 2 * 3
        // 24 = 6 * 4
        // 120  = 24 * 5
        ans = ans *i;
    }
    printf("\n fac = %d",ans);

}
