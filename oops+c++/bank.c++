#include<iostream>
#include<string>
using namespace std;
class Bank{ private:
           char name[50];
           char accounttype[50];
           int acc;
           double balance;
           public:
           void initial()
           { std::cin>>name>>acc>>accounttype>>balance; }
           void deposit()
           { float deposit;
            cin>>deposit;
            balance+=deposit; }
           void withdraw() { float withdraw;
                            cin>>withdraw;
                                    if(withdraw>balance){ cout<<"Insufficient amount\n";}
                            else balance-=withdraw; }
           void disp() { cout<<"NAME="<<name<<"\nACCNO="<<acc<<"\nTYPE="<<accounttype<<"\nBALANCEAMOUNT="<<balance<<endl; }
          };

int main(){float deposit,withdraw;
           Bank obj;
           obj.initial();
           obj.deposit();
           obj.withdraw();
           obj.disp();
           return 0;
          }