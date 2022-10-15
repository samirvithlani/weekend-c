// reg
// exp ->category 0 => food
// 
#include<stdio.h>

struct user {

    int id;
    char name[20];
    char email[20];
    char password[20];

    struct expence{
        int id;
        char name[20];
        int amount;
        int category;
    }e[2];
  
}u;

void addExpense(){

  //  struct user u;
    //struct user.expence e[2];
    printf("\n enter user id");
    scanf("%d",&u.id);
    printf("\n enter user name");
    gets(u.name);
    _flushall();
    printf("\n enter user email");
    gets(u.email);
    _flushall();
    printf("\n enter user password");
        gets(u.password);
    _flushall();

    for(int j=0;j<2;j++){
        printf("\n enter expence id");
        scanf("%d",&u.e[j].id);
        printf("\n enter expence name");
        gets(u.e[j].name);
        _flushall();
        printf("\n enter expence amount");
        scanf("%d",&u.e[j].amount);
        printf("\n enter expence category");
        scanf("%d",&u.e[j].category);
    }
    



}

void printexpenses(){

    //struct user u;
    //struct user.expence e[2];
    printf("\n user id %d",u.id);
    printf("\n username = %s",u.name);
    printf("\n email = %s",u.email);
    printf("\n password = %s",u.password);

    for(int j=0;j<2;j++){
        printf("\n expence id %d",u.e[j].id);
        printf("\n expence name = %s",u.e[j].name);
        printf("\n expence amount = %d",u.e[j].amount);
        printf("\n expence category = %d",u.e[j].category);
    }







}

void main(){


    addExpense();
    printexpenses();


}