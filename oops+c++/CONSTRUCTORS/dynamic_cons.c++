//dyanmaic allocation the program to alloate the right amount of memory to data members of object during execution.
using namespace std;
#include <iostream>

class Array{
  private:
   int * arr;
   int n;

  public:
    Array()  //constructor created 
    {
      n=0;
    }
    Array(int); //created and used after some time in the 
    void show_data();
     
 };
   Array :: Array(int num){
   n=num;
   arr=new int [n]; //memory allocated for array dynamically
   cout<<"Enter the elements:\n";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   }

   void Array :: show_data(){
    for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
   }
   }

   main() {
   int size;
    cout<<"\n Enter the size of the array:";
    cin>>size;
    Array Arr(size);  //calls constucttor and allocate memory
    Arr.show_data();
   }

