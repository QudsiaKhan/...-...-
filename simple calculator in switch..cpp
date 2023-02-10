#include <iostream>
using namespace std;
int main() 
{
double num1,num2;
char operation;

cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Enter an operator (+, -, *, /):";
cin >> operation;

 switch (operation) 
{
 case '+':
cout << num1 + num2;
 break;
 case '-':
cout << num1 - num2;
 break;
 case '*':
cout << num1 * num2;
 break;
 case '/':
cout << num1 / num2;
 break;
 default:
cout << "Invalid operator";
 break;
 }
return 0;
}