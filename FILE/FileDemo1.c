#include<stdio.h>

void main(){

    //FILE OBJECT / reference
    //macro of file FILE
    FILE *fp;
    FILE *fp1;
    //ope a file...
    //modes
    //r - read
    //w - write
    //a - append
    //r+ - read and write
    //w+ - write and read
    // w --> if file is not present it will create a file
    fp = fopen("C:\\Users\\Samir\\Desktop\\files\\abc.txt","w");
    //
    //write to file
    fprintf(fp,"\n hello world");
    //close file
    fclose(fp);




}