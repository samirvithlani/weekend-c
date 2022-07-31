#include<stdio.h>

void main(){

    int a[5],max,i,temp,j;
    printf("\n Please enter elements of an Array :");
    for(i=0;i<5;i++){
    printf("\n Enter %d element",i+1);
    scanf("%d",&a[i]);
    }

    //15 45 78 5 12
    //5 45 78 15 12
    //5 15 78 45 12
    //5 12 78 45 15
    //5 12 45 78 15
    //5 12 15 78 45



    for(i=0;i<5;i++){

        for(j=i+1;j<=5;j++){


            if(a[i]>a[j]){


                temp = a[i];

                a[i] = a[j];

                a[j] = temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("\n i =%d",a[i]);
    }

}
