#include <stdio.h>
//Structure in cpp
//Structure is a collection of similar or dissimilar data.
// It is used to bind logically related data into a single unit.

struct time
{
    private:
    int hr,min,sec;
    public:
    void printTime()
    {
        printf("\n Time=%d:%d:%d",hr,min,sec);
    }
    void acceptTime()
    {
        printf("\n enter hr,min ,sec");
        scanf("%d%d%d",&hr,&min,&sec);
    }
};//end of struct
int main()
{
    time t1; 
    t1.acceptTime();
   // t1.hr=14;//private member can not access outside class
    t1.printTime();
    printf("\n");
    return 0;
}
