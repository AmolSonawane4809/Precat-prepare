#include <stdio.h>
//Inline functions get replaced by compiler at its call statement. It ensures faster execution of function.

inline void printMessage()
{
    printf("hello PH8 ... :)");
    printf("\nwelcome in OOP world  ");
} 
int main()
{
    //...
    //...
    printMessage();
    printMessage();
    printMessage();
    printMessage();
    printMessage();
    printMessage();
    //....
    printf("\n");
    return 0;
}
