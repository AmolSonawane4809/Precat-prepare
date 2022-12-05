#include<stdio.h>
 //Function declaration / Prototype / Function Signature
//int add(int n1,int n2);  //prototype 


//Function Definition
int add(int n1,int n2)
{
    //function body
    int r=n1+n2;
    return r;
}
int main()//
{
    int r;
    r=add(22,33);//Function Call
    printf("\n result=%d",r);
    printf("\n");
    return 0;
} 
