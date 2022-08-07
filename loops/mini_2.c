#include<stdio.h>

void main(){

    int day,month,year;

    printf("\n Enter Data");

    do{
            printf("\n enter Day");
        scanf("%d",&day);
    }
    while(day<1 || day>30  );

    while(1){
        printf("\n enter Month");
        scanf("%d",&month);
        if(month>0 && month<13){
            break;
        }
    }
    while(1){
        printf("\n enter Year");
        scanf("%d",&year);
        if(year>=2010 && year<=2022){
            break;
        }
    }

    printf("\n %d - %d - %d ",day,month,year);

}
