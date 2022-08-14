#include<stdio.h>
#include<string.h>

void main(){


        char name[30];
        int i,count=0;
        printf("\n enter name ::");
        gets(name);

        //char array => end of char array royal'\0' null malayalam'\0'
        for(i=0;name[i]!='\0';i++){

            printf("\n name[%d] = %c",i,name[i]);
            count++;
        }

        printf("\n len of name = %d",count);

}
