#include<stdio.h>

void main(){

    int  i,j;
    for(i=1;i<=5;i++){
        //1 --> T
        //2
        //3
        for(j=5;j>=i;j--){

            printf("*"); //*****
                         //****

        }
        printf("\n");
    }

}
