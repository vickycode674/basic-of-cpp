#include <iostream>

using namespace std;

class student{      //creating class

private:
int a;
string b;

public:
int c,d;   //public data can be published openly and without saftey

void setdata(int a,string b);  //declaring private data secretly

void getdata(){                //couting the entered data
cout<<"the value of a="<<a<<endl;
cout<<"the value of b="<<b<<endl;
cout<<"the value of c="<<c<<endl;
cout<<"the value of d="<<d<<endl;
}

};

void student :: setdata(int a1,string b1) //setting reference variable for shortcut
{
a=a1;    
b=b1;
}

int main(){
    student vivek;          //main logic begin from here
    vivek.c=35;
    vivek.d=95;
    vivek.setdata(21,"ch vivek sai");
    vivek.getdata();
    return 0;
}


/*

1.)creating class
2.)introducing private vs public
3.)seting data by using refernece variables
4.)printf like cout bu geting data
5.)void creation to private data
6.)creating int main () to assign remaining and lof=gic of the compelete structure
7.)inserting data into private 
8.)and then printing all

*/