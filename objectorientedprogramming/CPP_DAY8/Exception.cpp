#include<iostream>
using namespace std;

int main()
{

    int n=27,d=0;
    cout<<"\n enter n and d";
    try
    {
        cin>>n>>d;
        if(d==0)
        {
            throw 2.2;
            //throw 1;
            //throw 'A';
        }
        int res=n/d;
        cout<<"\n res="<<res;
    }
    catch(int n)
    {
        cout<<"\n ---error  (int)---";
    }
    catch(char n)
    {
        cout<<"\n ---error  (char)---";
    }
    catch(...)
    {
        cout<<"\n ---error  (...)---";
    }

    cout<<"\n";
    return 0;
}