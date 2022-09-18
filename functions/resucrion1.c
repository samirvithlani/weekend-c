#include<stdio.h>

void print(int no){

    //10 true
    //9 true
    //8
    if(no!=0){
        //printf("\n if");
        print(no-1);
        //9
    }
    else{
        printf("\n if");
        return;
    }

    //printf("\n out side of if else");
    printf("\n %d",no);


}

void main(){

    //printf("\n main method before print");
    print(10);
    //printf("\n main method after print");


}
