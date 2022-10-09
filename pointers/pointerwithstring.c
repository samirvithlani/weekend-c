#include<stdio.h>
#include<stdbool.h>

struct employee{

    int eId;
    char eName[20];
    float eSalary;
    bool status;

}e;

void main(){

    //struct employee e;
    printf("\n enter employee Id");
    scanf("%d",&e.eId);
    _flushall();
    printf("\n enter employee Name");
    gets(e.eName);
    _flushall();
    printf("\n enter employee salary");
    scanf("%f",&e.eSalary);
    printf("\n enter employee status");
    scanf("%d",&e.status);

    printf("\n name of employee =%s",e.eName);
    printf("\n id of employee =%d",e.eId);
    printf("\n salary of employee =%f",e.eSalary);
    printf("\n status of employee =%d",e.status);


}
