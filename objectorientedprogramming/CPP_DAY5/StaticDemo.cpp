#include<iostream>
using namespace std;

class account
{
    string name;
    static int rate;//Static variable is a shared 
    //variable in all the objects

    public:
    account(string n)
    {
        name=n;
    }
    void printAccount()
    {
        cout<<"\n name="<<name<<"  rate="<<rate;
    }
    //static member function is class level method
    static void updateRate(int newRate)
    {
       //this->  This pointer is not available in static member function  
        rate=newRate;
    }
};
//globle declaration of static data member
int account::rate=3;
int main()
{
    account a1("pradnya");
    a1.printAccount();
    cout<<"\n size of a1="<<sizeof(a1);

    //account::rate=4;
   // a1.updateRate(4);
    account::updateRate(4);
    account a2("manjusha");
    a2.printAccount();
    a1.printAccount();

    cout<<"\n";
    return 0;
}