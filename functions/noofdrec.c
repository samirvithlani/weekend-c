#include<stdio.h>

int count =0;

int countdigit(int no){
//12345
//1234
//123
//12
//1
if(no!=0){

    count++;
    countdigit(no/10);//0
}
else{


    return count;

}
///count++;
//printf("\n cnt =%d",count);



}
int main(){

    int x = countdigit(12345);
    printf("\n count = %d",x);

}

