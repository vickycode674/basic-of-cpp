#include <iostream>
using namespace std;

int main(){
int a,b;
char op;
cout<<"Enter the values of two numbers and operator required"<<endl;
cin>>a>>b>>op;
switch(op){

case '+':
cout<<"The addition of numbers are:"<<a+b<<endl;
break;
case '-':
cout<<"The subtraction  of numbers are:"<<a-b<<endl;
break;

case '*':
cout<<"The multiplication of numbers are:"<<a*b<<endl;
break;

case '/':
cout<<"The divison of numbers are:"<<a/b<<endl;
break;

default :
cout<<"Enter a proper operator to resolve";
break;
}
}