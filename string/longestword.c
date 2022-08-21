#include<stdio.h>
#include<string.h>

int main(){

    char str[30];
    char lstr[30];

    int len,i,max_wlen =0,wlen=0,index=0;

    printf("\n enter string ::");
    gets(str);
    //hi this is Ahmedabad
    _flushall();
    len = strlen(str);
    for(i=0;str[i]!='/0';i++){
        //
        if(str[i]== 32){
            printf("\n wlen = %d",wlen);
            wlen++;
            continue;
        }

    }

