
#include<iostream>
using namespace std;

//base class
//parent class
class person
{
   
   protected:
    string name;
    int age;

     public:
    person()
    {
        this->name="Gauri";
        this->age=22;
    }
    person(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    void printPerson()
    {
        cout<<"\n name="<<name<<" age="<<age;
    }
};


//Employee derived class also called as child class
//person is base class
//employee is-a person
//employee-->derived/child

//child class
//derived 
class emp:public person
{
    int empid;
    int sal;
    public:
    emp()
    {
        this->sal=10000;
        this->empid=201;
    }
    emp(string name,int age,int empid,int sal):person(name,age)
    {
        this->empid=empid;
        this->sal=sal;
    }
    void updateName(string newName)
    {
        this->name=newName;
    }
    void printEmp()
    {
        this->printPerson();
        cout<<"  empid="<<this->empid<<"  sal="<<this->sal;
    }
};


int main()
{
    emp e1("rajiv",34,101,20000);
    e1.printEmp();
    e1.updateName("rajeev");
    //e1.name="zzzzz";

    emp e2;  //derived class object 
    e2.printEmp();

    person *pptr;// base class pointer
    pptr=&e1;  //we can save employee object in base class(person) pointer
    pptr->printPerson();


    cout<<"\n";
    return 0;
}