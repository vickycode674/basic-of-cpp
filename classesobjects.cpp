#include <iostream>

using namespace std;
//creating whoel common datatype which can be used in whole programming

class book
{
public:             //classes used for creating a new convoent data type
string title;
string author;
int pages;

};

int main()
{
 book book1;                //int name laga

book1.title="the secret";           //main object it will conveyed through  classes
book1.author="bhomedien rasphody";
book1.pages=264;

cout << book1.author;

return 0;
}