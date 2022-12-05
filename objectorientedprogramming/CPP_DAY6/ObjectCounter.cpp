#include<iostream>
using namespace std;
// Update complex class , add static data member as 
// count to store number of complex object created . 
// Add static function to print count of objects 

class complex
{
    int real;
    int imag;
    static int count;
    public:
    complex(int r=0,int i=0)
    {
        count++;
        this->real=r;
        this->imag=i;
    }
    complex(complex& c)
    {
        count++;
        this->real=c.real;
        this->imag=c.imag;
    }
    static void printObjectCount()
    {
        cout<<"\n current Object Count="<<count;
    }
	void printComplexNumber()
    {
        cout<<"\n  complex number="<<this->real<<"+j"<<this->imag;
    } 
};

int complex::count=0;
int main()
{
    complex::printObjectCount();//0
   
    complex c1;
    complex::printObjectCount();//1

    complex c2,c3;
    complex c4;
    complex::printObjectCount();//4
   
    complex c5(c1);
    complex::printObjectCount();//5

    cout<<endl;
    return 0;
}

