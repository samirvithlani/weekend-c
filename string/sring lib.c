#include<stdio.h>
#include<string.h>


void main(){

    char name[30],firstname[30];
    int len=0;
    printf("\n enter name ");
    gets(name);

    printf("\n enter first name ");
    gets(firstname);

    len = strlen(name);
    printf("\n len of name = %d",len);

    _flushall();
    int ans = strcmp(name,firstname);
    printf("\n ans = %d",ans);
    if(ans==0){

        printf("\n both are same");
    }
    else if(ans >0){

    }

    else{
        printf("\n both are not same ");
    }




}
