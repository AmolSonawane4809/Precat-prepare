
#include<iostream>
using namespace std;
////Write a function in complex  class to add 2  complex numbers
class complex
{
    int real;
    int imag;
    public:
    complex(int r=0,int i=0)
    {
        this->real=r;
        this->imag=i;
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
//Operator Overloading Using member function    
    complex operator+(complex& c2)
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }  
    friend complex operator-(complex& c1,complex& c2);
};//end of class

//Operator Overloading Using non member function
//global function
complex operator-(complex& c1,complex& c2)
{
    complex c3;
    c3.real=c1.real-c2.real;
    c3.imag=c1.imag-c2.imag;
    return c3;
}

int main()
{
    complex c1(7,9), c2(5,3);
    complex c3;
    c3=c1+c2;  // c1.operator+(c2);  //12+j12
    c3.printComplexNumber();

    c3=c1-c2;  //operator-(c1,c2)   //2+j6
    c3.printComplexNumber();

    // int n1=4, n2=8;
    // int n3;
    // n3=n1+n2;
    // cout<<"\n n3="<<n3;


    
    cout<<"\n";
    return 0;
}