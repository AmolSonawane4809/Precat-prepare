#include<iostream>
using namespace std;

class complex
{
    int *realPtr;
    int imag;
    public:
    complex(int r=0,int i=0)
    {
        this->realPtr=new int;
        *this->realPtr=r;
        this->imag=i;
    }  
    complex(complex& c1)
    {
        this->realPtr=new int;
        this->imag=c1.imag;
        *this->realPtr=*c1.realPtr;
    }
	void printComplexNumber()
    {
        cout<<"\n  complex number="<<*this->realPtr<<"+j"<<this->imag;
    } 
    ~complex()
    {
        if(this->realPtr!=NULL)
            delete this->realPtr;
        this->realPtr=NULL;
    }  
};

int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex c2(c1);  
    c2.printComplexNumber();
    

    cout<<endl;
    return 0;
}

