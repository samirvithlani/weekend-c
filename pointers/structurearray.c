#include<stdio.h>
#include<stdbool.h>

struct employee{

    int eId;
    char eName[20];
    float eSalary;
    bool status;

};

void main(){

    struct employee e[3];
    for(int i=0;i<=2;i++){


    printf("\n enter employee Id");
    scanf("%d",&e[i].eId);
    _flushall();
    printf("\n enter employee Name");
    gets(e[i].eName);
    _flushall();
    printf("\n enter employee salary");
    scanf("%f",&e[i].eSalary);
    printf("\n enter employee status");
    scanf("%d",&e[i].status);
    }
    for(int i=0;i<=2;i++){

        printf("\n name of employee =%s",e[i].eName);
        printf("\n id of employee =%d",e[i].eId);
        printf("\n salary of employee =%f",e[i].eSalary);
        printf("\n status of employee =%d",e[i].status);
    }


}
