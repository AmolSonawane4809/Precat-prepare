#include <stdio.h>

//Default Arguments
int sum(int a=0,int b=0,int c=0,int d=0)
{
    printf("\n a=%d  b=%d  c=%d  d=%d",a,b,c,d);
    int r=a+b+c+d;
    return r;
}
int main()
{

    int r;
    r=sum(1,2,3,4);
    printf("\n r=%d",r);
    r=sum(1,2,3);
    printf("\n r=%d",r);
    r=sum(1,2);
    printf("\n r=%d",r);
    r=sum();
    printf("\n r=%d",r);
    printf("\n");
    return 0;
}
