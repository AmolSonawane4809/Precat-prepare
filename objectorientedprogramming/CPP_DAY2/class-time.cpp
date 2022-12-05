#include <stdio.h>

class time
{
    private:
    int hr,min,sec;
    public:

    //If we call member function on object then compiler 
    //implicitly pass address of that object as a 
    //argument to the function implicitly call as this pointer.
    //const time *this
    void printTime()
    {
        printf("\n Time=%d:%d:%d",this->hr,this->min,this->sec);
    }
    void acceptTime()
    {
        printf("\n enter hr,min ,sec");
        scanf("%d%d%d",&this->hr,&this->min,&this->sec);
    }
};//end of struct
int main()
{
    time t1;  //time ->class and t1->object of class time 
    t1.acceptTime();
    t1.printTime();

    time t2;
    t2.acceptTime();
    t2.printTime();

    time t3;
    t3.acceptTime();
    t3.printTime();

    printf("\n");
    return 0;
}
