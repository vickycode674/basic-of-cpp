#include <iostream>
using namespace std;

class bmi{
public:
float bmiv;
void calculating_bmi(float w,float h){
bmiv=w/(h*h);

}
void print_bmi(){
cout<<"The Body mass index of the person="<<bmiv<<endl;
}

void bmiclassification(){
if(bmiv<18.5)
cout<<"Underweight"<<endl;
else if(bmiv>24)
cout<<"Overweight"<<endl;
else
cout<<"Normal weight"<<endl;
}
};

int main(){
bmi b1;
float weight,height;
cout<<"Enter the weight-:";
cin>>weight;
cout<<"Enter the height-:(meters)";
cin>>height;
b1.calculating_bmi(weight,height);
b1.print_bmi();
b1.bmiclassification();
system("pause>0");
}