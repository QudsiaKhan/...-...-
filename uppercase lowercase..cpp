#include <iostream>//header file 
using namespace std;//library file 

int main()//main function 
{//opening curly bracket 
char ch;//declare a variable 
cout<<"Enter a character: ";//to print 
cin>>ch;//to get input from user 

if(ch>='a'&&ch<='z')//condition 
{
cout<<"The character is a lowercase."<<endl;//to print the result 
}
else if (ch>='A'&&ch<='Z')//condition 
{
cout<<"The character is an uppercase."<<endl;//to print the result 
}
else//condition 
{
cout << "The character is not an alphabet."<<endl;//to print the result 
}
  return 0;//closing main function 
}//closing curly bracket 