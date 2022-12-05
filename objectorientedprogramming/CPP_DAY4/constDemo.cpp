
#include<iostream>
using namespace std;

class constDemo
{
    int n;
    const int c=99;
    mutable int m;
    public:
    constDemo():c(2)
    {
        this->n=1;
        // this->c=2;
        this->m=3;
    }
    constDemo(int roll):c(roll)
    {
        this->n=1;
        // this->c=2;
        this->m=3;
    }
    void printData()const
    {
        //n++;
        //c++;
        m++;
        cout<<"\n n="<<n;
        cout<<"\n c="<<c;
        cout<<"\n m="<<m;
    }
};

int main()
{
    constDemo d1(11111);
    d1.printData();

    constDemo d2(22222);
    constDemo d3(33333);
    cout<<"\n";
    return 0;
}
