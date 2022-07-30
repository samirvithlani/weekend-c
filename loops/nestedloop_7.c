
#include<stdio.h>

void main(){

    int i,j;
    for(i=1;i<=5;i--){
            //1 //2
        //5
        for(j=5;j>=i;j--){

           printf("%d",j);//5 //4 // 3 // 2 //1
                          //5  4  3 2
                          //5 4 3
                          //5 4
                          //5
        }
        printf("\n");
    }


}
