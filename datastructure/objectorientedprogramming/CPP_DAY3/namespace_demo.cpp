
#include <stdio.h>

int g=1;
namespace ns1{
    int connector=4;
    int num1=22;
}
namespace ns2{
    int connector=3306;
    int num1=33;
}
int num1=22;

namespace n1{
    int a=55;
}
namespace n1{
    int a1=55;
}
namespace outerNS  //nexted namespace
{
    int num1=66;
    namespace NNS
    {
        int num1=77;
    }
}

namespace NS5
{
    int num1=88;
    int num2=89;
    int num3=90;
    int num4=91;
}

int main()
{
    g=2;
    ::g=22; // accessing globle data
    printf("\n globle ::num1=%d",::num1);
    
    int num1=11;
    printf("\n local num1=%d",num1);

    ns1::num1=12;
    printf("\n ns1::num1=%d", ns1::num1);
    ns2::num1=31;
     printf("\n ns2::num1=%d", ns2::num1);

    //n1::a=51;

   
    printf("\n outerNS::num1=%d",outerNS::num1);
    printf("\n outerNS::NNS::num1=%d",outerNS::NNS::num1);

    using namespace NS5;
    printf("\n ns5:: num2=%d", num2);

     printf("\n ");
    return 0;
}

