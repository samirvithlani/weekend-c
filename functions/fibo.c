#include<stdio.h>

int fibo(int no){

    printf("\n indide fibo no = %d",no);
    if(no==0){
        printf("\n indide if 1 no = %d",no);
        return 0;
    }
    else if(no==1){
            printf("\n indide if 2 no = %d",no);

        return 1;
    }
    else{
        printf("\n indide else = %d",no);
        return fibo(no-1) + fibo(no-2);
    }

    printf("\n stack data = %d",no);

}

void main(){

    int no=10;
    int x;
    for(int i=0;i<no;i++){


        x = fibo(i);
        printf("\n **** inside loop *** i = %d ** x = %d **",i,x);
        printf("\n x = %d",x);

    }

}
