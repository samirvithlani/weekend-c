#include<stdio.h>

int findpow(int p,int b){

    if(p!=0){

        return b * findpow(b,p-1);
    }
    else{
        return 1;
    }
}

void main(){


    int p,b,ans;
    printf("\n enter pow");
    scanf("%d",&p);
    printf("\n enter base");
    scanf("%d",&b);

    ans = findpow(p,b);
    printf("\n ans = %d",ans);

}
