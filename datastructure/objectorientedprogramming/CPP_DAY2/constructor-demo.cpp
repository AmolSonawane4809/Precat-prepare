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
    time(int hr=0,int min=0,int sec=0)//Parameterized constructor with default Values
    {
        printf("\n ----- time(int,int,int)-------");
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    void initTime()
    {
        this->hr=0;
        this->min=0;
        this->sec=0;
    }
    void printTime()
    {
        printf("\n Time=%d:%d:%d",this->hr,this->min,this->sec);
    }
    void acceptTime()
    {
        printf("\n enter hr,min ,sec");
        scanf("%d%d%d",&this->hr,&this->min,&this->sec);
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

};//end of struct
int main()
{
    time t1;  
    t1.printTime();
    time t2;  
    t2.printTime();

    time t_p(8,10,11);
    t_p.printTime();

    time t_d(9,10,15);
    t_d.printTime();
    t_d.incrementTimeByOneSec();
    t_d.printTime();


    printf("\n");
    return 0;
}
