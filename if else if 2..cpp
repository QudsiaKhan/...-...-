#include<iostream>//header file 
using namespace std;//library file 

int main()//main function 
{//opening curly bracket 
 int x;//declare a variable 
 cout<<"Enter your marks";//to print 
 cin>>x;//to take output from user 
 if(x>90)//conditional statement 
 {
 cout<<"Your grade is A+";//to print the result
 }
 else if(x>80)//conditional statement 
 {
 cout<<"Your grade is A";//to print the result 
 }
 else if(x>70)//conditional statement 
 {
 cout<<"Your grade is B";//to print the result 
 }
 else if(x>60)//conditional statement 
 { 
 cout<<"Your grade is C";//to print the result 
 }
 else if(x>50)//conditional statement 
 {
 cout<<"Your grade is D";//to print the result 
 }
 else//conditional statement 
 { 
 cout<<"Your are fail";//to print the result 
 }
    return 0;//closing main function 
}//closing curly bracket 