//ASSCI VALUES -> A -Z a-z  A 65 +26 z  a 97 + 26 space  32

#include<stdio.h>


void main(){

    int a = 65;
    char x = 'a';
    printf("\n a = %c",a);
    printf("\n x =%d",x);

    for(int i=1;i<=150;i++){

        printf("\n asci code = %d value = %c",i,i);
    }

}
