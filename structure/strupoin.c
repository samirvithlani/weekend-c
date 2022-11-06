#include<stdio.h>

struct office{

    int id;
};


void main(){

//this operaor
    struct office of,*ptrof;
    of.id = 100;
    ptrof = &of;
    printf("\n id =%d",ptrof->id);

}

