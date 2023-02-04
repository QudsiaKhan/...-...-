#include<iostream>//header file 
using namespace std;//library file 

int main()//main function 
{//opening curly bracket 
    int time;//declare a data type of integer
 cout<<"Enter your time";//to print a statement 
 cin>>time;//to give input from user 
 if(time<12)//condition 
{
 cout<<"Good morning";//to print a statement 
}
 else if(time<16)//condition 
{
 cout<<"Good afternoon";//to print a statement 
}
 else if(time<20)//condition 
{
 cout<<"Good evening";//to print a statement 
}
 else//condition 
{
 cout<<"Good night";//to print a statement 
}
    return 0;//closing main function 
}//closing curly bracket 