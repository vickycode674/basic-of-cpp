//harshad num-:the gven output number is divided by  sum of its all digits is divisble  then it is called harshad

#include<iostream>

using namespace std;

int main()
{
int num,sum=0,rem,temp,res;
cout<<"enter a number to verfiy:"<<endl;
cin>>num;

temp=num; //rey pooks see the reference value properly plsease

while(temp>0)
{
rem=temp%10;
sum=sum+rem;
//cout<<sum;
temp=temp/10;

}
cout<<sum<<endl;
res=num%sum;
if(res==0)
{
cout<<"it harshad number";
}

else
cout<<"not an harshad number";

return 0;

}
