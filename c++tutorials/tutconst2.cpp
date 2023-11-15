#include <iostream>
#include <iomanip>
using  namespace std;

//int a=26;

int main()
{
//**************************************constant funcion in c++************************************
//const int m=24;  //here the constant a wins myna
//
//cout <<"print the value of m="<<m<<endl;




//************************************manipulators [endl and set()]***************************************

//int a=3,b=7,c=9;
//
//cout <<"print the value of a="<<setw(4)<<a<<endl;
//cout <<"print the value of a="<<setw(4)<<b<<endl;  //setw give space between the whole word from starting
//cout <<"print the value of a="<<setw(4)<<c<<endl;


//********************************precedence********************************//

//opertaor precedence[order]  when multiple operators are there highest preference is givem
int a=4,b=6,c=1,d;
d=a*b+c-1; //(a*b)+c-1 multiplication acheives higjest oorder ofr respect
cout <<d;
return 0;  
} 
