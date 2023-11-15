#include <iostream>

using namespace std;


/*typedef struct movie{

string name; //arey pulka u can use here directly for long words
int rating;

}mov;   //here mov is typdef {changing the datatype to own and convinient datatypes};

int main()
{
 mov movie1;

movie1.name="akhanda";
movie1.rating=95;

cout <<"the movie name=" <<movie1.name <<endl;
cout <<"the rating of movie="<<movie1.rating<<endl;
*/

//************************************unions and enums****************************//
/*union money{

char car;             //here for money size is equally divded because any of three will take place but 
                            //not all
float rice;

int value;
};

int main()
{
 money m1;

m1.car='c';
m1.rice=26.4;
m1.value=95000;

 cout<<"the given data="<<m1.value<<endl; //first come first serve
 cout<<"the given data="<<m1.rice<<endl; //remaining garbage valuess
*/
/*
enum student{

int id;
string name;
};
*///******************************************ennums*********************************//

//enums are given imoprtance from 1st to last [o to end]

int main()
{
enum meals {tiffin,lunch,dinner};

cout<<tiffin<<endl;  
cout<<lunch<<endl;
cout<<dinner<<endl;

return 0;
}

