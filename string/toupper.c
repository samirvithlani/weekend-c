#include<stdio.h>
#include<string.h>

void main(){

//hello this is my system
//system is longest word ::::
        char name[30];
        int i;
        printf("\n enter name");
        gets(name);

        for(i=0;name[i]!='\0';i++){

                //AKASH
                if(name[i]>=97 && name[i]<= 121){


                    name[i] = name[i] - 32;
                }

        }
        printf("\n name = %s",name);

}
