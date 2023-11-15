#include <iostream>
using namespace std;

class binary {
    string s; //take the neccesary input
    public :
         void read(void);
         void chk_bin(void);
         void ones_compliment(void);
         void display();
};

void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(void){
for(int i=0;i< s.length();i++)
 {
   if(s.at(i)!='0' && s.at(i)!='1')
    {
     cout<<"it is not a binary number"<<endl;
     exit(0);
    }
 }
}

void binary :: ones_compliment(void){
for(int i=0;i< s.length();i++)
 {
   if(s.at(i)=='0'){
    s.at(i)='1';
   }
   else
   s.at(i)='0';
  }
}

void binary :: display(void){
 for(int i=0;i<s.length();i++)
 {
   cout<<s.at(i);
 }
 cout<<endl;
}



int main()
{
binary b;
b.read();
b.display();
b.chk_bin();
b.ones_compliment();
b.display();
return 0;
}