#include<iostream>//header file
using namespace std;//library file 

int main()//main function 
{
string a;//declare a variable 
string b;//declare a variable 
string c;//declare a variable 
cout<<"Enter your first name.";
cin>>a;//to store value in a
cout<<"Enter your last name.";
cin>>b;//to store value in b
c=a.append(b);//formula 
cout<<c;//to print the value of c 
    return 0;
}//closing curly bracket 