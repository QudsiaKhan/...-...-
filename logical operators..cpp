#include<iostream>
using namespace std;

int main()//This is main function.
{//This is opening bracket 
int x=5,y=6;//Declaring and assigning a value.
    cout<<(x>3&&y<6);//Logical operator AND
    cout<<(x>3||y<6);//Logical operator OR
    cout<<!(x>3&&y<6);//Logical operator NAND
    cout<<!(x>3||y<6);//Logical operator NOR
    return 0;
}//This is closing brackets