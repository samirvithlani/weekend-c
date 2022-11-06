#include<stdio.h>

void main(){

    FILE *file;
    file = fopen("abc.txt","r");
    if(file){
        printf("file opened successfully");
        //fgetc fscanf
        char ch[1000];
        //fscanf(file,"%s",ch);
        int count=0;
        while(fscanf(file,"%s",ch) != EOF){

            //printf("%s",ch);
            puts(ch);
            count++;
        }
        printf("\n count= %d",count);
        
        fclose(file);



    }
    else{
        printf("file not opened");
    }




}