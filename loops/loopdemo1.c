/*
                2 types of loops :-
    Entry control loop              Exit control loop
        for,while loop                     do while loop

*/

//for while -->
//when we know starting point and ending point ...use for ;pp[

void main(){

    int i,sum=0;
    //i=0 --> initilization part
    //i<=10 --> condition part
    //i++ --> incremrnt decrement part...
    for(i=1;i<=10;i++){

        printf("\n %d",i);
        // 0 = 0 + 1; sum =1
        //1 = 1 + 2;  sum = 3
        //3 = 3 + 3 sum =6
        //6 = 6 + 4 10
        //10 = 10 +5 15
        //15 = 15 +6 21
        // 21 = 21 + 7 28
        //28 = 28 +8 36
        //36 = 36 +9 =45
        // 45 = 45 + 10 = 55
        sum = sum + i;
        printf("\n sum = %d",sum);
    }
    printf("\n sum = %d",sum);

}
