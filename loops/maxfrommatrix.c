#include<stdio.h>

int main(){


    int i,j,a[3][3],max;

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            scanf("%d",&a[i][j]);
        }
    }

    max = a[0][0];// max = 1

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            if(a[i][j]>max){
                max = a[i][j];
            }
        }
    }
    printf("\n max from matrix = %d",max);




}
