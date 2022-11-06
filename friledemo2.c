#include<stdio.h>

void main(){

    //FILE OBJECT / reference
    //macro of file FILE
    FILE *fp;

    //ope a file...
    //modes
    //r - read
    //w - write
    //a - append
    //r+ - read and write
    //w+ - write and read
    fp = fopen("demo.txt","w");

    //
    //write to file
    fprintf(fp,"hello world");
    //close file
    fclose(fp);




}
