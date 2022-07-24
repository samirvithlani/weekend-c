#include<stdio.h>

//2750 2000 500 200 50
//2750.50 200 500 200 50.50 remaining
void main(){

        int no;
        int nt2000=0,nt500=0,nt200=0,nt100=0,nt50=0,nt20=0,nt10=0,c5=0,c2=0,c1=0;
        printf("\n enter amount ::");
        scanf("%d",&no);

        while(no>=2000){

            no = no-2000;
            nt2000++;
        }
        while(no>=500){

            no = no-500;
            nt500++;
        }
        while(no>=200){

            no = no-200;
            nt200++;
        }
        while(no>=100){

            no = no-100;
            nt100++;
        }

        while(no>=50){

            no = no-50;
            nt50++;
        }
        while(no>=20){

            no = no-20;
            nt20++;
        }
        while(no>=10){

            no = no-10;
            nt10++;
        }
        while(no>=5){

            no = no-5;
            c5++;
        }
        while(no>=2){

            no = no-2;
            c2++;
        }
        while(no>=1){

            no = no-1;
            c1++;
        }

        printf("\n you will get 2000 Note = %d",nt2000);
        printf("\n you will get 500 Note = %d",nt500);
        printf("\n you will get 200 Note = %d",nt200);
        printf("\n you will get 100 Note = %d",nt100);



}
