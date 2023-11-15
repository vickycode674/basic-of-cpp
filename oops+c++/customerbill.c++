#include <iostream>
#include <iomanip>   //The iomanip is a library in C++ which helps us in manipulating the output of any C++ program
using namespace std;

class store{
    private :
    int item_code[10];
    int price[10];

    public:
    void get_data();
    void display_data();
    void calcualte_bill(int quant[]);
};

void store :: get_data(){ //scope resolution is used for calling outer most function of the in new
for(int i=0;i<3;i++)
 {
  cout<<"\n Enter the code of "<<i+1<<" th item :";
  cin>>item_code[i];
  cout<<"\n Enter the price of "<<i+1<<" th item : ";
  cin>>price[i];
  }
}

void store :: display_data()
 {
  cout<<"\n Item code \t PRICE";
   for(int i=0;i<3;i++)
   {
    cout<<"\n \t"<<item_code[i]<<setw(12)<<price[i]; //setw crates width between each data
   }
    
 }

 void store :: calcualte_bill(int quant[])
  {
  float total_amt;
  for(int i=0;i<3;i++)
    total_amt+=quant[i]*price[i];
    
    cout<<"\n ************************BILL*************************\n";

    cout<<"\n ITEM \t PRICE\t quantity\t SUB TOT \n\n";
    for(int i=0;i<3;i++)
    cout<<setw(3)<<item_code[i]<<setw(12)<<price[i]<<setw(10)<<quant[i]<<setw(15)<<quant[i]*price[i]<<"\n";
    cout<<"\n **********************************************************************";
    cout<<"\n TOTAL= "<<setw(28)<<total_amt<<"rs";
  }

int main()
 {
  store s;
  int i;
  int q[10]={0};
  s.get_data();
  s.display_data();
  cout<<"\n quantity required to buy:";
  for(i=0;i<3;i++)
  {cout<<"\nenter the quantity of "<<i+1<<"=";
  cin>>q[i];}
  s.calcualte_bill(q);//here q refer to quantity
 }
