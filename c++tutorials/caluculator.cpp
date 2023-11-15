#include <iostream>

using namespace std;

int main()
{ 
int num1,num2,result;
char op;

cout <<"enter the number 1:";
cin >> num1;

cout <<"enter the operator:2";
cin >> op;

cout <<"enter the number 2:";
cin >> num2;               //cin scanf is greater than side inside

if(op=='+')
result=num1 +num2;

else if(op=='-')
result=num1-num2;

else if(op=='*')
result=num1*num2;

else if(op=='/')
result =num1/num2;

else 
cout <<"print operator given is invalid";

cout <<result;

return 0;
}


