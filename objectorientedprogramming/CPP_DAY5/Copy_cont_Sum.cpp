#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    static int count;
    public:
    complex(int r=0,int i=0)
    {
       // cout<<"\n -----complex(int,int)-----";
        this->real=r;
        this->imag=i;
    }
    complex(complex& refc1)
    {
        //cout<<"\n ----complex(complex&)-----";
        this->real=refc1.real;
        this->imag=refc1.imag;
    }
	void printComplexNumber()
    {
        cout<<"\n  complex number="<<this->real<<"+j"<<this->imag;
    }  
    complex sum(complex& c2)
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }
};
 int complex::count=0;
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex c2(c1);  //complex c2=c1;
    c2.printComplexNumber();

    cout<<"\n size of c1="<<sizeof(c1);
    

//     complex c2(3,2);
//     c2.printComplexNumber();

//     complex c3;
//     c3=c1.sum(c2);
//    // c3=c2.sum(c1);
//     c3.printComplexNumber();

   
   



    cout<<endl;
    return 0;
}

