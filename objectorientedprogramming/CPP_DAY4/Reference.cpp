
#include<iostream>
using namespace std;

//int refa=a   //swap by using  ref function
 void mySwap(int& refa,int& refb)
 {
    int t=refa;
    refa=refb;
    refb=t; 
 }

int main()
{

    int a=99,b=11;
    cout<<"\n before swap a="<<a<<"  b="<<b;
    mySwap(a,b);
    cout<<"\n after swap a="<<a<<"  b="<<b;




    // int n;
    // n=10;
    // int& ref=n; //Reference type variable

    // cout<<"\n value of n="<<n<<"  address of n="<<&n;
    // cout<<"\n value of ref="<<ref<<" address of ref="<<&ref;

    cout<<"\n";
    return 0;
}