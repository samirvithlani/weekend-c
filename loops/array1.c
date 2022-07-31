#include<stdio.h>

//index -> array stores data index manner, and index starts with 0
void main(){

    int i;
    //int a[5]={10,20,30,40,50};
    int a[5];
    printf("\n Please enter elements of an Array :");
    for(i=0;i<5;i++){
    printf("\n Enter %d element",i+1);
    scanf("%d",&a[i]);
    }
    /*
    scanf("%d",&a[1]);
    scanf("%d",&a[2]);
    scanf("%d",&a[3]);
    scanf("%d",&a[4]);
*/
    int sum =0;
    for(i=0;i<5;i++){
    printf("\n %d",a[i]);
    sum = sum + a[i];
    }
    printf("\n sum = %d",sum);
    /*
    printf("\n %d",a[1]);
    printf("\n %d",a[2]);
    printf("\n %d",a[3]);
    printf("\n %d",a[4]);
    */

}
