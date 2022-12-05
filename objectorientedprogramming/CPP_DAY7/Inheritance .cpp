
#include<iostream>
using namespace std;
//parent
class Base
{
    int b;
    public:
    void funBase()
    {
        cout<<"\n ------Base::funBase()----";
    };
};

//child class
class derived:public Base
{
    public:
    int d;
    void funDerived()
    {
      //  this->b=11;
        this->d=6;
        cout<<"\n ------derived::funDerived()----";
    };
};
int main()
{
    Base b1;
    b1.funBase();
    cout<<"\nsize of base="<<sizeof(b1);

    derived d1;
    d1.funDerived();
    d1.funBase();
    cout<<"\nsize of derived="<<sizeof(d1);
    cout<<"\n";
    return 0;
}