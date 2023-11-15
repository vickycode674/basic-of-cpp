#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int n,k,i,big=0,val=0;
    cin>>n>>k;
    int arr[1000];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    if(k>n)
    cout<<"0"<<endl;
    
    else if(k==0){
    for(i=0;i<n;i++)
    val+=arr[i];
    cout<<val<<endl;
    }

    else{
    for(i=0;i<n-k;i++)
    big+=arr[i];
    cout<<big<<endl;
    }
    return 0;
}