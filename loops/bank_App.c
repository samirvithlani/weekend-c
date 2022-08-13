#include<stdio.h>
//open ac
//with
//depo
//check bal

void main(){

        int choice,opbal=0,minopbal =10000,netamount=0,flag=0,damount=0;
        int wamount=0;
        do{
        printf("\n Welcome to  ABCD BANK  ");
        printf("\n Press 1 for Opening Account");
        printf("\n Press 2 for Deposit");
        printf("\n Press 3 for withdraw ");
        printf("\n Press 4 for Check balance");
        printf("\n Press 5 for exit: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
                    if(flag==0){
                    printf("\n welcome to open ac function");
                    do{
                        printf("\n enter Amount to open ac *10000 ");
                        scanf("%d",&opbal);

                    }while(opbal<minopbal);

                    //added opba to net amount
                    netamount = netamount + opbal;
                    printf("\n account opening process has been done succefull");
                    printf("\n Final balance after opening account =%d ",netamount);
                        flag=1;
                    }
                    else{
                        printf("\n Account is already exist !!");
                    }

        break; //case 1 Over
        case 2:
                if(flag==1){

                       printf("\n enter amount to deposi (max 100000)");
                       scanf("%d",&damount);
                       if(damount <100000){

                            netamount = netamount + damount;
                            printf("\n deposit successful final amount in your account = %d",netamount);
                       }
                       else{
                        printf("\n you are not eligible for this Transaction !!");
                       }


                }
                else{
                    printf("\n account is not exist !!! press 1 for open ac:");
                }

        break; //case 2 over...

        case 3:
                    if(flag==1){
                    printf("\n Welcome to withdraw process");
                    printf("\n enter amount to withdraw");
                    scanf("%d",&wamount);
                    if(wamount <= netamount){

                        netamount = netamount - wamount;
                        if(netamount < 10000){
                            printf("\n your min balance is not sufficient please add more money !!! ");
                        }
                        printf("\n withdraw process done !!");
                        printf("\n after withdraw amount  =%d",netamount);
                    }
                    else{
                        printf("Not sufficient Balance to withdraw...");
                    }
                    }
                    else{
                        printf("\n Account does not exist !!");
                    }
        break;

        case 4:
                    if(flag==1){
                    printf("\n welcome to check balance process !! ");
                    printf("\n Final amount in account = %d",netamount);
                    }else{
                        printf("\n account is not exist !!!");
                        printf("\n press 1 for opening Account :");
                    }

            break;

        } // switch over...
        }while(choice!=5);//while over





}
