#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:
    complex()
    {
        cout<<"\n -----complex()-----";
        this->real=1;
        this->imag=1;
    }
    complex(int r,int i)
    {
        cout<<"\n -----complex(int,int)-----";
        this->real=r;
        this->imag=i;
    }
    void setReal(int r)
    {
        this->real=r;
    }
    void setImag(int i)
    {
        this->imag=i;
    }
    int getImag()
    {
        return this->imag;
    }
    int getReal()
    {
        return this->real;
    }
    void acceptComplexNumber()
    {
        cout<<"\n enter real and imag";
        cin>>this->real>>this->imag;
    }
	void printComplexNumber()
    {
        cout<<"\n  complex number="<<this->real<<"+j"<<this->imag;
    }  
    ~complex()   
    {
        cout<<"\n -----~complex()-----";
    }   
};

int main()
{
    complex c1;
    c1.printComplexNumber();

    complex c2(22,33);
    c2.printComplexNumber();
    c2.acceptComplexNumber();
    c2.printComplexNumber();



    cout<<endl;
    return 0;
}

