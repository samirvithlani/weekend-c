#include<stdio.h>

int deposit(int balance,int amt){

    int prebalance = balance;
    balance = balance + amt;

    if(balance>prebalance){

        return 1;
    }

    return 0;

}




void main(){

    int amt,balance = 1000;
    int choice;
    printf("\n enter choice");

    printf("\n enter 1 for deposit");
    scanf("%d",&choice);
    switch(choice){

    case 1:
            printf("\n enter deposit amount;");
            scanf("%d",&amt);
            int x = deposit(balance,amt);
            if(x==1){
                printf("\n amount deposited..");
            }
            else{
                printf("\n something went wrong !!");

            }
        break;

    }


}
