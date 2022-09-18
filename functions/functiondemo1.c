///function : def : -function is a collection of statements
///Type of function 2 type of  built in. UDF
/// 4 type of function
/// with return type with argument/ prams int sum(int a);
/// with return type without argument
/// without return type with argument
/// without return type without argument
/// signature -> reuturn type name params

///use -> ---------------------- reusbality code...
/// read
///
//without return type without arguments / params

void print()
{
    printf("\n hello this is print function....");

}
void sum(int a,int b){
    ///local variable

    int c = a + b;
    printf("\n sum = %d",c);

}

void printing(char name[30]){

    printf("\n printing %s",name);
}
///create calculator using switch case with function....

void main(){

    int x,y;
    print();
    printf("\n enter no 1 :");
    scanf("%d",&x);
    printf("\n enter no 2 :");
    scanf("%d",&y);
    sum(x,y);
    printing("jay");



}




