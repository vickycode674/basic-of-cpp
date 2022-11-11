#include <iostream>

using namespace std;


int sum(int a,int b);               //declaring function

/////////*******************function prototype*****************************************//

void g(); //chup chap function


int main()
{
int num1,num2;
cout <<"enter 1st number "<<endl;
cin >>num1;

cout<<"enter 2nd number"<<endl;
cin>>num2;

cout <<"the sum="<< sum(num1,num2);     //calling function
g();
return 0;              //actual paramereters
}


int sum(int a,int b)  
{                    //formal parametrs->formed with inspiration of actual paramertes
int c=a+b;              //function definition
return c;
}  

void g()       //printing out required using a function
{
cout<<"\nhello, good morning frnds";
}