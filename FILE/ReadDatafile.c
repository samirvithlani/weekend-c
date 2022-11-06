#include<stdio.h>


void main(){


    //FILE OBJECT / reference
    FILE *fp;
    fp = fopen("C:\\Users\\Samir\\Desktop\\files\\abc.txt","r");
    //read from file
    char ch;

    //ch  = fgetc(fp);
    //printf("%c",ch);
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);

// '\0' - null character
    


    // while((ch = fgetc(fp))!=EOF){
    //     printf("%c",ch);
    // }



}