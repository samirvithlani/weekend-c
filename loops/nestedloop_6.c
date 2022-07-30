#include<stdio.h>

void main(){

    int i,j,cnt=0;
    for(i=1;i<=5;i++){ //1 //2 //3//4 //5
    cnt++;
        for(j=1;j<=i;j++){

            //1
            //23
            //456
            //78910
            //1112131415

            printf(" %d",cnt);

        }
        printf("\n");
    }

}
