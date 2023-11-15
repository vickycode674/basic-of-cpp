#include <iostream>
using namespace std;

class distance{
int kms;
int meters;

//friend float convert_data(distance &d);
friend distance convert_data(distance d1,distance d2);
public :
void get_data()
{
 cout<<"\n Enter kms and meteres : ";
 cin>>kms>>meters;
} 
};

distance distance :: convert_data(distance d1,distance d2){

}
int main()
{

}