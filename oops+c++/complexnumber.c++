#include <iostream>
using namespace std;

class complex{
int a;   //private is taken as default access specifier dude..
int b;

public:
void getdata(int v1,int v2){
a=v1;  
b=v2;  //we have to specify the a and b value accoridng to fucntion its a programming procedure
}

void set_data(complex o1,complex o2){ //directly take the object and help to convert it
a=o1.a+o2.a; //addition of add in first and second //each object has their own a(real) and b(complex values);
b=o1.b +o2.b;
}
void display(){
cout<<"the value of complex number"<<a<<"+"<<b<<"i"<<endl;
}
};
int main()
{
complex o1,o2,o3;  //here each object refer it own kind of things and made it access..
o1.getdata(2,3);
o1.display();

o2.getdata(2,5);
o2.display();

o3.set_data(o1,o2); //passing  object as reference into  a function
o3.display();
return 0;
}