#include <stdio.h>
int main()
{
    int i=1,sum=0;

    while(sum<100)
    {
        sum+=i;
        printf("accumulate form 1 to %2d=%2d\n",i,sum);
        i++;
    }
    printf("must add up to %2d\n",i-1);

    return 0