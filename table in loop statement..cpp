#include <iostream>//header file 
using namespace std;//library file
 int main()//main function 
{//opening curly bracket 
 int a,b,c;//declaring integer
 cout<<"Enter number of table";//to print the statement 
 cin>>a;//to get input from user 
 cout<<"Enter range of table";//to print the statement 
 cin>>c;//to get input from user 
 for(b=1;b<=c;++b)//for statement 
 {//opening bracket of for loop 
 cout<<a<<"*"<<b<<"="<<a*b<<endl;//to print the result 
 }//closing bracket of for loop 
 return 0;//closing main function 
}//closing curly bracket 