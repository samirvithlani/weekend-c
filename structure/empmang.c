/// employees ,

#include<stdio.h>
struct employee{
    int id;
    char name[30];
    float sal;

    //int add[char][char]
    struct empadd{
        int pincode;
        char city[30];

    }add;

};

void getEmployeeDetails(){

    struct employee emp[3];
    //printf("\n %d",emp.empadd.city);
    //struct emp.empadd add;
    for(int i=0;i<3;i++){
    printf("\n enter employee id");
    scanf("%d",&emp[i].id);
    _flushall();
    printf("\n enter employee name");
    gets(emp[i].name);
    _flushall();
    printf("\n enter employee salary");
    scanf("%f",&emp[i].sal);

    printf("\n enter %s address detail",emp[i].name);
    _flushall();
    printf("\n enter %s's city",emp[i].name);
    gets(emp[i].add.city);
    _flushall();
    printf("\n enter %s's pincode",emp[i].add.city);
    scanf("%d",&emp[i].add.pincode);

    }
}
void displayEmpData(){

    struct employee emp[3];
//    struct emp.empadd add;
for(int i=0;i<3;i++){
    printf("\n employee name = %s",emp[i].name);
    printf("\n employee id = %d",emp[i].id);
    printf("\n employee salary =%f",emp[i].sal);

    printf("\n\n\t address of %s",emp[i].name);
    printf("\n\t city =%s ",emp[i].add.city);
    printf("\n\t pincode =%d",emp[i].add.pincode);
}
}
void main(){


    getEmployeeDetails();
    displayEmpData();





}
