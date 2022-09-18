#include<stdio.h>

/*
    increment decrement -->
    //unery operator -> ++a a = 10 = 11 --a 11 10
    //pre increment and post increment
    ///++a, a++,--a,a--

*/
void main(){

    int a=10,ans=0,ans1=0,ans2=0;
    ///a = 10
    ///59,59,59,59,92

         ///10 + 11
    //ans = a++ + a;
    /// 10 + 11 = 21
    //ans = a + a++;
    ///  10 + 11
    //ans = a++ + a++;
    ///   10 + 11 + 12 =
    //ans = a++ + a++ + a;
    ///    10 + 11 =21
    ///ans = a++ + a++;
    ///  11 + 12
    ///ans = ++a + a++;
    ///   10 + 12
    ///   10 + 11
    ///   10 + 11
    ///ans = a++ + a++;
    ///    12
    ///ans1 = a++;

    ///   12 + 12 + 12 = 36
    ///ans = ++a + ++a + a++;
    ///  13 +  15 + 15  =43
    ///ans1 = a++ + ++a +a;

    /// 12 + 12 + 12 + 14 + 14 +15 79
    ///ans = ++a + ++a + a++ + ++a + a++ +a; ///79,78
    /// 17 + 17  + 17 + 19 70
    ///ans1 = ++a +  ++a + a++ + ++a;///68,70,69

    ///   12 + 12 +  13 + 13
    //ans = ++a + ++a + ++a + a++; //50,
    ///14
       /// 14 +15 +
    //ans1 = a++ + a + ++a + ++a + a++ + a + ++a;
        ///10 + 12 + 13 + 14+14+14+15

    ans = a++ + ++a + ++a + ++a + a + a + ++a ;
    ans1 = a++ + a++ + ++a + ++a + ++a;



    /// 12
   /// ans1 = a;




    ///11
    printf("\n ans = %d",ans);
    printf("\n ans1 = %d",ans1);
    printf("\n ans2 = %d",ans2);
    ///10
    printf("\n a = %d",a);




}
