#include<iostream>//header file
using namespace std;//linrary file

int main()//main function 
{//opening bracket 
 int day;//declare a variable 
cout<<"Enter your day in number"<<endl;//to print a statement 
cin>>day;//to take output from user 
 
 switch (day)//switch statement 
 {//opening bracket for switch   
 case 1://block of code 
 cout<<"Monday";//to print the result 
 break;//to end case 1
 case 2://block of code 
 cout<<"Tuesday";//to print the result 
 break;//to end case 2
 case 3://block of code 
 cout<<"Wednesday";//to print the result 
 break;//to end case 3
 case 4://block of code 
 cout<<"Thursday";//to print the result 
 break;//to end case 4
 case 5://block of code 
 cout<<"Friday";//to print the result 
 break;//to end case 5
 case 6://block of code 
 cout<<"Saturday";//to print the result 
  break;//to end case 6
 case 7:// block of code
 cout<<"Sunday";//to print the result 
 break ;//to end case 7
 default://if case are not valid
 cout<<"Invalid number";//to print the result 
 break;//to end the default 
 }//closing bracket for switch 
 return 0;//ending main function 
}//closing curly bracket 
