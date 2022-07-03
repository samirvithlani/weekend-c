#include<stdio.h>

void main(){

    int no;

    printf("\n enter no:");
    _flushall();
    scanf("%d",&no);

    if(no >0){
        printf("\n no is pos");
    }
    else{
        printf("\n no is neg");
    }
}