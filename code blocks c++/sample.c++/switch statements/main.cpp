#include <iostream>

using namespace std;

 string dayofweek(int daynum) /*creating function in function*/
 {
     string dayname;
  //instead of using 7 if,else if statements we are using switch statements

  switch(daynum)  //switching between days number with cases
  {
 case 0:
    dayname="monday";
    break;

 case 1:
     dayname="tuesday";
    break;

 case 2:
     dayname="wednesday";
     break;

 case 3:
    dayname="thursday";
    break;

 case 4:
     dayname="friday";
    break;

 case 5:
    dayname="saturday";
    break;

 case 6:
      dayname="sunday";
      break;

 default:
    dayname="invalid day";
  }

return dayname; //this is the main lead to function variable to get output printed
}
int main()
{
cout << dayofweek(5);
return 0;
}
