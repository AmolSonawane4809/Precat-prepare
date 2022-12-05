
#include<iostream>
using namespace std;
class MyData
{
private:
	int pin;
	int pass;

public:
	MyData(int pin,int pass)
    {
        this->pin=pin;
        this->pass=pass;
    }
	void PrintMyAccDetails()
    {
        cout<<"\n pin="<<pin<<"  pass="<<pass;
    }
    friend void AnyFunction();
   
};//end of class

//globle function
void AnyFunction()
{
    MyData d1(1111,1010);
    d1.pin=12333;
    d1.pass=999999;
    d1.PrintMyAccDetails();
}
int main()
{
    AnyFunction();
    
    cout<<"\n";
    return 0;
}
