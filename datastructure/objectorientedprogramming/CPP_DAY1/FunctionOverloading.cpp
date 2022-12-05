#include <stdio.h>

void printValue(int n)
{
    printf("\n int n=%d",n);
}
//Return type is not considered for function overloading.
// int printValue(int n) 
// {
//     printf("\n int n=%d",n);
//     return 9;
// }
void printValue(int n1,int n2)
{
    printf("\n int n1=%d  int n2=%d",n1,n2);
}
void printValue(char ch)
{
    printf("\n char ch=%c",ch);
}
void printValue(char ch,int n)
{
    printf("\n char ch=%c  int n=%d",ch,n);
}
void printValue(int n,char ch)
{
    printf("\n int n=%d char ch=%c",n,ch);
}

int main()
{
    printValue(22);
    printValue(1,2);
    printValue('A');
    printValue('z',11);
    printValue(33,'W');
    
    printf("\n");
    return 0;
}
