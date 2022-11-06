#include<stdio.h>

struct users{

        int id;
        char name[30];
        float salary;

}u;
void addData(){

    //
    //struct users u;
    FILE *fp;
    fp = fopen("user.txt","a");

    printf("\n enter user id :");
    scanf("%d",&u.id);
    _flushall();
    printf("\n enter user name :");
    gets(u.name);
    _flushall();
    printf("\n enter user salary :");
    scanf("%f",&u.salary);

    //write data into file...
    fprintf(fp,"\n user id = %d",u.id);
    fprintf(fp,"\n user name = %s",u.name);
    fprintf(fp,"\n user salary =%f",u.salary);

    //close file...
    fclose(fp);
    printf("\n USER SAVED SUCCESSFULLY !!!");




}

void readData(){

    //read data from file..FILE *fp;
    FILE *fp;
    fp = fopen("user.txt","r");

    int count=0;
    char c;
    while((c=fgetc(fp)) != EOF){

        count++;
        printf("%c",c);

    }
    printf("\n count =%d",count);

    fclose(fp);

}


void main(){

    //addData();
    readData();




}
