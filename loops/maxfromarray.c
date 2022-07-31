#include<stdio.h>

int main(){

    int a[5],max,i;
    printf("\n Please enter elements of an Array :");
    for(i=0;i<5;i++){
    printf("\n Enter %d element",i+1);
    scanf("%d",&a[i]);
    }
    //10 20 5 48 78

    max = a[0];
    //10
    //20
    //20
    //48
    //78
    for(i=1;i<5;i++){

        //1 20 > 10
        //2 5 > 20
        //3 48 > 20
        //4 78 > 48
        if(a[i]>max){

            max = a[i];
            //20
            //48
            //78
        }
    }
    printf("\n max element from araay = %d",max);





}
