#include <stdio.h>

//Structure is a collection of similar or dissimilar data.
// It is used to bind logically related data into a single unit.

struct time
{
    int hr,min,sec;
};//end of struct

//call by value
 void printTime(struct time t1)
 {
     printf("\n Time=%d:%d:%d",t1.hr,t1.min,t1.sec);
 }
 //call by address
void acceptTime(struct time *t1)
{
    printf("\n enter hr,min ,sec");
    scanf("%d%d%d",&t1->hr,&t1->min,&t1->sec);
}
int main()
{
    struct time t1;
    t1.hr=1;
    t1.min=15;
    t1.sec=55;
    printTime(t1);
    acceptTime(&t1);
    printTime(t1);
    printf("\n");
    return 0;
}
