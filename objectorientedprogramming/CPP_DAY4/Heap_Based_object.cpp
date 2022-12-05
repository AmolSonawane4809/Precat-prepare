
#include<iostream>
using namespace std;

class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n -----complex(int,int)-----";
        this->real=r;
        this->imag=i;
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
       

    cout<<"============";
    complex *cptr=new complex(); //Heap Based object 
    cptr->printComplexNumber();
    delete cptr;
    cptr=NULL;
    cout<<"============";
    cout<<"============";
    cout<<"============";

    complex c1(7,6);//stack Based object 
    c1.printComplexNumber();

    complex c2(3,2);//stack Based object 
    c2.printComplexNumber();


    cout<<endl;
    return 0;
}






 