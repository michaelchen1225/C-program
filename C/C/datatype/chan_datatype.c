#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2;
    float f1=3.002F,f2=3.988F;

    n1=(int) f1;
    n2=(int) f2;
    printf("after changing:f1,f2=%d,%d",n1,n2);
}