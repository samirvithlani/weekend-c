#include<stdio.h>

void main(){

    int i,j,no,a[3][3],flag=0,cnt=0;

    printf("\n enter elements of an array");
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            scanf("%d",&a[i][j]);
        }
    }

    printf("\n enter no to search ::");
    scanf("%d",&no);


    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            if(a[i][j]==no){
                flag=1;
                cnt = i+j+1;
            }

        }
    }

    if(flag==1){
        printf("\n no is available at position %d",cnt);
    }
    else{
        printf("\n no is not available ");
    }



}
