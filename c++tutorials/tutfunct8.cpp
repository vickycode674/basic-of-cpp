#include <iostream>

using namespace std;

//function overloading-->using too many functions at once

int volume(int l,int b,int h)
{
return(l*b*h);
}

int volume(double r,int h)
{
return(3.14*r*r*h);
}

int volume(int a)
{
return(a*a*a);
}


int main()
{ cout<<"the volume 0f rectangle l=1,b=2,h=3 is="<<volume(1,2,3)<<endl;
 cout<<"the volume 0f rectangle r=5,h=3 is="<<volume(5,3)<<endl;
 cout<<"the volume 0f rectangle area=3 is="<<volume(3)<<endl;

return 0;
}