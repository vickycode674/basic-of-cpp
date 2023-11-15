#include <iostream>

using namespace std;

int main()
{                                      // col 1 //col2
   int array[3][2]={{1,3},  // array in array[0    1   -->row 1
                   {2,4},                  // 1        -->row 2
                   {3,5} };                //2         -->row3

 for(int i=0;i<3;i++)    //helping to print row coloum
  {
    for(int j=0;j<2;j++)  //helping to print j column
    {
      cout <<array[i][j];   //in the form of matrix
    }
  cout << endl;    //printing in new line
   } 
  return 0;
}

 