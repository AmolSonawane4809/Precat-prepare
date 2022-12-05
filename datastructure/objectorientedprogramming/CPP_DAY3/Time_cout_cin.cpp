#include<iostream>
using namespace std;
#include <stdio.h>

class time
{
    private:
    int hr,min,sec;
    public:
    // time()  //Parameterless constructor 
    // {
    //     printf("\n ----- time()-------");
    //     this->hr=0;
    //     this->min=0;
    //     this->sec=0;
    // }

    //Parameterized constructor with default Values
    time(int h=0,int m=0,int s=0):hr(h),min(m),sec(s)
    {
        //printf("\n ----- time(int,int,int)-------");
        cout<<"\n ----- time(int,int,int)-------";
        // this->hr=h;
        // this->min=m;
        // this->sec=s;
    }
    void setMin(int min)
    {
        if(min<=59)
            this->min=min;
        else
           // printf("\n invalide data");
            cout<<"\n invalide data";
    }  
    //void setSec(int sec) {}
    //void SetHr(int hr){}
    int getHr()
    {
        return this->hr;
    }
    //int getMin(){}
    //int getSec(){}
    void printTime()
    {
       // printf("\n Time=%d:%d:%d",this->hr,this->min,this->sec);
        cout<<"\n Time="<<this->hr<<":"<<this->min<<":"<<this->sec;
    }
    void acceptTime()
    {
        //printf("\n enter hr,min ,sec");
        cout<<"\n enter hr,min ,sec";
       // scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        cin>>this->hr>>this->min>>this->sec;
    }
    void incrementTimeByOneSec() 
    {
        this->sec++;
        if(this->sec>=60)
        {
            this->sec=0;
            this->min++;
        }
        if(this->min>=60)
        {
            this->min=0;
            this->hr++;
        }
        if(this->hr>=24)
        {
            this->hr=0;
        }
    }
    ~time()
    {
        //printf("\n ---- ~time()----");
        cout<<"\n ---- ~time()----";
    }

};//end of struct
int main()
{
    // time t1;  
    // t1.printTime();
    // time t2;  
    // t2.printTime();

    time t_p(8,10,11);
    //8:0:11
    //t_p.min=10;
    t_p.setMin(90);
    t_p.printTime();

    int hr=t_p.getHr();
    //printf("\n hr=%d",hr);
    cout<<"\n hr="<<hr;


    // time t_d(9,10,15);
    // t_d.printTime();
    // t_d.incrementTimeByOneSec();
    // t_d.printTime();




    printf("\n");
    cout<<endl;
    return 0;
}
