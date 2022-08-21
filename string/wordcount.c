#include<stdio.h>

void main(){

    char name[30];
    int count=0;
    printf("\n enter name ");
    gets(name);

    for(int i=0;name[i]!='\0';i++){

        if(name[i]==' '){
            count++;
        }
    }

    printf("\n space  = %d",count);
    printf("\n words = %d",count+1);


}
