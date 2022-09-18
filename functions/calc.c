#include<stdio.h>


void sum(int a,int b){

    int c = a + b;
    printf("\n sum =%d",c);
}
void sub(){
    int a,b,c=0;
    printf("\n enter a :");
    scanf("%d",&a);
    printf("\n enter b :");
    scanf("%d",&b);

    c =  a  - b;
    printf("\n sub = %d",c);

}
void main(){

    int no1,no2;
    printf("\n enter your choice");
    printf("\n enter 1 for sum :");
    printf("\n enter 2 for sub :");
    printf("\n enter 3 for mul :");
    printf("\n enter 4 for div :");
    int choice;
    scanf("%d",&choice);

    switch(choice){

    case 1:
            printf("\n enter no 1:");
            scanf("%d",&no1);
            printf("\n enter no 2:");
            scanf("%d",&no2);

            sum(no1,no2);
        break;
    case 2:
            sub();
        break;

    }



}
