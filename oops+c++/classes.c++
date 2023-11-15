#include <iostream>
using namespace std; //pedha planey mowaa...
/*
class employee{

private : 
       int a,b,c;

public:
       int d,e;

void setData(int a1,int b1,int c1);

  void getData(){
   cout<<"the value of a="<<a<<endl;
   cout<<"the value of a="<<b<<endl;
   cout<<"the value of a="<<c<<endl;
   cout<<"the value of a="<<d<<endl;
   cout<<"the value of a="<<e<<endl;
     }

};

void employee :: setData(int a1,int b1,int c1) //using the gloabal decalared inside the main funcion
{
a=a1;
b=b1;
c=c1;
}
   
int main()
{
employee vivek;

vivek.setData(1,2,3); //we cannot acces private elements directly we have to ask function
vivek.d=24;
vivek.e=15;
vivek.getData(); //without calling printing function how can it print
return 0;
}*/

/*clases with area of rectangle*/
class rectangle{

private:
int length;
int breadth;

public:

void get_value(){
cout<<"enter the dimension of following rectangle:\n";
cin>>length>>breadth;
}

void area()
{
cout<<"Area="<<length*breadth;
}

};

int main()
{rectangle rect;
 //create a linkage to connect the created shortcut to following funcitons

rect.get_value(); //this are public member function
rect.area();

}
