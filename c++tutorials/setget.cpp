#include <iostream>

using namespace std;
//creating whoel common datatype which can be used in whole programming

class movie
{
  private:
   string rating;   //thses will besafe and no one willl be abe to acces it

  public:             //classes used for creating a new convoent data type
   string title;
   string director;

movie(string mtitle,string mdirector,string mrating)
{
title=mtitle;
director=mdirector;
setrating(mrating);
}

void setrating(string mrating)               //ENTERING ONLY PROPER AND KEEPING AWAY FROM UNNESCEARY
{
 if(mrating=="U"||mrating=="u/a"||mrating=="A" ||mrating=="R") 
 {
rating=mrating;
 }
 else
 rating="NA";
}

string getrating()      //GET FUNCTIONS
{
  return rating;
}

};

int main()                  //REAL FUNCTION DEFINITION
{
movie akhanda("akhanda","boyapati","U/A");  //movie name(all respective fields)

cout << akhanda.getrating();

return 0;
}