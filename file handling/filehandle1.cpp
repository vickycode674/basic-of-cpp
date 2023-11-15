#include <iostream>
#include <fstream>
using namespace std;
int main(){
char arr[100];
cout<<"enter your name and age"<<endl;
cin.getline(arr,100); //these functions takes entire line as input 

ofstream myfile("xyz.txt",ios::app); //ofstream is like data type and next name is intiated by deafault file is opened
myfile<<arr; //here array is shown as output 
myfile.close(); //closing the file
cout<<"File is succesfully created"<<endl;

cout<<"READING FROM A FILE OPERATION STARTED"<<endl; //new data is readed and inserted with exisiting
char arr1[100];
ifstream obj("xyz.txt");
obj.getline(arr1,100);
cout<<"array created"<<arr1<<endl;
cout<<"File reading operation completed"<<endl;
obj.close();


return 0;
}