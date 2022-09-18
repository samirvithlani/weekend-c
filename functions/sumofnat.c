#include<stdio.h>

//123 = 6
//456 = 15
int sum(int no){

    if(no!=0){

        printf("\n inside if no = %d",no);

        return no +sum(no-1);
    }
    else{
        printf("\n inside else no = %d",no);
        return no;
    }
}
void main(){



    int x = sum(10);
    printf("\n sum = %d",x);

}
