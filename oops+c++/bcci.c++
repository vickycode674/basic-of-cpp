#include <iostream>
using namespace std;
class Cricket{
public :
int runs;
string name;
int innings;
Cricket(int r,string n,int inn){
runs=r;
name=n;
innings=inn;
}
void display(){
cout<<"Jersey Num:"<<runs<<endl;
cout<<"Name of the Player:"<<name<<endl;
cout<<"No of Innings Played:"<<innings<<endl;
}
};
int main()
{
int runs,innings;
string name;
cin>>runs>>name>>innings;
cout<<innings;
Cricket cricklib1=Cricket(runs,name,innings);
cricklib1.display();

	return 0;
}