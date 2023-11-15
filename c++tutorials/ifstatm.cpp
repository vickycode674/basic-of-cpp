#include <iostream>

using namespace std;

int main()
{
bool  chvivek=false;
bool  handsome=false;  //boolean values helps to compare between two conditions clearly as  langhuage


if(chvivek && handsome)
{
cout <<"he is ch vivek and handsome";
}
else if(chvivek && !handsome)
{
cout <<"he is ch vivek but not handsome";
}

else if(!chvivek && handsome)
{
cout <<"he is not ch vivek but handsome";
}
else
cout <<"he is neiter vivek nor handsome";

return 0;
}
