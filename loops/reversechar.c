#include<stdio.h>

void main(){


    char name[30],temp,copyname[30];
    int i,j,len=0;

    printf("\n enter name ");
    gets(name);

        //copyname = name;
        for(i=0;name[i]!='\0';i++){

            copyname[i] = name[i];
        }
        printf("copy name = %s",copyname);

    for(i=0;name[i]!= '\0';i++){
        len++;
    }

    j = len -1;
    //samir
    for(i=0;i<len/2;i++,j--){
            //a[i] = 1 a
            //a[j] =3  i
            //ramis
            //rimas
            temp = name[i]; //a
            name[i] = name[j];  //a[i][1]i
            name[j] = temp; //a[j][3]a

    }
    printf("\n reversed name = %s",name);

}
