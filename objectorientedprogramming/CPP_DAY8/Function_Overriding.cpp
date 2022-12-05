#include<iostream>
using namespace std;


class shape
{
    public:
    virtual void cal_area()=0;//pure virtual func
    virtual void accept()=0;
};

class rect:public shape
{
    int l,b;
    public:
    void cal_area()
    {
        int area=l*b;
        cout<<"\n area of rect="<<area;
    }
    void accept()
    {
        cout<<"\n enter l and b";
        cin>>l>>b;
    }
};

class circle:public shape
{
    int r;
    public:
    void cal_area()
    {
        int area=3.14*r*r;
        cout<<"\n area of circle="<<area;
    }
    void accept()
    {
        cout<<"\n enter r";
        cin>>r;
    }
};


int main()
{
    int ch;
    rect r1;
    circle c1;
    shape *sptr=NULL;
    do
    {
       cout<<"\nEnter 0:exit  1:rect 2:circle";
       cin>>ch;
       switch (ch)
       {
       case 1:sptr=&r1;
           break;
       case 2:sptr=&c1;
           break;
       }
       if(sptr!=NULL)
       {
           sptr->accept();
           sptr->cal_area();
       }
        sptr=NULL;
    } while (ch!=0);
    









    // shape sp;
    // sp.accept();
    // sp.cal_area();

    // rect r1;
    // r1.accept();
    // r1.cal_area();

    // circle c1;
    // c1.accept();
    // c1.cal_area();

    //shape *sptr=NULL;
    //sptr=&r1;
    //sptr->accept();
    //sptr->cal_area();

    


    cout<<"\n";
    return 0;
}