#include <iostream>

using namespace std;

//********************************************factorial******************************************************//
/*
int factorial(int n)
{
if(n<=1) {   //condition for 0,1! factorials

return 1;
}                     //recurssion takes place

return n * factorial(n-1);  //the function definition

}


int main()
{
 int a;  //actual parameter

cout<<"enter the value of a=";
cin>>a;


cout<<"the factorial of " <<a<<" is the value="<<factorial(a)<<endl;


return 0;

*/
////////////////////////*********************fibonacci series***************************/**************************/

//---->fibonacci series=112358{sum of first two =3rd}

int fibbonaci(int n)
{
   if(n<2)
   {
    return 1;
   }
    return fibbonaci(n-1) + fibbonaci(n-2); //sum of 2nd last and third last givs you the value
}

int main()
{int a;
cout<<"enter a number:";
cin>>a;

cout<<"the fiboonacci series of "<<a<< "at position value is "<<fibbonaci(a)<<endl;

return 0;
}

//6th position sequence={1,1,2,3,5,8,,13}//therefore 13 is the masssyyyy
