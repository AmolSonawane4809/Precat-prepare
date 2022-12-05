#include <stdio.h>
//wchar_t :- it can store 16 bit character. It takes 2 bytes in memory.


int main()
{
    wchar_t wch=L'A';
    printf("\n wchar wch=%c  sizeof wch=%d",wch,sizeof(wch));
    
    printf("\n");
    return 0;
}
