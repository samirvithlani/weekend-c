#include<stdio.h>

void main(){

    char c;
    char name[20];

    printf("\n enter char::");
    scanf("%c",&c);

    //
    _flushall();
    printf("\n enter name ::");
    gets(name);


    printf("\n char = %c",c);
    printf("\n name = %s",name);
}
