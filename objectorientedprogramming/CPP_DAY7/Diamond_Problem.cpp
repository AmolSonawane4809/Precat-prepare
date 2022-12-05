
#include<iostream>
using namespace std;
//Diamond Problem

class A
{
    public:
    void funA()
    {
        cout<<"\n ---A::funA----";
    }
};
class B:virtual public A
{
    public:
    void funB()
    {
        cout<<"\n ---B::funB()----";
    }
};
class C:virtual public A
{
    public:
    void funC()
    {
        cout<<"\n ----C::funC()---";
    }
};

class D:public B,public C
{
    public:
    void funD()
    {
        cout<<"\n ---D::funD()----";
    }
};


int main()
{

    A aa;
    aa.funA();

    B bb;
    bb.funA();
    bb.funB();

    C cc;
    cc.funA();
    cc.funC();

    D dd;
    dd.funB();
    dd.funC();
    dd.funD();
    dd.funA();
    cout<<"\n";
    return 0;
}