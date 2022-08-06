#include<stdio.h>

int main(){

        int a[3][3],b[3][3],c[3][3];
        int i,j;
        printf("\n enter 1st matrix elements");

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){

                scanf("%d",&a[i][j]);
            }
        }
        printf("\n enter 2nd matrix elements");

        for(i=0;i<3;i++){
            for(j=0;j<3;j++){

                scanf("%d",&b[i][j]);
            }
        }



        for(i=0;i<3;i++){
            for(j=0;j<3;j++){

                c[i][j] = a[i][j] + b[i][j];
                printf(" %d ",c[i][j]);
            }
            printf("\n");
        }

}
