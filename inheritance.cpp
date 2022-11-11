#include <iostream>

using namespace std;

//INHERTIANCE

class chef  //1stclass
{
public:
    void makechicken()
   {
   cout <<"chef makes chicken very well" << endl;
   }

   void makespecial()
    {
    cout <<"chef make parota sharwa very well" << endl;
    }
}; //ending if each class

class italianchef : public chef{      //new class will inherit the prevous class rights and honours
 public:
 void makepasta()
 {
 cout << "chef makes pasta very well";
}                                   //2nd class

}; //end of class 2


int main()
{
 chef chef1;
 chef1.makechicken();

italianchef chef2;   //class 2 has succesfully inherited fro his senior
 chef2.makespecial();
 return 0;
}

