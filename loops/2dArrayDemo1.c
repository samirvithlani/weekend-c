//
#include<stdio.h>

void main(){

    int a[3][3],i,j,sum=0,tsum=0;
    // 1 =0
    //i =1
    //i=2
    printf("\n please enter elemets of an array ::");
    for(i=0;i<3;i++){
    // j =0
        for(j=0;j<3;j++){
            //12 a[0][0]
            //45 a[0][1]
            //78 a[0][2]
            //101 a[1][0]
            //505 a[1][1]
            //9   a[1][2]
            //66  a[2][0]
            //96  a[2][1]
            //52  a[2][2]
            scanf("%d",&a[i][j]);
        }

    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("  %d",a[i][j]);
            sum = sum + a[i][j];
            tsum = tsum + a[i][j];

        }
        printf("=%d",sum);
        sum=0;
        printf("\n");
    }
    printf("\n total sum =%d",tsum);


}
