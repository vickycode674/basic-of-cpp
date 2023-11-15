#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
int t;
float sum=0;
cin>>t;

while(t--){
float a;
string name;
cin>>a>>name;
if(name=="BTC")
sum+=a*380000;
else
sum+=a;
}	
cout<<sum<<endl;
    return 0;
}
