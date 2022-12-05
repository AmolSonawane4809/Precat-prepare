
#include<iostream>
using namespace std;

//Car has-a engine 
//we declare object of a class engine as a data member 
//inside  class car then it represents association


class engine
{
    int cc;
    int fuel;
    public:
    void printEngineData()
    {
        cout<<"  engine cc="<<cc<<"  engine fuel capacity="<<fuel;
    }
    void acceptEngineData()
    {
        cout<<"\n enter engine cc and engine fuel capacity";
        cin>>cc>>fuel;
    }
};

class car
{
    int price;
    engine e1; //object of engine class is data member of car class

    public:
    void printCarInfo()
    {
        cout<<"\n car price="<<price;
        e1.printEngineData();
    }
    void acceptCarInfo()
    {
        cout<<"\n enter car price";
        cin>>price;
        e1.acceptEngineData();
    }
};

int main()
{
    // engine e1;
    // e1.acceptEngineData();
    // e1.printEngineData();

    car c1;
    c1.acceptCarInfo();
    c1.printCarInfo();
    cout<<"\n";
    return 0;
}