#include <iostream>

using namespace std;

int main()
{
 int secretnum=8,guess;
 int guesscount=0;
 int guesslimit=3;
 bool outofgueses=false;

while (secretnum!=guess && !outofgueses)
{
if(guesscount <guesslimit)
 {  cout <<"enter guess:";
   cin >> guess;
   guesscount++;
 }
}

if(outofgueses)
{
 cout<<"you lost my friend!"<<endl;
}
else 
cout <<"you won buddy!";

return 0;


} 