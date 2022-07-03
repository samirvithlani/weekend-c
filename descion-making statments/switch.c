#include<stdio.h>

/*
    studnet marks 5 subject
    // % > 80 A+
    // % 70 80 A
    // 60 to 70 B
    // 50 to  60 V
    //  > 35 FAIL

    Name:                     schoolName:
                              rollno:
    ----------------------------------------
    SUBJECTS   total marks    obtainmarsk
    ----------------------------------------
    MATHS        100             75





    ----------------------------------------
                 500            375
                                %75 -Grade:A
    ----------------------------------------



**/

void main(){


    int choice=3;
    printf("\n enter your choice");
    scanf("%d",&choice);

    switch(choice){

        case 1:
                printf("\n inside case 1");
        break;

        case 2:
                printf("\n inside case 2");
        break;
        default:
                printf("\n invalid choice");
        break;

    }

}
