#include <iostream>

using namespace std;

class book
{
public:             //classes used for creating a new convoent data type
string title;
string author;
int pages;


book()     //non avilable books
{
title="no title";
author="no author";
pages=0;
}

 book(string ntitle,string nauthor,int npages)  //already provivding functions are very convrient
{
    title=ntitle;
    author=nauthor;
    pages=npages;
}
bool great()     //object classes made for many daily works and it make easy to find out for large things
{
if(pages>=500)   
return true;

else
return false;
}

};    //functions baga vinpadeyperuavudhhi

int main()                  //constructers made objects easy to use easily in less line in the form of functions
                                               
{
book book1("the secret","bohmedin rospahady",500);
book book2("the pair of love","ranveer",576);
book book3;

cout << book1.great();

return 0;

}