
#include <iostream>

using namespace std;

int main() 
{ 
    // ***************************global vs local declaration************
/*
int c=45; //global declaration

int a=2,b=5,c; //inside declaration will be divided

c=a+b; //here will be taken of local declaration

cout<<"sum="<<c<<endl;
cout<<"the global  value of c= "<<::c;
*/

//**********************************float doubles longs literals************************************


//float num=25.5f;   //here f or F make it real
//long double num1=25.5l; //here l or L make it as real
//
////cout<<"the value of d="<<num<<endl<<"the value of double="<<num1; //[in C WE Can printf together]
//
//cout <<"the size of 25.5"<<sizeof(25.5);<<endl;
//cout <<"the size of 25.5"<<sizeof(25.5l);<<endl;  //multicursor={alt+mouse button}
//cout <<"the size of 25.5"<<sizeof(25.5f);<<endl;
//cout <<"the size of 25.5"<<sizeof(25.5);<<endl;

//****************************Reference variables***************************

// same value different variables  [ctrl+k+c]

//int a=23;
//
//int &b=a; //refernec variables
//
//cout <<"value of a="<<b;
//


//*************************************typecasting in c++ *********************//




int a=3;   //int-->float not posisible
int b=46.7;  //-->float is converted to int myan

cout<<"value of a ="<<(float)a<<endl;//float (a)
cout<<"value of b ="<<int(b);  


return 0;
}
