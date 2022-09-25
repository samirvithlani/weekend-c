#include<stdio.h>

int fac(int no){

    if(no!=0){

        return no * fac(no-1);
    }
    else{

        return 1;
    }

}
void main(){

    int x = fac(5);
    printf("\n fac =%d",x);

}
