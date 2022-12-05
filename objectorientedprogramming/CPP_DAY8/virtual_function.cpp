
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
    virtual void accept()
    {
        cout<<"\n person ::accept() ";
        cout<<"\n enter name and age";
        cin>>name>>age;
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
    void accept()
    {
        cout<<"\n emp ::accept() ";
        person::accept();
        cout<<"\nEnter sal and empid";
        cin>>sal>>empid;
    }
};
int main()
{
//    person p1;
//    p1.accept();
//    p1.printPerson();

   emp e1;
   //e1.accept();
   //e1.printEmp();


   person *p=NULL;
   p=&e1;
   p->accept();
   p->printPerson();
   //p->printEmp();

    cout<<"\n";
    return 0;
}