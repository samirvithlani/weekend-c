#include<stdio.h>

void print(int no){

    int sum =0;
    if(no!=11){

        print(no+1);


    }
    else{

        return;
    }

    printf("\n no = %d",no);


}
void main(){


    print(1);
}
