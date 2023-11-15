#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
ofstream out;     
                         /*ofstream
This data type represents the output file stream and is used to create files and to write information to files.*/
out.open("sample.txt");
out<<"This is my life my rules attitude"<<endl;
out<<"hehe\n";
out.close();

ifstream in;
in.open("sample60.txt");
string st,st2;
/*in>>st>>st2;
cout<<st<<st2<<endl;
in.close();*/

while( in.eof()==0){
    getline(in,st);
    cout<<st<<endl;
}
in.close();
return 0;
}