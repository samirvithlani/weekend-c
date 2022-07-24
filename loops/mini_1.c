#include<stdio.h>

void main(){

    int choice;
    do{
    printf("\n ######### WELCOME TO CRICKET BOARD #########");
    printf("\n Press 1 for Hard:");
    printf("\n Press 2 for Easy:");
    printf("\n Press 3 for Exit:");

    scanf("%d",&choice);
    switch(choice){

    case 1:
                printf("\n Welcome to Hard Play::");
        break;

    case 2:
                printf("\n Welcome to Easy Play::");
        break;

    default:

        break;

    }//switch over..
    }//do over
    while(choice!=3);


}
