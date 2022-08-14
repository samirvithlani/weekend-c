#include<stdio.h>

void main(){


    char name[30],q;
    int i,flag=0;
    printf("\n Enter Name ");
    gets(name);

    printf("\n enter char to search in name");
    scanf("%c",&q);


    for(i=0;name[i]!='\0';i++){

        if(name[i]==q){
            flag=1;
        }

    }
    if(flag==1){
        printf("\n char found...");
    }
    else{
        printf("\n char not found...");
    }




}
